
tape = [0] * 30000
dpointer = 30000//2;
def getchar():
    return ord(input(">>>")[0])
def putchar(c):
    print(chr(c),end="")

tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=10
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=16
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=10
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=5
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=15
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=11
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=16
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=9
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=14
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=10
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=5
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=7
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=7
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=6
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=6
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=5
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=12
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=2
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
tape[dpointer]+=3
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=5
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
tape[dpointer]+=2
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=10
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=4
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=4
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=4
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=7
putchar(tape[dpointer])
tape[dpointer]+=8
putchar(tape[dpointer])
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=13
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=1
putchar(tape[dpointer])
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=9
	dpointer-=1
dpointer+=1
tape[dpointer]+=8
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
tape[dpointer]+=6
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=9
while tape[dpointer] != 0:
	dpointer+=1
	dpointer-=1
dpointer+=1
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=8
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=8
	dpointer-=1
dpointer+=1
tape[dpointer]+=3
putchar(tape[dpointer])
dpointer-=1
tape[dpointer]+=3
while tape[dpointer] != 0:
	dpointer+=1
	tape[dpointer]+=3
	dpointer-=1
dpointer+=1
tape[dpointer]+=6
putchar(tape[dpointer])
tape[dpointer]+=7
putchar(tape[dpointer])


    