# -*- coding: utf-8 -*-

# WATCH OUT
# when running this, be sure to have gcc installed

import os
import sys
import argparse
from shutil import copyfile

GCCoptions = "-O2"
# make this your path to gcc
GCC = "gcc"

path = os.path.dirname(os.path.abspath(__file__))


def compiletoc(file, tapelength, instructionmap):
    with open(file, encoding='utf8') as f:
        prgm = f.read()
    program = """
    # include <stdio.h>
int main()[[[
    char tape[{length}] = [[[0]]];
    int dpointer = {length}/2;

{nxt}
]]]
    """.format(length=tapelength, nxt="{}")

    instructions = []
    ipointer = -1
    while True:
        ipointer += 1
        try:
            instr = instructionmap[prgm[ipointer]]
        except KeyError:
            continue
        except IndexError:
            break
        if instr == 0:  # [
            nxt = []
            offset = 1
            while True:
                try:
                    nxt.append(instructionmap[prgm[ipointer+offset]])
                except KeyError:
                    offset += 1
                    continue
                except IndexError:
                    break
                offset += 1
                if len(nxt) == 2:
                    break
            if nxt == [5, 1]:
                instructions.append("\ttape[dpointer] = 0;\n")
                ipointer += (offset-1)
            else:
                instructions.append("\twhile(tape[dpointer] != 0)[[[\n")
        elif instr == 1:  # ]
            instructions.append("\t]]]\n")
        elif instr == 2:  # >'
            instructions.append("\tdpointer+=1;\n")
        elif instr == 3:  # <
            instructions.append("\tdpointer-=1;\n")
        elif instr == 4:  # +
            instructions.append("\ttape[dpointer]+=1;\n")
        elif instr == 5:  # -
            instructions.append("\ttape[dpointer]-=1;\n")
        elif instr == 6:  # .
            instructions.append("\tputchar(tape[dpointer]);\n")
        elif instr == 7:  # ,
            instructions.append("\tgetchar(tape[dpointer]);\n")

    if len(instructions) == 0:
        print("Warning source format probably incorrect. still compiling...")

    newinstructions = []
    i = 0
    while i < len(instructions):
        if instructions[i] == "\ttape[dpointer]-=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\ttape[dpointer]-=1;\n":
                counter += 1
            newinstructions.append("\ttape[dpointer]-={};\n".format(counter))
            i += counter - 1
        elif instructions[i] == "\ttape[dpointer]+=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\ttape[dpointer]+=1;\n":
                counter += 1
            newinstructions.append("\ttape[dpointer]+={};\n".format(counter))
            i += counter - 1
        elif instructions[i] == "\tdpointer+=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\tdpointer+=1;\n":
                counter += 1
            newinstructions.append("\tdpointer+={};\n".format(counter))
            i += counter - 1
        elif instructions[i] == "\tdpointer-=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\tdpointer-=1;\n":
                counter += 1
            newinstructions.append("\tdpointer-={};\n".format(counter))
            i += counter - 1
        else:
            newinstructions.append(instructions[i])
        i += 1

    res = program.format("".join(newinstructions)).replace(
        "[[[", "{").replace("]]]", "}")

    with open(os.path.join(path, "temp.c"), "w") as f:
        f.write(res)


