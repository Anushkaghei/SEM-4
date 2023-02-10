.text
MOV R0,#10;
MOV R1,#0;
MOV R2,#1;

while: ADD R3,R1,R2;
	ADD R1,R2,#0;
	ADD R2,R3,#0;
	SUB R0,R0,#1;
	CMP R0,#2;
	BNE while
.end