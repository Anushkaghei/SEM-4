.DATA
A: .word 10, 20, 30, 40, 50
B: .word 1, 2, 3, 4, 5
C: .word 0, 0, 0, 0, 0



.TEXT
	LDR R0,=A
	LDR R1,=B
	LDR R2,=C
    MOV R6,#5
    MOV R7,#0

WHILE: 
    LDR R3,[R0],#4
    LDR R4, [R1],#4
    MUL R5,R3,R4
    STR R5,[R2]
    ADD R7,R7,R5
    ADD R2,R2,#4
    SUB R6,R6,#1
    CMP R6,#0
    BNE WHILE
    SWI 0x11