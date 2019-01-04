
    # include <stdio.h>
int main(){
    int tape[30000] = {0};
    int dpointer = 30000/2;

	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END0;}
	START0:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START0;}
	END0:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1;}
	START1:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1;}
	END1:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END2;}
	START2:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START2;}
	END2:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END3;}
	START3:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START3;}
	END3:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END4;}
	START4:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START4;}
	END4:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END5;}
	START5:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START5;}
	END5:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END6;}
	START6:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START6;}
	END6:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END7;}
	START7:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START7;}
	END7:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END8;}
	START8:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START8;}
	END8:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END9;}
	START9:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START9;}
	END9:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END10;}
	START10:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START10;}
	END10:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END11;}
	START11:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START11;}
	END11:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END12;}
	START12:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START12;}
	END12:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END13;}
	START13:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START13;}
	END13:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END14;}
	START14:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START14;}
	END14:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END15;}
	START15:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START15;}
	END15:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END16;}
	START16:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START16;}
	END16:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END17;}
	START17:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START17;}
	END17:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END18;}
	START18:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START18;}
	END18:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END19;}
	START19:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START19;}
	END19:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END20;}
	START20:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START20;}
	END20:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END21;}
	START21:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START21;}
	END21:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END22;}
	START22:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START22;}
	END22:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END23;}
	START23:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START23;}
	END23:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END24;}
	START24:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START24;}
	END24:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END25;}
	START25:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START25;}
	END25:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END26;}
	START26:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START26;}
	END26:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END27;}
	START27:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START27;}
	END27:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END28;}
	START28:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START28;}
	END28:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END29;}
	START29:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START29;}
	END29:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END30;}
	START30:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START30;}
	END30:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END31;}
	START31:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START31;}
	END31:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END32;}
	START32:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START32;}
	END32:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END33;}
	START33:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START33;}
	END33:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END34;}
	START34:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START34;}
	END34:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END35;}
	START35:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START35;}
	END35:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END36;}
	START36:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START36;}
	END36:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END37;}
	START37:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START37;}
	END37:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END38;}
	START38:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START38;}
	END38:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END39;}
	START39:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START39;}
	END39:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END40;}
	START40:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START40;}
	END40:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END41;}
	START41:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START41;}
	END41:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END42;}
	START42:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START42;}
	END42:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END43;}
	START43:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START43;}
	END43:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END44;}
	START44:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START44;}
	END44:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END45;}
	START45:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START45;}
	END45:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END46;}
	START46:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START46;}
	END46:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END47;}
	START47:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START47;}
	END47:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END48;}
	START48:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START48;}
	END48:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END49;}
	START49:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START49;}
	END49:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END50;}
	START50:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START50;}
	END50:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END51;}
	START51:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START51;}
	END51:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END52;}
	START52:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START52;}
	END52:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END53;}
	START53:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START53;}
	END53:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END54;}
	START54:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START54;}
	END54:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END55;}
	START55:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START55;}
	END55:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END56;}
	START56:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START56;}
	END56:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END57;}
	START57:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START57;}
	END57:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END58;}
	START58:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START58;}
	END58:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END59;}
	START59:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START59;}
	END59:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END60;}
	START60:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START60;}
	END60:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END61;}
	START61:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START61;}
	END61:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END62;}
	START62:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START62;}
	END62:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END63;}
	START63:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START63;}
	END63:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END64;}
	START64:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START64;}
	END64:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END65;}
	START65:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START65;}
	END65:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END66;}
	START66:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START66;}
	END66:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END67;}
	START67:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START67;}
	END67:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END68;}
	START68:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START68;}
	END68:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END69;}
	START69:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START69;}
	END69:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END70;}
	START70:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START70;}
	END70:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END71;}
	START71:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START71;}
	END71:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END72;}
	START72:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START72;}
	END72:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END73;}
	START73:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START73;}
	END73:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END74;}
	START74:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START74;}
	END74:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END75;}
	START75:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START75;}
	END75:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END76;}
	START76:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START76;}
	END76:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END77;}
	START77:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START77;}
	END77:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END78;}
	START78:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START78;}
	END78:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END79;}
	START79:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START79;}
	END79:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END80;}
	START80:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START80;}
	END80:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END81;}
	START81:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START81;}
	END81:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END82;}
	START82:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START82;}
	END82:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END83;}
	START83:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START83;}
	END83:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END84;}
	START84:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START84;}
	END84:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END85;}
	START85:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START85;}
	END85:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END86;}
	START86:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START86;}
	END86:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END87;}
	START87:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START87;}
	END87:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END88;}
	START88:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START88;}
	END88:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END89;}
	START89:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START89;}
	END89:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END90;}
	START90:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START90;}
	END90:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END91;}
	START91:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START91;}
	END91:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END92;}
	START92:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START92;}
	END92:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END93;}
	START93:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START93;}
	END93:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END94;}
	START94:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START94;}
	END94:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END95;}
	START95:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START95;}
	END95:;
	dpointer+=1;
	tape[dpointer]+=10;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END96;}
	START96:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START96;}
	END96:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END97;}
	START97:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START97;}
	END97:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END98;}
	START98:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START98;}
	END98:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END99;}
	START99:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START99;}
	END99:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END100;}
	START100:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START100;}
	END100:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END101;}
	START101:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START101;}
	END101:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END102;}
	START102:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START102;}
	END102:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END103;}
	START103:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START103;}
	END103:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END104;}
	START104:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START104;}
	END104:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END105;}
	START105:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START105;}
	END105:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END106;}
	START106:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START106;}
	END106:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END107;}
	START107:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START107;}
	END107:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END108;}
	START108:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START108;}
	END108:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END109;}
	START109:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START109;}
	END109:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END110;}
	START110:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START110;}
	END110:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END111;}
	START111:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START111;}
	END111:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END112;}
	START112:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START112;}
	END112:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END113;}
	START113:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START113;}
	END113:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END114;}
	START114:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START114;}
	END114:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END115;}
	START115:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START115;}
	END115:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END116;}
	START116:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START116;}
	END116:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END117;}
	START117:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START117;}
	END117:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END118;}
	START118:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START118;}
	END118:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END119;}
	START119:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START119;}
	END119:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END120;}
	START120:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START120;}
	END120:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END121;}
	START121:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START121;}
	END121:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END122;}
	START122:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START122;}
	END122:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END123;}
	START123:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START123;}
	END123:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END124;}
	START124:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START124;}
	END124:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END125;}
	START125:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START125;}
	END125:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END126;}
	START126:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START126;}
	END126:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END127;}
	START127:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START127;}
	END127:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END128;}
	START128:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START128;}
	END128:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END129;}
	START129:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START129;}
	END129:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END130;}
	START130:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START130;}
	END130:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END131;}
	START131:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START131;}
	END131:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END132;}
	START132:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START132;}
	END132:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END133;}
	START133:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START133;}
	END133:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END134;}
	START134:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START134;}
	END134:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END135;}
	START135:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START135;}
	END135:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END136;}
	START136:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START136;}
	END136:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END137;}
	START137:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START137;}
	END137:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END138;}
	START138:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START138;}
	END138:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END139;}
	START139:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START139;}
	END139:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END140;}
	START140:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START140;}
	END140:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END141;}
	START141:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START141;}
	END141:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END142;}
	START142:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START142;}
	END142:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END143;}
	START143:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START143;}
	END143:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END144;}
	START144:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START144;}
	END144:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END145;}
	START145:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START145;}
	END145:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END146;}
	START146:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START146;}
	END146:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END147;}
	START147:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START147;}
	END147:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END148;}
	START148:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START148;}
	END148:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END149;}
	START149:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START149;}
	END149:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END150;}
	START150:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START150;}
	END150:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END151;}
	START151:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START151;}
	END151:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END152;}
	START152:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START152;}
	END152:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END153;}
	START153:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START153;}
	END153:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END154;}
	START154:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START154;}
	END154:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END155;}
	START155:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START155;}
	END155:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END156;}
	START156:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START156;}
	END156:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END157;}
	START157:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START157;}
	END157:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END158;}
	START158:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START158;}
	END158:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END159;}
	START159:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START159;}
	END159:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END160;}
	START160:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START160;}
	END160:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END161;}
	START161:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START161;}
	END161:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END162;}
	START162:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START162;}
	END162:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END163;}
	START163:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START163;}
	END163:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END164;}
	START164:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START164;}
	END164:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END165;}
	START165:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START165;}
	END165:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END166;}
	START166:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START166;}
	END166:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END167;}
	START167:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START167;}
	END167:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END168;}
	START168:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START168;}
	END168:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END169;}
	START169:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START169;}
	END169:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END170;}
	START170:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START170;}
	END170:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END171;}
	START171:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START171;}
	END171:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END172;}
	START172:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START172;}
	END172:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END173;}
	START173:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START173;}
	END173:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END174;}
	START174:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START174;}
	END174:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END175;}
	START175:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START175;}
	END175:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END176;}
	START176:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START176;}
	END176:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END177;}
	START177:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START177;}
	END177:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END178;}
	START178:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START178;}
	END178:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END179;}
	START179:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START179;}
	END179:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END180;}
	START180:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START180;}
	END180:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END181;}
	START181:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START181;}
	END181:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END182;}
	START182:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START182;}
	END182:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END183;}
	START183:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START183;}
	END183:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END184;}
	START184:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START184;}
	END184:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END185;}
	START185:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START185;}
	END185:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END186;}
	START186:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START186;}
	END186:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END187;}
	START187:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START187;}
	END187:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END188;}
	START188:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START188;}
	END188:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END189;}
	START189:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START189;}
	END189:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END190;}
	START190:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START190;}
	END190:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END191;}
	START191:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START191;}
	END191:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END192;}
	START192:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START192;}
	END192:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END193;}
	START193:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START193;}
	END193:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END194;}
	START194:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START194;}
	END194:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END195;}
	START195:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START195;}
	END195:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END196;}
	START196:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START196;}
	END196:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END197;}
	START197:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START197;}
	END197:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END198;}
	START198:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START198;}
	END198:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END199;}
	START199:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START199;}
	END199:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END200;}
	START200:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START200;}
	END200:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END201;}
	START201:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START201;}
	END201:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END202;}
	START202:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START202;}
	END202:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END203;}
	START203:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START203;}
	END203:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END204;}
	START204:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START204;}
	END204:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END205;}
	START205:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START205;}
	END205:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END206;}
	START206:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START206;}
	END206:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END207;}
	START207:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START207;}
	END207:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END208;}
	START208:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START208;}
	END208:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END209;}
	START209:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START209;}
	END209:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END210;}
	START210:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START210;}
	END210:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END211;}
	START211:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START211;}
	END211:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END212;}
	START212:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START212;}
	END212:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END213;}
	START213:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START213;}
	END213:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END214;}
	START214:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START214;}
	END214:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END215;}
	START215:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START215;}
	END215:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END216;}
	START216:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START216;}
	END216:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END217;}
	START217:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START217;}
	END217:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END218;}
	START218:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START218;}
	END218:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END219;}
	START219:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START219;}
	END219:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END220;}
	START220:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START220;}
	END220:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END221;}
	START221:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START221;}
	END221:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END222;}
	START222:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START222;}
	END222:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END223;}
	START223:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START223;}
	END223:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END224;}
	START224:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START224;}
	END224:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END225;}
	START225:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START225;}
	END225:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END226;}
	START226:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START226;}
	END226:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END227;}
	START227:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START227;}
	END227:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END228;}
	START228:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START228;}
	END228:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END229;}
	START229:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START229;}
	END229:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END230;}
	START230:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START230;}
	END230:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END231;}
	START231:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START231;}
	END231:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END232;}
	START232:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START232;}
	END232:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END233;}
	START233:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START233;}
	END233:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END234;}
	START234:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START234;}
	END234:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END235;}
	START235:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START235;}
	END235:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END236;}
	START236:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START236;}
	END236:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END237;}
	START237:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START237;}
	END237:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END238;}
	START238:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START238;}
	END238:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END239;}
	START239:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START239;}
	END239:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END240;}
	START240:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START240;}
	END240:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END241;}
	START241:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START241;}
	END241:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END242;}
	START242:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START242;}
	END242:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END243;}
	START243:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START243;}
	END243:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END244;}
	START244:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START244;}
	END244:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END245;}
	START245:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START245;}
	END245:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END246;}
	START246:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START246;}
	END246:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END247;}
	START247:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START247;}
	END247:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END248;}
	START248:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START248;}
	END248:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END249;}
	START249:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START249;}
	END249:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END250;}
	START250:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START250;}
	END250:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END251;}
	START251:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START251;}
	END251:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END252;}
	START252:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START252;}
	END252:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END253;}
	START253:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START253;}
	END253:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END254;}
	START254:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START254;}
	END254:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END255;}
	START255:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START255;}
	END255:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END256;}
	START256:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START256;}
	END256:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END257;}
	START257:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START257;}
	END257:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END258;}
	START258:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START258;}
	END258:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END259;}
	START259:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START259;}
	END259:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END260;}
	START260:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START260;}
	END260:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END261;}
	START261:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START261;}
	END261:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END262;}
	START262:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START262;}
	END262:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END263;}
	START263:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START263;}
	END263:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END264;}
	START264:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START264;}
	END264:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END265;}
	START265:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START265;}
	END265:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END266;}
	START266:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START266;}
	END266:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END267;}
	START267:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START267;}
	END267:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END268;}
	START268:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START268;}
	END268:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END269;}
	START269:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START269;}
	END269:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END270;}
	START270:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START270;}
	END270:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END271;}
	START271:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START271;}
	END271:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END272;}
	START272:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START272;}
	END272:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END273;}
	START273:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START273;}
	END273:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END274;}
	START274:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START274;}
	END274:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END275;}
	START275:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START275;}
	END275:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END276;}
	START276:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START276;}
	END276:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END277;}
	START277:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START277;}
	END277:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END278;}
	START278:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START278;}
	END278:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END279;}
	START279:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START279;}
	END279:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END280;}
	START280:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START280;}
	END280:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END281;}
	START281:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START281;}
	END281:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END282;}
	START282:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START282;}
	END282:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END283;}
	START283:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START283;}
	END283:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END284;}
	START284:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START284;}
	END284:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END285;}
	START285:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START285;}
	END285:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END286;}
	START286:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START286;}
	END286:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END287;}
	START287:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START287;}
	END287:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END288;}
	START288:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START288;}
	END288:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END289;}
	START289:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START289;}
	END289:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END290;}
	START290:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START290;}
	END290:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END291;}
	START291:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START291;}
	END291:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END292;}
	START292:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START292;}
	END292:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END293;}
	START293:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START293;}
	END293:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END294;}
	START294:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START294;}
	END294:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END295;}
	START295:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START295;}
	END295:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END296;}
	START296:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START296;}
	END296:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END297;}
	START297:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START297;}
	END297:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END298;}
	START298:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START298;}
	END298:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END299;}
	START299:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START299;}
	END299:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END300;}
	START300:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START300;}
	END300:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END301;}
	START301:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START301;}
	END301:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END302;}
	START302:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START302;}
	END302:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END303;}
	START303:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START303;}
	END303:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END304;}
	START304:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START304;}
	END304:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END305;}
	START305:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START305;}
	END305:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END306;}
	START306:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START306;}
	END306:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END307;}
	START307:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START307;}
	END307:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END308;}
	START308:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START308;}
	END308:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END309;}
	START309:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START309;}
	END309:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END310;}
	START310:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START310;}
	END310:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END311;}
	START311:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START311;}
	END311:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END312;}
	START312:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START312;}
	END312:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END313;}
	START313:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START313;}
	END313:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END314;}
	START314:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START314;}
	END314:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END315;}
	START315:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START315;}
	END315:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END316;}
	START316:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START316;}
	END316:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END317;}
	START317:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START317;}
	END317:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END318;}
	START318:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START318;}
	END318:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END319;}
	START319:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START319;}
	END319:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END320;}
	START320:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START320;}
	END320:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END321;}
	START321:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START321;}
	END321:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END322;}
	START322:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START322;}
	END322:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END323;}
	START323:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START323;}
	END323:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END324;}
	START324:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START324;}
	END324:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END325;}
	START325:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START325;}
	END325:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END326;}
	START326:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START326;}
	END326:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END327;}
	START327:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START327;}
	END327:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END328;}
	START328:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START328;}
	END328:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END329;}
	START329:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START329;}
	END329:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END330;}
	START330:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START330;}
	END330:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END331;}
	START331:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START331;}
	END331:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END332;}
	START332:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START332;}
	END332:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END333;}
	START333:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START333;}
	END333:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END334;}
	START334:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START334;}
	END334:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END335;}
	START335:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START335;}
	END335:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END336;}
	START336:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START336;}
	END336:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END337;}
	START337:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START337;}
	END337:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END338;}
	START338:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START338;}
	END338:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END339;}
	START339:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START339;}
	END339:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END340;}
	START340:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START340;}
	END340:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END341;}
	START341:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START341;}
	END341:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END342;}
	START342:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START342;}
	END342:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END343;}
	START343:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START343;}
	END343:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END344;}
	START344:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START344;}
	END344:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END345;}
	START345:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START345;}
	END345:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END346;}
	START346:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START346;}
	END346:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END347;}
	START347:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START347;}
	END347:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END348;}
	START348:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START348;}
	END348:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END349;}
	START349:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START349;}
	END349:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END350;}
	START350:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START350;}
	END350:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END351;}
	START351:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START351;}
	END351:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END352;}
	START352:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START352;}
	END352:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END353;}
	START353:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START353;}
	END353:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END354;}
	START354:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START354;}
	END354:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END355;}
	START355:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START355;}
	END355:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END356;}
	START356:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START356;}
	END356:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END357;}
	START357:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START357;}
	END357:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END358;}
	START358:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START358;}
	END358:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END359;}
	START359:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START359;}
	END359:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END360;}
	START360:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START360;}
	END360:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END361;}
	START361:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START361;}
	END361:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END362;}
	START362:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START362;}
	END362:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END363;}
	START363:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START363;}
	END363:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END364;}
	START364:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START364;}
	END364:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END365;}
	START365:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START365;}
	END365:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END366;}
	START366:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START366;}
	END366:;
	dpointer+=1;
	tape[dpointer]+=16;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END367;}
	START367:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START367;}
	END367:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END368;}
	START368:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START368;}
	END368:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END369;}
	START369:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START369;}
	END369:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END370;}
	START370:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START370;}
	END370:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END371;}
	START371:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START371;}
	END371:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END372;}
	START372:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START372;}
	END372:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END373;}
	START373:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START373;}
	END373:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END374;}
	START374:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START374;}
	END374:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END375;}
	START375:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START375;}
	END375:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END376;}
	START376:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START376;}
	END376:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END377;}
	START377:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START377;}
	END377:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END378;}
	START378:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START378;}
	END378:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END379;}
	START379:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START379;}
	END379:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END380;}
	START380:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START380;}
	END380:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END381;}
	START381:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START381;}
	END381:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END382;}
	START382:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START382;}
	END382:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END383;}
	START383:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START383;}
	END383:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END384;}
	START384:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START384;}
	END384:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END385;}
	START385:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START385;}
	END385:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END386;}
	START386:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START386;}
	END386:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END387;}
	START387:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START387;}
	END387:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END388;}
	START388:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START388;}
	END388:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END389;}
	START389:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START389;}
	END389:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END390;}
	START390:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START390;}
	END390:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END391;}
	START391:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START391;}
	END391:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END392;}
	START392:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START392;}
	END392:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END393;}
	START393:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START393;}
	END393:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END394;}
	START394:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START394;}
	END394:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END395;}
	START395:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START395;}
	END395:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END396;}
	START396:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START396;}
	END396:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END397;}
	START397:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START397;}
	END397:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END398;}
	START398:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START398;}
	END398:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END399;}
	START399:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START399;}
	END399:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END400;}
	START400:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START400;}
	END400:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END401;}
	START401:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START401;}
	END401:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END402;}
	START402:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START402;}
	END402:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END403;}
	START403:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START403;}
	END403:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END404;}
	START404:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START404;}
	END404:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END405;}
	START405:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START405;}
	END405:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END406;}
	START406:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START406;}
	END406:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END407;}
	START407:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START407;}
	END407:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END408;}
	START408:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START408;}
	END408:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END409;}
	START409:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START409;}
	END409:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END410;}
	START410:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START410;}
	END410:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END411;}
	START411:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START411;}
	END411:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END412;}
	START412:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START412;}
	END412:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END413;}
	START413:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START413;}
	END413:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END414;}
	START414:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START414;}
	END414:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END415;}
	START415:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START415;}
	END415:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END416;}
	START416:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START416;}
	END416:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END417;}
	START417:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START417;}
	END417:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END418;}
	START418:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START418;}
	END418:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END419;}
	START419:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START419;}
	END419:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END420;}
	START420:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START420;}
	END420:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END421;}
	START421:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START421;}
	END421:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END422;}
	START422:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START422;}
	END422:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END423;}
	START423:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START423;}
	END423:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END424;}
	START424:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START424;}
	END424:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END425;}
	START425:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START425;}
	END425:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END426;}
	START426:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START426;}
	END426:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END427;}
	START427:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START427;}
	END427:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END428;}
	START428:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START428;}
	END428:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END429;}
	START429:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START429;}
	END429:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END430;}
	START430:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START430;}
	END430:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END431;}
	START431:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START431;}
	END431:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END432;}
	START432:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START432;}
	END432:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END433;}
	START433:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START433;}
	END433:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END434;}
	START434:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START434;}
	END434:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END435;}
	START435:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START435;}
	END435:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END436;}
	START436:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START436;}
	END436:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END437;}
	START437:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START437;}
	END437:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END438;}
	START438:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START438;}
	END438:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END439;}
	START439:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START439;}
	END439:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END440;}
	START440:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START440;}
	END440:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END441;}
	START441:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START441;}
	END441:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END442;}
	START442:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START442;}
	END442:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END443;}
	START443:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START443;}
	END443:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END444;}
	START444:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START444;}
	END444:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END445;}
	START445:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START445;}
	END445:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END446;}
	START446:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START446;}
	END446:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END447;}
	START447:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START447;}
	END447:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END448;}
	START448:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START448;}
	END448:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END449;}
	START449:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START449;}
	END449:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END450;}
	START450:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START450;}
	END450:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END451;}
	START451:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START451;}
	END451:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END452;}
	START452:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START452;}
	END452:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END453;}
	START453:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START453;}
	END453:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END454;}
	START454:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START454;}
	END454:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END455;}
	START455:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START455;}
	END455:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END456;}
	START456:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START456;}
	END456:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END457;}
	START457:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START457;}
	END457:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END458;}
	START458:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START458;}
	END458:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END459;}
	START459:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START459;}
	END459:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END460;}
	START460:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START460;}
	END460:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END461;}
	START461:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START461;}
	END461:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END462;}
	START462:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START462;}
	END462:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END463;}
	START463:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START463;}
	END463:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END464;}
	START464:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START464;}
	END464:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END465;}
	START465:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START465;}
	END465:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END466;}
	START466:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START466;}
	END466:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END467;}
	START467:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START467;}
	END467:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END468;}
	START468:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START468;}
	END468:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END469;}
	START469:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START469;}
	END469:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END470;}
	START470:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START470;}
	END470:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END471;}
	START471:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START471;}
	END471:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END472;}
	START472:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START472;}
	END472:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END473;}
	START473:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START473;}
	END473:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END474;}
	START474:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START474;}
	END474:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END475;}
	START475:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START475;}
	END475:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END476;}
	START476:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START476;}
	END476:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END477;}
	START477:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START477;}
	END477:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END478;}
	START478:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START478;}
	END478:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END479;}
	START479:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START479;}
	END479:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END480;}
	START480:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START480;}
	END480:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END481;}
	START481:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START481;}
	END481:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END482;}
	START482:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START482;}
	END482:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END483;}
	START483:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START483;}
	END483:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END484;}
	START484:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START484;}
	END484:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END485;}
	START485:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START485;}
	END485:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END486;}
	START486:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START486;}
	END486:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END487;}
	START487:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START487;}
	END487:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END488;}
	START488:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START488;}
	END488:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END489;}
	START489:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START489;}
	END489:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END490;}
	START490:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START490;}
	END490:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END491;}
	START491:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START491;}
	END491:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END492;}
	START492:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START492;}
	END492:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END493;}
	START493:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START493;}
	END493:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END494;}
	START494:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START494;}
	END494:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END495;}
	START495:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START495;}
	END495:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END496;}
	START496:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START496;}
	END496:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END497;}
	START497:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START497;}
	END497:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END498;}
	START498:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START498;}
	END498:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END499;}
	START499:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START499;}
	END499:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END500;}
	START500:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START500;}
	END500:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END501;}
	START501:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START501;}
	END501:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END502;}
	START502:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START502;}
	END502:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END503;}
	START503:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START503;}
	END503:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END504;}
	START504:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START504;}
	END504:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END505;}
	START505:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START505;}
	END505:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END506;}
	START506:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START506;}
	END506:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END507;}
	START507:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START507;}
	END507:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END508;}
	START508:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START508;}
	END508:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END509;}
	START509:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START509;}
	END509:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END510;}
	START510:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START510;}
	END510:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END511;}
	START511:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START511;}
	END511:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END512;}
	START512:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START512;}
	END512:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END513;}
	START513:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START513;}
	END513:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END514;}
	START514:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START514;}
	END514:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END515;}
	START515:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START515;}
	END515:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END516;}
	START516:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START516;}
	END516:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END517;}
	START517:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START517;}
	END517:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END518;}
	START518:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START518;}
	END518:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END519;}
	START519:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START519;}
	END519:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END520;}
	START520:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START520;}
	END520:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END521;}
	START521:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START521;}
	END521:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END522;}
	START522:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START522;}
	END522:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END523;}
	START523:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START523;}
	END523:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END524;}
	START524:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START524;}
	END524:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END525;}
	START525:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START525;}
	END525:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END526;}
	START526:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START526;}
	END526:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END527;}
	START527:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START527;}
	END527:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END528;}
	START528:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START528;}
	END528:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END529;}
	START529:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START529;}
	END529:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END530;}
	START530:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START530;}
	END530:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END531;}
	START531:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START531;}
	END531:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END532;}
	START532:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START532;}
	END532:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END533;}
	START533:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START533;}
	END533:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END534;}
	START534:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START534;}
	END534:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END535;}
	START535:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START535;}
	END535:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END536;}
	START536:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START536;}
	END536:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END537;}
	START537:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START537;}
	END537:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END538;}
	START538:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START538;}
	END538:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END539;}
	START539:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START539;}
	END539:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END540;}
	START540:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START540;}
	END540:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END541;}
	START541:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START541;}
	END541:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END542;}
	START542:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START542;}
	END542:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END543;}
	START543:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START543;}
	END543:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END544;}
	START544:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START544;}
	END544:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END545;}
	START545:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START545;}
	END545:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END546;}
	START546:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START546;}
	END546:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END547;}
	START547:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START547;}
	END547:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END548;}
	START548:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START548;}
	END548:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END549;}
	START549:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START549;}
	END549:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END550;}
	START550:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START550;}
	END550:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END551;}
	START551:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START551;}
	END551:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END552;}
	START552:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START552;}
	END552:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END553;}
	START553:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START553;}
	END553:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END554;}
	START554:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START554;}
	END554:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END555;}
	START555:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START555;}
	END555:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END556;}
	START556:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START556;}
	END556:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END557;}
	START557:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START557;}
	END557:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END558;}
	START558:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START558;}
	END558:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END559;}
	START559:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START559;}
	END559:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END560;}
	START560:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START560;}
	END560:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END561;}
	START561:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START561;}
	END561:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END562;}
	START562:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START562;}
	END562:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END563;}
	START563:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START563;}
	END563:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END564;}
	START564:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START564;}
	END564:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END565;}
	START565:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START565;}
	END565:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END566;}
	START566:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START566;}
	END566:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END567;}
	START567:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START567;}
	END567:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END568;}
	START568:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START568;}
	END568:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END569;}
	START569:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START569;}
	END569:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END570;}
	START570:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START570;}
	END570:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END571;}
	START571:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START571;}
	END571:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END572;}
	START572:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START572;}
	END572:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END573;}
	START573:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START573;}
	END573:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END574;}
	START574:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START574;}
	END574:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END575;}
	START575:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START575;}
	END575:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END576;}
	START576:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START576;}
	END576:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END577;}
	START577:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START577;}
	END577:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END578;}
	START578:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START578;}
	END578:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END579;}
	START579:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START579;}
	END579:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END580;}
	START580:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START580;}
	END580:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END581;}
	START581:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START581;}
	END581:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END582;}
	START582:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START582;}
	END582:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END583;}
	START583:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START583;}
	END583:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END584;}
	START584:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START584;}
	END584:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END585;}
	START585:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START585;}
	END585:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END586;}
	START586:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START586;}
	END586:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END587;}
	START587:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START587;}
	END587:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END588;}
	START588:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START588;}
	END588:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END589;}
	START589:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START589;}
	END589:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END590;}
	START590:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START590;}
	END590:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END591;}
	START591:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START591;}
	END591:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END592;}
	START592:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START592;}
	END592:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END593;}
	START593:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START593;}
	END593:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END594;}
	START594:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START594;}
	END594:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END595;}
	START595:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START595;}
	END595:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END596;}
	START596:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START596;}
	END596:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END597;}
	START597:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START597;}
	END597:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END598;}
	START598:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START598;}
	END598:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END599;}
	START599:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START599;}
	END599:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END600;}
	START600:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START600;}
	END600:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END601;}
	START601:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START601;}
	END601:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END602;}
	START602:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START602;}
	END602:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END603;}
	START603:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START603;}
	END603:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END604;}
	START604:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START604;}
	END604:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END605;}
	START605:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START605;}
	END605:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END606;}
	START606:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START606;}
	END606:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END607;}
	START607:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START607;}
	END607:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END608;}
	START608:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START608;}
	END608:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END609;}
	START609:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START609;}
	END609:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END610;}
	START610:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START610;}
	END610:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END611;}
	START611:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START611;}
	END611:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END612;}
	START612:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START612;}
	END612:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END613;}
	START613:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START613;}
	END613:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END614;}
	START614:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START614;}
	END614:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END615;}
	START615:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START615;}
	END615:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END616;}
	START616:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START616;}
	END616:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END617;}
	START617:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START617;}
	END617:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END618;}
	START618:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START618;}
	END618:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END619;}
	START619:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START619;}
	END619:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END620;}
	START620:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START620;}
	END620:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END621;}
	START621:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START621;}
	END621:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END622;}
	START622:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START622;}
	END622:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END623;}
	START623:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START623;}
	END623:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END624;}
	START624:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START624;}
	END624:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END625;}
	START625:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START625;}
	END625:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END626;}
	START626:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START626;}
	END626:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END627;}
	START627:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START627;}
	END627:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END628;}
	START628:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START628;}
	END628:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END629;}
	START629:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START629;}
	END629:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END630;}
	START630:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START630;}
	END630:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END631;}
	START631:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START631;}
	END631:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END632;}
	START632:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START632;}
	END632:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END633;}
	START633:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START633;}
	END633:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END634;}
	START634:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START634;}
	END634:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END635;}
	START635:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START635;}
	END635:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END636;}
	START636:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START636;}
	END636:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END637;}
	START637:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START637;}
	END637:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END638;}
	START638:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START638;}
	END638:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END639;}
	START639:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START639;}
	END639:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END640;}
	START640:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START640;}
	END640:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END641;}
	START641:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START641;}
	END641:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END642;}
	START642:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START642;}
	END642:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END643;}
	START643:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START643;}
	END643:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END644;}
	START644:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START644;}
	END644:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END645;}
	START645:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START645;}
	END645:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END646;}
	START646:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START646;}
	END646:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END647;}
	START647:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START647;}
	END647:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END648;}
	START648:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START648;}
	END648:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END649;}
	START649:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START649;}
	END649:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END650;}
	START650:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START650;}
	END650:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END651;}
	START651:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START651;}
	END651:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END652;}
	START652:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START652;}
	END652:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END653;}
	START653:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START653;}
	END653:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END654;}
	START654:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START654;}
	END654:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END655;}
	START655:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START655;}
	END655:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END656;}
	START656:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START656;}
	END656:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END657;}
	START657:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START657;}
	END657:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END658;}
	START658:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START658;}
	END658:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END659;}
	START659:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START659;}
	END659:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END660;}
	START660:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START660;}
	END660:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END661;}
	START661:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START661;}
	END661:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END662;}
	START662:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START662;}
	END662:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END663;}
	START663:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START663;}
	END663:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END664;}
	START664:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START664;}
	END664:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END665;}
	START665:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START665;}
	END665:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END666;}
	START666:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START666;}
	END666:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END667;}
	START667:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START667;}
	END667:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END668;}
	START668:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START668;}
	END668:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END669;}
	START669:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START669;}
	END669:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END670;}
	START670:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START670;}
	END670:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END671;}
	START671:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START671;}
	END671:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END672;}
	START672:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START672;}
	END672:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END673;}
	START673:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START673;}
	END673:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END674;}
	START674:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START674;}
	END674:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END675;}
	START675:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START675;}
	END675:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END676;}
	START676:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START676;}
	END676:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END677;}
	START677:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START677;}
	END677:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END678;}
	START678:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START678;}
	END678:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END679;}
	START679:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START679;}
	END679:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END680;}
	START680:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START680;}
	END680:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END681;}
	START681:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START681;}
	END681:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END682;}
	START682:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START682;}
	END682:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END683;}
	START683:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START683;}
	END683:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END684;}
	START684:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START684;}
	END684:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END685;}
	START685:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START685;}
	END685:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END686;}
	START686:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START686;}
	END686:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END687;}
	START687:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START687;}
	END687:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END688;}
	START688:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START688;}
	END688:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END689;}
	START689:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START689;}
	END689:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END690;}
	START690:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START690;}
	END690:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END691;}
	START691:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START691;}
	END691:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END692;}
	START692:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START692;}
	END692:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END693;}
	START693:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START693;}
	END693:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END694;}
	START694:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START694;}
	END694:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END695;}
	START695:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START695;}
	END695:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END696;}
	START696:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START696;}
	END696:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END697;}
	START697:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START697;}
	END697:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END698;}
	START698:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START698;}
	END698:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END699;}
	START699:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START699;}
	END699:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END700;}
	START700:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START700;}
	END700:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END701;}
	START701:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START701;}
	END701:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END702;}
	START702:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START702;}
	END702:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END703;}
	START703:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START703;}
	END703:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END704;}
	START704:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START704;}
	END704:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END705;}
	START705:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START705;}
	END705:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END706;}
	START706:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START706;}
	END706:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END707;}
	START707:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START707;}
	END707:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END708;}
	START708:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START708;}
	END708:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END709;}
	START709:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START709;}
	END709:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END710;}
	START710:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START710;}
	END710:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END711;}
	START711:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START711;}
	END711:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END712;}
	START712:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START712;}
	END712:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END713;}
	START713:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START713;}
	END713:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END714;}
	START714:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START714;}
	END714:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END715;}
	START715:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START715;}
	END715:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END716;}
	START716:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START716;}
	END716:;
	dpointer+=1;
	tape[dpointer]+=10;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END717;}
	START717:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START717;}
	END717:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END718;}
	START718:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START718;}
	END718:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END719;}
	START719:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START719;}
	END719:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END720;}
	START720:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START720;}
	END720:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END721;}
	START721:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START721;}
	END721:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END722;}
	START722:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START722;}
	END722:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END723;}
	START723:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START723;}
	END723:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END724;}
	START724:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START724;}
	END724:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END725;}
	START725:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START725;}
	END725:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END726;}
	START726:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START726;}
	END726:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END727;}
	START727:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START727;}
	END727:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END728;}
	START728:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START728;}
	END728:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END729;}
	START729:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START729;}
	END729:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END730;}
	START730:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START730;}
	END730:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END731;}
	START731:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START731;}
	END731:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END732;}
	START732:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START732;}
	END732:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END733;}
	START733:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START733;}
	END733:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END734;}
	START734:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START734;}
	END734:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END735;}
	START735:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START735;}
	END735:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END736;}
	START736:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START736;}
	END736:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END737;}
	START737:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START737;}
	END737:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END738;}
	START738:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START738;}
	END738:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END739;}
	START739:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START739;}
	END739:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END740;}
	START740:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START740;}
	END740:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END741;}
	START741:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START741;}
	END741:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END742;}
	START742:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START742;}
	END742:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END743;}
	START743:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START743;}
	END743:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END744;}
	START744:;
	dpointer+=1;
	tape[dpointer]+=5;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START744;}
	END744:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END745;}
	START745:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START745;}
	END745:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END746;}
	START746:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START746;}
	END746:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END747;}
	START747:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START747;}
	END747:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END748;}
	START748:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START748;}
	END748:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END749;}
	START749:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START749;}
	END749:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END750;}
	START750:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START750;}
	END750:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END751;}
	START751:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START751;}
	END751:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END752;}
	START752:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START752;}
	END752:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END753;}
	START753:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START753;}
	END753:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END754;}
	START754:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START754;}
	END754:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END755;}
	START755:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START755;}
	END755:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END756;}
	START756:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START756;}
	END756:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END757;}
	START757:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START757;}
	END757:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END758;}
	START758:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START758;}
	END758:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END759;}
	START759:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START759;}
	END759:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END760;}
	START760:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START760;}
	END760:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END761;}
	START761:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START761;}
	END761:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END762;}
	START762:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START762;}
	END762:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END763;}
	START763:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START763;}
	END763:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END764;}
	START764:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START764;}
	END764:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END765;}
	START765:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START765;}
	END765:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END766;}
	START766:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START766;}
	END766:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END767;}
	START767:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START767;}
	END767:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END768;}
	START768:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START768;}
	END768:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END769;}
	START769:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START769;}
	END769:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END770;}
	START770:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START770;}
	END770:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END771;}
	START771:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START771;}
	END771:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END772;}
	START772:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START772;}
	END772:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END773;}
	START773:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START773;}
	END773:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END774;}
	START774:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START774;}
	END774:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END775;}
	START775:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START775;}
	END775:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END776;}
	START776:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START776;}
	END776:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END777;}
	START777:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START777;}
	END777:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END778;}
	START778:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START778;}
	END778:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END779;}
	START779:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START779;}
	END779:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END780;}
	START780:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START780;}
	END780:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END781;}
	START781:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START781;}
	END781:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END782;}
	START782:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START782;}
	END782:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END783;}
	START783:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START783;}
	END783:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END784;}
	START784:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START784;}
	END784:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END785;}
	START785:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START785;}
	END785:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END786;}
	START786:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START786;}
	END786:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END787;}
	START787:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START787;}
	END787:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END788;}
	START788:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START788;}
	END788:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END789;}
	START789:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START789;}
	END789:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END790;}
	START790:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START790;}
	END790:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END791;}
	START791:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START791;}
	END791:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END792;}
	START792:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START792;}
	END792:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END793;}
	START793:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START793;}
	END793:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END794;}
	START794:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START794;}
	END794:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END795;}
	START795:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START795;}
	END795:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END796;}
	START796:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START796;}
	END796:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END797;}
	START797:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START797;}
	END797:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END798;}
	START798:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START798;}
	END798:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END799;}
	START799:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START799;}
	END799:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END800;}
	START800:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START800;}
	END800:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END801;}
	START801:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START801;}
	END801:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END802;}
	START802:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START802;}
	END802:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END803;}
	START803:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START803;}
	END803:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END804;}
	START804:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START804;}
	END804:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END805;}
	START805:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START805;}
	END805:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END806;}
	START806:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START806;}
	END806:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END807;}
	START807:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START807;}
	END807:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END808;}
	START808:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START808;}
	END808:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END809;}
	START809:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START809;}
	END809:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END810;}
	START810:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START810;}
	END810:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END811;}
	START811:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START811;}
	END811:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END812;}
	START812:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START812;}
	END812:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END813;}
	START813:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START813;}
	END813:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END814;}
	START814:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START814;}
	END814:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END815;}
	START815:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START815;}
	END815:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END816;}
	START816:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START816;}
	END816:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END817;}
	START817:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START817;}
	END817:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END818;}
	START818:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START818;}
	END818:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END819;}
	START819:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START819;}
	END819:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END820;}
	START820:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START820;}
	END820:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END821;}
	START821:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START821;}
	END821:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END822;}
	START822:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START822;}
	END822:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END823;}
	START823:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START823;}
	END823:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END824;}
	START824:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START824;}
	END824:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END825;}
	START825:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START825;}
	END825:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END826;}
	START826:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START826;}
	END826:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END827;}
	START827:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START827;}
	END827:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END828;}
	START828:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START828;}
	END828:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END829;}
	START829:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START829;}
	END829:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END830;}
	START830:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START830;}
	END830:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END831;}
	START831:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START831;}
	END831:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END832;}
	START832:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START832;}
	END832:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END833;}
	START833:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START833;}
	END833:;
	dpointer+=1;
	tape[dpointer]+=15;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END834;}
	START834:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START834;}
	END834:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END835;}
	START835:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START835;}
	END835:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END836;}
	START836:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START836;}
	END836:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END837;}
	START837:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START837;}
	END837:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END838;}
	START838:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START838;}
	END838:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END839;}
	START839:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START839;}
	END839:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END840;}
	START840:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START840;}
	END840:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END841;}
	START841:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START841;}
	END841:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END842;}
	START842:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START842;}
	END842:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END843;}
	START843:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START843;}
	END843:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END844;}
	START844:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START844;}
	END844:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END845;}
	START845:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START845;}
	END845:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END846;}
	START846:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START846;}
	END846:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END847;}
	START847:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START847;}
	END847:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END848;}
	START848:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START848;}
	END848:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END849;}
	START849:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START849;}
	END849:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END850;}
	START850:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START850;}
	END850:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END851;}
	START851:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START851;}
	END851:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END852;}
	START852:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START852;}
	END852:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END853;}
	START853:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START853;}
	END853:;
	dpointer+=1;
	tape[dpointer]+=11;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END854;}
	START854:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START854;}
	END854:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END855;}
	START855:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START855;}
	END855:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END856;}
	START856:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START856;}
	END856:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END857;}
	START857:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START857;}
	END857:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END858;}
	START858:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START858;}
	END858:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END859;}
	START859:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START859;}
	END859:;
	dpointer+=1;
	tape[dpointer]+=16;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END860;}
	START860:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START860;}
	END860:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END861;}
	START861:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START861;}
	END861:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END862;}
	START862:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START862;}
	END862:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END863;}
	START863:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START863;}
	END863:;
	dpointer+=1;
	tape[dpointer]+=9;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END864;}
	START864:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START864;}
	END864:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END865;}
	START865:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START865;}
	END865:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END866;}
	START866:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START866;}
	END866:;
	dpointer+=1;
	tape[dpointer]+=14;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END867;}
	START867:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START867;}
	END867:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END868;}
	START868:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START868;}
	END868:;
	dpointer+=1;
	tape[dpointer]+=10;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END869;}
	START869:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START869;}
	END869:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END870;}
	START870:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START870;}
	END870:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END871;}
	START871:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START871;}
	END871:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END872;}
	START872:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START872;}
	END872:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END873;}
	START873:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START873;}
	END873:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END874;}
	START874:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START874;}
	END874:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END875;}
	START875:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START875;}
	END875:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END876;}
	START876:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START876;}
	END876:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END877;}
	START877:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START877;}
	END877:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END878;}
	START878:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START878;}
	END878:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END879;}
	START879:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START879;}
	END879:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END880;}
	START880:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START880;}
	END880:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END881;}
	START881:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START881;}
	END881:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END882;}
	START882:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START882;}
	END882:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END883;}
	START883:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START883;}
	END883:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END884;}
	START884:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START884;}
	END884:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=5;
	if(tape[dpointer] == 0){goto END885;}
	START885:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START885;}
	END885:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END886;}
	START886:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START886;}
	END886:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END887;}
	START887:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START887;}
	END887:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END888;}
	START888:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START888;}
	END888:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END889;}
	START889:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START889;}
	END889:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=7;
	if(tape[dpointer] == 0){goto END890;}
	START890:;
	dpointer+=1;
	tape[dpointer]+=7;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START890;}
	END890:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=6;
	if(tape[dpointer] == 0){goto END891;}
	START891:;
	dpointer+=1;
	tape[dpointer]+=6;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START891;}
	END891:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END892;}
	START892:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START892;}
	END892:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END893;}
	START893:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START893;}
	END893:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END894;}
	START894:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START894;}
	END894:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END895;}
	START895:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START895;}
	END895:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END896;}
	START896:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START896;}
	END896:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END897;}
	START897:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START897;}
	END897:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END898;}
	START898:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START898;}
	END898:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END899;}
	START899:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START899;}
	END899:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END900;}
	START900:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START900;}
	END900:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END901;}
	START901:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START901;}
	END901:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END902;}
	START902:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START902;}
	END902:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END903;}
	START903:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START903;}
	END903:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END904;}
	START904:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START904;}
	END904:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END905;}
	START905:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START905;}
	END905:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END906;}
	START906:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START906;}
	END906:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END907;}
	START907:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START907;}
	END907:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END908;}
	START908:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START908;}
	END908:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END909;}
	START909:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START909;}
	END909:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END910;}
	START910:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START910;}
	END910:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END911;}
	START911:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START911;}
	END911:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END912;}
	START912:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START912;}
	END912:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END913;}
	START913:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START913;}
	END913:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END914;}
	START914:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START914;}
	END914:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END915;}
	START915:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START915;}
	END915:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END916;}
	START916:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START916;}
	END916:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END917;}
	START917:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START917;}
	END917:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END918;}
	START918:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START918;}
	END918:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END919;}
	START919:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START919;}
	END919:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END920;}
	START920:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START920;}
	END920:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END921;}
	START921:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START921;}
	END921:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END922;}
	START922:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START922;}
	END922:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END923;}
	START923:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START923;}
	END923:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END924;}
	START924:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START924;}
	END924:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END925;}
	START925:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START925;}
	END925:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END926;}
	START926:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START926;}
	END926:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END927;}
	START927:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START927;}
	END927:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END928;}
	START928:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START928;}
	END928:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END929;}
	START929:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START929;}
	END929:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END930;}
	START930:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START930;}
	END930:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END931;}
	START931:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START931;}
	END931:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END932;}
	START932:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START932;}
	END932:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END933;}
	START933:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START933;}
	END933:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END934;}
	START934:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START934;}
	END934:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END935;}
	START935:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START935;}
	END935:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END936;}
	START936:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START936;}
	END936:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END937;}
	START937:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START937;}
	END937:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END938;}
	START938:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START938;}
	END938:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END939;}
	START939:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START939;}
	END939:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END940;}
	START940:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START940;}
	END940:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END941;}
	START941:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START941;}
	END941:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END942;}
	START942:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START942;}
	END942:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END943;}
	START943:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START943;}
	END943:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END944;}
	START944:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START944;}
	END944:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END945;}
	START945:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START945;}
	END945:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END946;}
	START946:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START946;}
	END946:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END947;}
	START947:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START947;}
	END947:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END948;}
	START948:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START948;}
	END948:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END949;}
	START949:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START949;}
	END949:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END950;}
	START950:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START950;}
	END950:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END951;}
	START951:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START951;}
	END951:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END952;}
	START952:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START952;}
	END952:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END953;}
	START953:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START953;}
	END953:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END954;}
	START954:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START954;}
	END954:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END955;}
	START955:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START955;}
	END955:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END956;}
	START956:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START956;}
	END956:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END957;}
	START957:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START957;}
	END957:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END958;}
	START958:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START958;}
	END958:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END959;}
	START959:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START959;}
	END959:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END960;}
	START960:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START960;}
	END960:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END961;}
	START961:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START961;}
	END961:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END962;}
	START962:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START962;}
	END962:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END963;}
	START963:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START963;}
	END963:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END964;}
	START964:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START964;}
	END964:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END965;}
	START965:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START965;}
	END965:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END966;}
	START966:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START966;}
	END966:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END967;}
	START967:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START967;}
	END967:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END968;}
	START968:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START968;}
	END968:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END969;}
	START969:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START969;}
	END969:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END970;}
	START970:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START970;}
	END970:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END971;}
	START971:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START971;}
	END971:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END972;}
	START972:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START972;}
	END972:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END973;}
	START973:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START973;}
	END973:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END974;}
	START974:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START974;}
	END974:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END975;}
	START975:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START975;}
	END975:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END976;}
	START976:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START976;}
	END976:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END977;}
	START977:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START977;}
	END977:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END978;}
	START978:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START978;}
	END978:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END979;}
	START979:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START979;}
	END979:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END980;}
	START980:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START980;}
	END980:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END981;}
	START981:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START981;}
	END981:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END982;}
	START982:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START982;}
	END982:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END983;}
	START983:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START983;}
	END983:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END984;}
	START984:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START984;}
	END984:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END985;}
	START985:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START985;}
	END985:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END986;}
	START986:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START986;}
	END986:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END987;}
	START987:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START987;}
	END987:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END988;}
	START988:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START988;}
	END988:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END989;}
	START989:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START989;}
	END989:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END990;}
	START990:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START990;}
	END990:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END991;}
	START991:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START991;}
	END991:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END992;}
	START992:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START992;}
	END992:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END993;}
	START993:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START993;}
	END993:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END994;}
	START994:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START994;}
	END994:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END995;}
	START995:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START995;}
	END995:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END996;}
	START996:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START996;}
	END996:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END997;}
	START997:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START997;}
	END997:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END998;}
	START998:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START998;}
	END998:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END999;}
	START999:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START999;}
	END999:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1000;}
	START1000:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1000;}
	END1000:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1001;}
	START1001:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1001;}
	END1001:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1002;}
	START1002:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1002;}
	END1002:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1003;}
	START1003:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1003;}
	END1003:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1004;}
	START1004:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1004;}
	END1004:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1005;}
	START1005:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1005;}
	END1005:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1006;}
	START1006:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1006;}
	END1006:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1007;}
	START1007:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1007;}
	END1007:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1008;}
	START1008:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1008;}
	END1008:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1009;}
	START1009:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1009;}
	END1009:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1010;}
	START1010:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1010;}
	END1010:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1011;}
	START1011:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1011;}
	END1011:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1012;}
	START1012:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1012;}
	END1012:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1013;}
	START1013:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1013;}
	END1013:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1014;}
	START1014:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1014;}
	END1014:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1015;}
	START1015:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1015;}
	END1015:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1016;}
	START1016:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1016;}
	END1016:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1017;}
	START1017:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1017;}
	END1017:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1018;}
	START1018:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1018;}
	END1018:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1019;}
	START1019:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1019;}
	END1019:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1020;}
	START1020:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1020;}
	END1020:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1021;}
	START1021:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1021;}
	END1021:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1022;}
	START1022:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1022;}
	END1022:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1023;}
	START1023:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1023;}
	END1023:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1024;}
	START1024:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1024;}
	END1024:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1025;}
	START1025:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1025;}
	END1025:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1026;}
	START1026:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1026;}
	END1026:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1027;}
	START1027:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1027;}
	END1027:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1028;}
	START1028:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1028;}
	END1028:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1029;}
	START1029:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1029;}
	END1029:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1030;}
	START1030:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1030;}
	END1030:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1031;}
	START1031:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1031;}
	END1031:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1032;}
	START1032:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1032;}
	END1032:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END1033;}
	START1033:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1033;}
	END1033:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1034;}
	START1034:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1034;}
	END1034:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1035;}
	START1035:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1035;}
	END1035:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1036;}
	START1036:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1036;}
	END1036:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1037;}
	START1037:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1037;}
	END1037:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1038;}
	START1038:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1038;}
	END1038:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1039;}
	START1039:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1039;}
	END1039:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1040;}
	START1040:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1040;}
	END1040:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1041;}
	START1041:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1041;}
	END1041:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1042;}
	START1042:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1042;}
	END1042:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1043;}
	START1043:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1043;}
	END1043:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1044;}
	START1044:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1044;}
	END1044:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1045;}
	START1045:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1045;}
	END1045:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1046;}
	START1046:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1046;}
	END1046:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1047;}
	START1047:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1047;}
	END1047:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1048;}
	START1048:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1048;}
	END1048:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1049;}
	START1049:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1049;}
	END1049:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1050;}
	START1050:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1050;}
	END1050:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1051;}
	START1051:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1051;}
	END1051:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1052;}
	START1052:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1052;}
	END1052:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1053;}
	START1053:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1053;}
	END1053:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1054;}
	START1054:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1054;}
	END1054:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1055;}
	START1055:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1055;}
	END1055:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1056;}
	START1056:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1056;}
	END1056:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1057;}
	START1057:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1057;}
	END1057:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1058;}
	START1058:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1058;}
	END1058:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1059;}
	START1059:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1059;}
	END1059:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1060;}
	START1060:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1060;}
	END1060:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1061;}
	START1061:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1061;}
	END1061:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1062;}
	START1062:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1062;}
	END1062:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1063;}
	START1063:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1063;}
	END1063:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1064;}
	START1064:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1064;}
	END1064:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1065;}
	START1065:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1065;}
	END1065:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1066;}
	START1066:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1066;}
	END1066:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1067;}
	START1067:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1067;}
	END1067:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1068;}
	START1068:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1068;}
	END1068:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1069;}
	START1069:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1069;}
	END1069:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1070;}
	START1070:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1070;}
	END1070:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1071;}
	START1071:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1071;}
	END1071:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1072;}
	START1072:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1072;}
	END1072:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1073;}
	START1073:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1073;}
	END1073:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1074;}
	START1074:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1074;}
	END1074:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1075;}
	START1075:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1075;}
	END1075:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1076;}
	START1076:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1076;}
	END1076:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1077;}
	START1077:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1077;}
	END1077:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1078;}
	START1078:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1078;}
	END1078:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1079;}
	START1079:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1079;}
	END1079:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1080;}
	START1080:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1080;}
	END1080:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1081;}
	START1081:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1081;}
	END1081:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1082;}
	START1082:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1082;}
	END1082:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1083;}
	START1083:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1083;}
	END1083:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1084;}
	START1084:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1084;}
	END1084:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1085;}
	START1085:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1085;}
	END1085:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1086;}
	START1086:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1086;}
	END1086:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1087;}
	START1087:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1087;}
	END1087:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1088;}
	START1088:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1088;}
	END1088:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1089;}
	START1089:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1089;}
	END1089:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1090;}
	START1090:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1090;}
	END1090:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1091;}
	START1091:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1091;}
	END1091:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1092;}
	START1092:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1092;}
	END1092:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1093;}
	START1093:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1093;}
	END1093:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1094;}
	START1094:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1094;}
	END1094:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1095;}
	START1095:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1095;}
	END1095:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END1096;}
	START1096:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1096;}
	END1096:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1097;}
	START1097:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1097;}
	END1097:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1098;}
	START1098:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1098;}
	END1098:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1099;}
	START1099:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1099;}
	END1099:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1100;}
	START1100:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1100;}
	END1100:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1101;}
	START1101:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1101;}
	END1101:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1102;}
	START1102:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1102;}
	END1102:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1103;}
	START1103:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1103;}
	END1103:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1104;}
	START1104:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1104;}
	END1104:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1105;}
	START1105:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1105;}
	END1105:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1106;}
	START1106:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1106;}
	END1106:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1107;}
	START1107:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1107;}
	END1107:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1108;}
	START1108:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1108;}
	END1108:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1109;}
	START1109:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1109;}
	END1109:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1110;}
	START1110:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1110;}
	END1110:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1111;}
	START1111:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1111;}
	END1111:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1112;}
	START1112:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1112;}
	END1112:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1113;}
	START1113:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1113;}
	END1113:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1114;}
	START1114:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1114;}
	END1114:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END1115;}
	START1115:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1115;}
	END1115:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1116;}
	START1116:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1116;}
	END1116:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1117;}
	START1117:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1117;}
	END1117:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1118;}
	START1118:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1118;}
	END1118:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1119;}
	START1119:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1119;}
	END1119:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1120;}
	START1120:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1120;}
	END1120:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1121;}
	START1121:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1121;}
	END1121:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1122;}
	START1122:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1122;}
	END1122:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1123;}
	START1123:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1123;}
	END1123:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1124;}
	START1124:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1124;}
	END1124:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1125;}
	START1125:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1125;}
	END1125:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1126;}
	START1126:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1126;}
	END1126:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1127;}
	START1127:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1127;}
	END1127:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1128;}
	START1128:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1128;}
	END1128:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1129;}
	START1129:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1129;}
	END1129:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1130;}
	START1130:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1130;}
	END1130:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1131;}
	START1131:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1131;}
	END1131:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1132;}
	START1132:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1132;}
	END1132:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1133;}
	START1133:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1133;}
	END1133:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1134;}
	START1134:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1134;}
	END1134:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1135;}
	START1135:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1135;}
	END1135:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1136;}
	START1136:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1136;}
	END1136:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1137;}
	START1137:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1137;}
	END1137:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1138;}
	START1138:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1138;}
	END1138:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1139;}
	START1139:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1139;}
	END1139:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1140;}
	START1140:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1140;}
	END1140:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1141;}
	START1141:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1141;}
	END1141:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1142;}
	START1142:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1142;}
	END1142:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1143;}
	START1143:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1143;}
	END1143:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1144;}
	START1144:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1144;}
	END1144:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1145;}
	START1145:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1145;}
	END1145:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1146;}
	START1146:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1146;}
	END1146:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1147;}
	START1147:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1147;}
	END1147:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1148;}
	START1148:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1148;}
	END1148:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1149;}
	START1149:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1149;}
	END1149:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1150;}
	START1150:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1150;}
	END1150:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1151;}
	START1151:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1151;}
	END1151:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1152;}
	START1152:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1152;}
	END1152:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1153;}
	START1153:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1153;}
	END1153:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1154;}
	START1154:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1154;}
	END1154:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1155;}
	START1155:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1155;}
	END1155:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1156;}
	START1156:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1156;}
	END1156:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1157;}
	START1157:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1157;}
	END1157:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1158;}
	START1158:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1158;}
	END1158:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END1159;}
	START1159:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1159;}
	END1159:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1160;}
	START1160:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1160;}
	END1160:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1161;}
	START1161:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1161;}
	END1161:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1162;}
	START1162:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1162;}
	END1162:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1163;}
	START1163:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1163;}
	END1163:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1164;}
	START1164:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1164;}
	END1164:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1165;}
	START1165:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1165;}
	END1165:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1166;}
	START1166:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1166;}
	END1166:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1167;}
	START1167:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1167;}
	END1167:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1168;}
	START1168:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1168;}
	END1168:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1169;}
	START1169:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1169;}
	END1169:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1170;}
	START1170:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1170;}
	END1170:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1171;}
	START1171:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1171;}
	END1171:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1172;}
	START1172:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1172;}
	END1172:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1173;}
	START1173:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1173;}
	END1173:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1174;}
	START1174:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1174;}
	END1174:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1175;}
	START1175:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1175;}
	END1175:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1176;}
	START1176:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1176;}
	END1176:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1177;}
	START1177:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1177;}
	END1177:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1178;}
	START1178:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1178;}
	END1178:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1179;}
	START1179:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1179;}
	END1179:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1180;}
	START1180:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1180;}
	END1180:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1181;}
	START1181:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1181;}
	END1181:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1182;}
	START1182:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1182;}
	END1182:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1183;}
	START1183:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1183;}
	END1183:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1184;}
	START1184:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1184;}
	END1184:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1185;}
	START1185:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1185;}
	END1185:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1186;}
	START1186:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1186;}
	END1186:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1187;}
	START1187:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1187;}
	END1187:;
	dpointer+=1;
	tape[dpointer]+=12;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1188;}
	START1188:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1188;}
	END1188:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1189;}
	START1189:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1189;}
	END1189:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1190;}
	START1190:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1190;}
	END1190:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1191;}
	START1191:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1191;}
	END1191:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1192;}
	START1192:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1192;}
	END1192:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1193;}
	START1193:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1193;}
	END1193:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1194;}
	START1194:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1194;}
	END1194:;
	dpointer+=1;
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1195;}
	START1195:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1195;}
	END1195:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1196;}
	START1196:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1196;}
	END1196:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1197;}
	START1197:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1197;}
	END1197:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1198;}
	START1198:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1198;}
	END1198:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1199;}
	START1199:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1199;}
	END1199:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1200;}
	START1200:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1200;}
	END1200:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1201;}
	START1201:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1201;}
	END1201:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1202;}
	START1202:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1202;}
	END1202:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1203;}
	START1203:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1203;}
	END1203:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1204;}
	START1204:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1204;}
	END1204:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1205;}
	START1205:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1205;}
	END1205:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1206;}
	START1206:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1206;}
	END1206:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1207;}
	START1207:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1207;}
	END1207:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1208;}
	START1208:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1208;}
	END1208:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1209;}
	START1209:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1209;}
	END1209:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1210;}
	START1210:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1210;}
	END1210:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1211;}
	START1211:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1211;}
	END1211:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1212;}
	START1212:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1212;}
	END1212:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1213;}
	START1213:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1213;}
	END1213:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1214;}
	START1214:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1214;}
	END1214:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1215;}
	START1215:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1215;}
	END1215:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1216;}
	START1216:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1216;}
	END1216:;
	dpointer+=1;
	tape[dpointer]+=5;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1217;}
	START1217:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1217;}
	END1217:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1218;}
	START1218:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1218;}
	END1218:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	tape[dpointer]+=2;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1219;}
	START1219:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1219;}
	END1219:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1220;}
	START1220:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1220;}
	END1220:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1221;}
	START1221:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1221;}
	END1221:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=10;
	if(tape[dpointer] == 0){goto END1222;}
	START1222:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1222;}
	END1222:;
	dpointer+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1223;}
	START1223:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1223;}
	END1223:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1224;}
	START1224:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1224;}
	END1224:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1225;}
	START1225:;
	dpointer+=1;
	tape[dpointer]+=4;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1225;}
	END1225:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=4;
	if(tape[dpointer] == 0){goto END1226;}
	START1226:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1226;}
	END1226:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1227;}
	START1227:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1227;}
	END1227:;
	dpointer+=1;
	tape[dpointer]+=4;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1228;}
	START1228:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1228;}
	END1228:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1229;}
	START1229:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1229;}
	END1229:;
	dpointer+=1;
	tape[dpointer]+=7;
	putchar(tape[dpointer]);
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1230;}
	START1230:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1230;}
	END1230:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1231;}
	START1231:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1231;}
	END1231:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1232;}
	START1232:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1232;}
	END1232:;
	dpointer+=1;
	tape[dpointer]+=13;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1233;}
	START1233:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1233;}
	END1233:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1234;}
	START1234:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1234;}
	END1234:;
	dpointer+=1;
	tape[dpointer]+=1;
	putchar(tape[dpointer]);
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1235;}
	START1235:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1235;}
	END1235:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1236;}
	START1236:;
	dpointer+=1;
	tape[dpointer]+=9;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1236;}
	END1236:;
	dpointer+=1;
	tape[dpointer]+=8;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1237;}
	START1237:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1237;}
	END1237:;
	dpointer+=1;
	putchar(tape[dpointer]);
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=9;
	if(tape[dpointer] == 0){goto END1238;}
	START1238:;
	dpointer+=1;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1238;}
	END1238:;
	dpointer+=1;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=8;
	if(tape[dpointer] == 0){goto END1239;}
	START1239:;
	dpointer+=1;
	tape[dpointer]+=8;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1239;}
	END1239:;
	dpointer+=1;
	tape[dpointer]+=3;
	putchar(tape[dpointer]);
	dpointer-=1;
	tape[dpointer]+=3;
	if(tape[dpointer] == 0){goto END1240;}
	START1240:;
	dpointer+=1;
	tape[dpointer]+=3;
	dpointer-=1;
	if(tape[dpointer] != 0){goto START1240;}
	END1240:;
	dpointer+=1;
	tape[dpointer]+=6;
	putchar(tape[dpointer]);
	tape[dpointer]+=7;
	putchar(tape[dpointer]);

}
    