import os
import re
import argparse

"""

layout

14995: PCtmp2
14995: PCtmp1
14996: PC
14997: TMP1
14998: TMP2
14999: TMP3
15000: STOP PRGM FLAG
15001: data section


"""

middle = 15000

path = os.path.dirname(os.path.abspath(__file__))

startlabel = re.compile(r"^(.*)?:")
instr = re.compile(r"^(.*?) +(.*?)?$")
sinstr = re.compile(r"^(.*?)$")
string = re.compile(r"\"(.*)\"")


class Instruction:

    def __init__(self, section, opcode, *args):

        self.sect = section
        self.opcode = opcode.strip()
        self.args = args

        self.sect.code.append("<<<<{0}<[-]+>[[-]<[-]>]<[>>>>>".format(
            "-"*self.sect.__class__.ipointer
        ))
        self.end = True
        self.parse()

        if self.end:
            self.sect.code.append("<<<<]<[>{0}+<-]>>>>>".format(
                "+"*self.sect.__class__.ipointer
            ))

        self.sect.__class__.ipointer += 1

    def parse(self):
        try:
            func = getattr(self, self.opcode)
            if not func.__name__.startswith("__") and not func.__name__ in ["parse", "parseaddr"]:
                return func()
            else:
                raise AttributeError
        except AttributeError:
            raise SyntaxError("invalid opcode '{}'".format(self.opcode))

    def parseaddr(self, string):
        if string in self.sect.labels:
            addr = self.sect.labels[string]
        elif string.isnumeric():
            addr = int(string)
        else:
            code = string
            for i in self.sect.labels:
                if i in string:
                    code = code.replace(
                        i, str(self.sect.labels[i])
                    )
            try:
                addr = eval(code)
            except Exception:
                raise SyntaxError(
                    "couldnt parse address for {} instruction".format(self.opcode()))
        return addr

    def db(self):
        """
        define bytes. defines a series of bytes like an ascii string
        """
        bytelist = []
        for i in self.args:
            m = string.match(i)
            if m:
                bytelist += (ord(i) for i in m.group(1))
            elif i.isnumeric() and int(i) >= 0 and int(i) < 255:
                bytelist.append(int(i))
            else:
                raise SyntaxError("invalid argument for db '{}'".format(i))

        for i in bytelist:
            self.sect.code.append("{}[-]{}{}".format(
                ">" * (self.sect.__class__.dpointer - middle),
                "+" * i,
                "<" * (self.sect.__class__.dpointer - middle)
            )
            )
            self.sect.__class__.dpointer += 1

    def mov(self):
        if len(self.args) > 2:
            raise SyntaxError(
                "too many arguments for out ({} > 2)".format(len(self.args))
            )
        if len(self.args) < 2:
            raise SyntaxError(
                "too few arguments for out ({} < 2)".format(len(self.args))
            )

        if self.args[0].startswith("$") and self.args[0][1:].isnumeric():
            addr2 = self.parseaddr(self.args[1])
            if addr2 >= middle:
                self.sect.code += "{}[-]{}{}".format(
                    ">" * (addr2 - middle),
                    "+" * int(self.args[0][1:]),
                    "<" * (addr2 - middle)
                )
            else:
                self.sect.code += "{}[-]{}{}".format(
                    "<" * -(addr2 - middle),
                    "+" * int(self.args[0][1:]),
                    ">" * -(addr2 - middle)
                )
            return

        addr1 = self.parseaddr(self.args[0])
        addr2 = self.parseaddr(self.args[1])

        if addr1 >= middle:
            self.sect.code += "<[-]>{0}[-{1}<+>{0}]{1}".format(
                ">" * (addr1 - middle),
                "<" * (addr1 - middle)
            )
        else:
            self.sect.code += "<[-]>{0}[-{1}<+>{0}]{1}".format(
                "<" * -(addr1 - middle),
                ">" * -(addr1 - middle)
            )

        if addr1 >= middle and addr2 > addr1:
            self.sect.code += "{0}{2}[-]{1}{3}<[->{0}+{2}+{3}{1}<]>".format(
                ">" * (addr1 - middle),
                "<" * (addr1 - middle),
                ">" * (addr2 - addr1),
                "<" * (addr2 - addr1),
            )
            return
        if addr1 >= middle and addr2 <= addr1:
            self.sect.code += "{0}{2}[-]{1}{3}<[->{0}+{2}+{3}{1}<]>".format(
                ">" * (addr1 - middle),
                "<" * (addr1 - middle),
                "<" * (addr1 - addr2),
                ">" * (addr1 - addr2),
            )
            return
        if addr1 < middle and addr2 > addr1:
            self.sect.code += "{0}{2}[-]{1}{3}<[->{0}+{2}+{3}{1}<]>".format(
                "<" * -(addr1 - middle),
                ">" * -(addr1 - middle),
                ">" * (addr2 - addr1),
                "<" * (addr2 - addr1),
            )
            return
        if addr1 < middle and addr2 <= addr1:
            self.sect.code += "{0}{2}[-]{1}{3}<[->{0}+{2}+{3}{1}<]>".format(
                "<" * -(addr1 - middle),
                ">" * -(addr1 - middle),
                "<" * (addr1 - addr2),
                ">" * (addr1 - addr2),
            )
            return

    def out(self):
        if len(self.args) > 1:
            raise SyntaxError(
                "too many arguments for out ({} > 1)".format(len(self.args))
            )

        addr = self.parseaddr(self.args[0])

        if addr > middle:
            self.sect.code += "{}.{}".format(
                ">" * (addr - middle),
                "<" * (addr - middle)
            )
        else:
            self.sect.code += "{}.{}".format(
                "<" * -(addr - middle),
                ">" * -(addr - middle)
            )

    def stop(self):
        self.sect.code += "-<<<<[-]>>>><<<<]>>>>"
        self.end = False

    def __repr__(self):
        return "{} {}".format(self.opcode, ",".join(self.args))


