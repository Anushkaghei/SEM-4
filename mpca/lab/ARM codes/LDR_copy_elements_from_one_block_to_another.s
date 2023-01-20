.data
A: .word 10,20,30,40,50,60,70,80,90,100	
B: .word 0,0,0,0,0,0,0,0,0,0

.text
LDR R0,=A
LDR R1,=B
MOV R5,#1

back: LDR R3,[R1]
	STR R3,[R2]
	ADD R1,R1,#4
	ADD R2,R2,#4

	ADD R5,R5,#1
	CMP R5,#11
	BNE back
	swi 0x011

.end