def compiletopy(file, tapelength, instructionmap):
    with open(file, encoding='utf8') as f:
        prgm = f.read()
    program = """
tape = [0] * {length}
dpointer = {length}//2;
def getchar():
    return ord(input(">>>")[0])
def putchar(c):
    print(chr(c),end="")

{nxt}

    """.format(length=tapelength, nxt="{}")

    instructions = []
    ipointer = -1
    tabs = 0
    while True:
        ipointer += 1
        try:
            instr = instructionmap[prgm[ipointer]]
        except KeyError:
            continue
        except IndexError:
            break

        if instr == 0:  # [
            nxt = []
            offset = 1
            while True:
                try:
                    nxt.append(instructionmap[prgm[ipointer+offset]])
                except KeyError:
                    offset += 1
                    continue
                except IndexError:
                    break
                offset += 1
                if len(nxt) == 2:
                    break
            if nxt == [5, 1]:
                instructions.append(
                    "\t" * tabs + "tape[dpointer] = 0\n")
                ipointer += (offset-1)
            else:
                instructions.append(
                    "\t" * tabs + "while tape[dpointer] != 0:\n")
                tabs += 1
        elif instr == 1:  # ]
            tabs -= 1
            instructions.append("\n")
        elif instr == 2:  # >
            instructions.append("\t" * tabs + "dpointer+=1\n")

        elif instr == 3:  # <
            instructions.append("\t" * tabs + "dpointer-=1\n")
        elif instr == 4:  # +
            instructions.append(
                "\t" * tabs + "tape[dpointer]+=1\n")
        elif instr == 5:  # -
            instructions.append("\t" * tabs + "tape[dpointer]-=1\n")
        elif instr == 6:  # .
            instructions.append("\t" * tabs + "putchar(tape[dpointer])\n")
        elif instr == 7:  # ,
            instructions.append("\t" * tabs + "getchar(tape[dpointer])\n")

    if len(instructions) == 0:
        print("Warning source format probably incorrect. still compiling...")

    newinstructions = []
    i = 0
    while i < len(instructions):
        if instructions[i].replace("\t", "") == "tape[dpointer]-=1\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter].replace("\t", "") == "tape[dpointer]-=1\n":
                counter += 1
            newinstructions.append(
                "\t"*(instructions[i].count("\t")) + "tape[dpointer]-={}\n".format(counter))
            i += counter - 1
        elif instructions[i].replace("\t", "") == "tape[dpointer]+=1\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter].replace("\t", "") == "tape[dpointer]+=1\n":
                counter += 1
            newinstructions.append(
                "\t"*(instructions[i].count("\t")) + "tape[dpointer]+={}\n".format(counter))
            i += counter - 1
        elif instructions[i].replace("\t", "") == "dpointer+=1\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter].replace("\t", "") == "dpointer+=1\n":
                counter += 1
            newinstructions.append(
                "\t"*(instructions[i].count("\t")) + "dpointer+={}\n".format(counter))
            i += counter - 1
        elif instructions[i].replace("\t", "") == "dpointer-=1\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter].replace("\t", "") == "dpointer-=1\n":
                counter += 1
            newinstructions.append(
                "\t"*(instructions[i].count("\t")) + "dpointer-={}\n".format(counter))
            i += counter - 1
        else:
            newinstructions.append(instructions[i])
        i += 1

    with open(os.path.join(path, "temp.py"), "w") as f:
        f.write(program.format("".join(newinstructions)).replace(
            "[[[", "{").replace("]]]", "}"))


def compiletojs(file, tapelength, instructionmap):
    with open(file, encoding='utf8') as f:
        prgm = f.read()
    program = """

var readline = require('readline');
var rl = readline.createInterface([[[
    input: process.stdin,
    output: process.stdout
]]]);

async function input(msg)[[[
    return new Promise(function(resolve, reject) [[[

        console.log()
        rl.question(msg,function(answer)[[[
            resolve(answer,reject)
        ]]])
    ]]])
]]]


var tape = new Array({length}).fill(0);;
var dpointer = Math.floor({length}/2);
async function getchar()[[[
    var res = await input(">>>")
    return res.charCodeAt(0)
]]]

function putchar(c)[[[
    rl.output.write(String.fromCharCode(c))
]]]

async function main()[[[

{nxt}

]]]

main()
    """.format(length=tapelength, nxt="{}")

    instructions = []
    ipointer = -1
    while True:
        ipointer += 1
        try:
            instr = instructionmap[prgm[ipointer]]
        except KeyError:
            continue
        except IndexError:
            break
        if instr == 0:  # [
            nxt = []
            offset = 1
            while True:
                try:
                    nxt.append(instructionmap[prgm[ipointer+offset]])
                except KeyError:
                    offset += 1
                    continue
                except IndexError:
                    break
                offset += 1
                if len(nxt) == 2:
                    break
            if nxt == [5, 1]:
                instructions.append("\ttape[dpointer] = 0;\n")
                ipointer += (offset-1)
            else:
                instructions.append("\twhile(tape[dpointer] != 0)[[[\n")
        elif instr == 1:  # ]
            instructions.append("\t]]]\n")
        elif instr == 2:  # >'
            instructions.append("\tdpointer+=1;\n")
        elif instr == 3:  # <
            instructions.append("\tdpointer-=1;\n")
        elif instr == 4:  # +
            instructions.append("\ttape[dpointer]+=1;\n")
        elif instr == 5:  # -
            instructions.append("\ttape[dpointer]-=1;\n")
        elif instr == 6:  # .
            instructions.append("\tputchar(tape[dpointer]);\n")
        elif instr == 7:  # ,
            instructions.append("\ttape[dpointer] = await getchar();\n")

    if len(instructions) == 0:
        print("Warning source format probably incorrect. still compiling...")

    newinstructions = []
    i = 0
    while i < len(instructions):
        if instructions[i] == "\ttape[dpointer]-=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\ttape[dpointer]-=1;\n":
                counter += 1
            newinstructions.append("\ttape[dpointer]-={};\n".format(counter))
            i += counter - 1
        elif instructions[i] == "\ttape[dpointer]+=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\ttape[dpointer]+=1;\n":
                counter += 1
            newinstructions.append("\ttape[dpointer]+={};\n".format(counter))
            i += counter - 1
        elif instructions[i] == "\tdpointer+=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\tdpointer+=1;\n":
                counter += 1
            newinstructions.append("\tdpointer+={};\n".format(counter))
            i += counter - 1
        elif instructions[i] == "\tdpointer-=1;\n":
            counter = 1
            while i + counter < len(instructions) and instructions[i + counter] == "\tdpointer-=1;\n":
                counter += 1
            newinstructions.append("\tdpointer-={};\n".format(counter))
            i += counter - 1
        else:
            newinstructions.append(instructions[i])
        i += 1

    with open(os.path.join(path, "temp.js"), "w") as f:
        f.write(program.format("".join(newinstructions)).replace(
            "[[[", "{").replace("]]]", "}"))