class Section:
    dipointer = middle+1
    ipointer = 1

    def __init__(self):
        self.lines = []
        self.code = ["+<<<<[-]+>>>>["]
        self.labels = {"origin": middle + 1}

    def add_line(self, line):
        self.lines.append(line)

    @classmethod
    def start_parse(cls):
        cls.dpointer = middle+1
        cls.ipointer = 1

    def parseline(self, line):

        m = startlabel.match(line)
        if m:

            self.labels[str(m.group(1))] = self.__class__.dpointer
            self.parseline(startlabel.sub(line, "").strip())
            return

        m = instr.match(line)
        if m:
            if m.group(1).strip() == "":
                return
            Instruction(
                self,
                m.group(1), *[i.strip() for i in m.group(2).split(",")]
            )
            return

        m = sinstr.match(line)
        if m:
            if m.group(1).strip() == "":
                return
            Instruction(
                self,
                m.group(1)
            )
            return

    def parse(self):

        for i in self.lines:
            self.parseline(i.strip())
        Instruction(
            self,
            "stop"
        )

        self.code.append("]")

        # print(self.instructions, self.labels, "".join(self.code))


def optimize(code):
    while "><" in code:
        code = code.replace("><", "", 1)
    while "<>" in code:
        code = code.replace("<>", "", 1)

    return code


def main(filename):

    with open(filename) as f:
        asmprogram = f.readlines()

    current = "text"
    section = Section()
    for line in asmprogram:
        section.add_line(line)

    Section.start_parse()
    section.parse()
    return optimize("".join(section.code))


if __name__ == "__main__":

    p = argparse.ArgumentParser(description="brainfuck generator")
    p.add_argument("file", help="the file you want to compile")
    p.add_argument("-o", "--out", default=os.path.join(path,
                                                       "temp"), help="destination file")
    args = p.parse_args()

    with open(args.out, "w") as f:
        code = main(args.file)
        f.write(code)
        print(code)
