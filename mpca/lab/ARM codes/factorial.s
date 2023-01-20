.text
MOV R0,#5
MOV R1,#1

fact: MUL R1,R0,R1
	SUB R0,R0,#1

BNE fact
.end