def compiletohf(file, tapelength, instructionmap):
    with open(file, encoding='utf8') as f:
        prgm = f.read()
    heartfuck = {
        0: "💛",
        1: "💙",
        2: "💗",
        3: "💜",
        4: "💖",
        5: "❤",
        6: "💌",
        7: "❣️",
    }
    res = []
    for i in prgm:
        try:
            instr = instructionmap[i]
            res.append(heartfuck[instr])
        except KeyError:
            continue
    with open(os.path.join(path, "temp.hf"), "wb") as f:
        f.write("".join(res).encode("utf-8"))


def compiletobf(file, tapelength, instructionmap):
    with open(file, encoding='utf8') as f:
        prgm = f.read()
    brainfuck = {
        0: "[",
        1: "]",
        2: ">",
        3: "<",
        4: "+",
        5: "-",
        6: ".",
        7: ",",
    }

    res = []
    for i in prgm:
        try:
            instr = instructionmap[i]
            res.append(brainfuck[instr])
        except KeyError:
            continue
    with open(os.path.join(path, "temp.bf"), "w") as f:
        f.write("".join(res))


if __name__ == "__main__":
    heartfuck = {
        "💛": 0,
        "💙": 1,
        "💗": 2,
        "💜": 3,
        "💖": 4,
        "❤": 5,
        "💌": 6,
        "❣️": 7,
    }
    brainfuck = {
        "[": 0,
        "]": 1,
        ">": 2,
        "<": 3,
        "+": 4,
        "-": 5,
        ".": 6,
        ",": 7,
    }

    p = argparse.ArgumentParser(description="heartfuck compiler")
    p.add_argument("file", help="the file you want to compile")
    p.add_argument("-s", "--source",
                   choices=["heartfuck", "brainfuck"], help="source language")
    p.add_argument(
        "-d", "--dest", choices=["python", "c", "heartfuck", "brainfuck", "exe", "run", "javascript"], help="destination language")
    p.add_argument("-o", "--out", default=os.path.join(path,
                                                       "temp"), help="destination file")
    p.add_argument("-t", "--tape", type=int, default=30000, help="tape length")

    args = p.parse_args()
    if args.source == "heartfuck":
        lang = heartfuck
    elif args.source == "brainfuck":
        lang = brainfuck

    if args.dest == "c":
        try:
            compiletoc(args.file, args.tape, lang)
            copyfile(os.path.join(path, "temp.c"), args.out)
        finally:
            os.remove(os.path.join(path, "temp.c"))
    elif args.dest == "python":
        try:
            compiletopy(args.file, args.tape, lang)
            copyfile(os.path.join(path, "temp.py"), args.out)
        finally:
            os.remove(os.path.join(path, "temp.py"))
    elif args.dest == "javascript":
        try:
            compiletojs(args.file, args.tape, lang)
            copyfile(os.path.join(path, "temp.js"), args.out)
        finally:
            os.remove(os.path.join(path, "temp.js"))
    elif args.dest == "heartfuck":
        try:
            compiletohf(args.file, args.tape, lang)
            copyfile("{0}/temp.hf".format(path), args.out)
        finally:
            os.remove(os.path.join(path, "temp.hf"))
    elif args.dest == "brainfuck":
        try:
            compiletobf(args.file, args.tape, lang)
            copyfile("{0}/temp.bf".format(path), args.out)
        finally:
            os.remove(os.path.join(path, "temp.bf"))
    elif args.dest == "exe":
        try:
            compiletoc(args.file, args.tape, lang)
            os.system(
                "{2} {1} -o {0}/temp.exe {0}/temp.c".format(path, GCCoptions, GCC))
            copyfile("{0}/temp.exe".format(path), args.out)
        finally:
            os.remove(os.path.join(path, "temp.c"))
            os.remove(os.path.join(path, "temp.exe"))
    elif args.dest == "run":
        try:
            compiletoc(args.file, args.tape, lang)
            os.system(
                "{2} {1} -o {0}/temp.exe {0}/temp.c".format(path, GCCoptions, GCC))
            print("running:")
            os.system("{0}/temp.exe".format(path))
        finally:
            os.remove(os.path.join(path, "temp.c"))
            os.remove(os.path.join(path, "temp.exe"))
