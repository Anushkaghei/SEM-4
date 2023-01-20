mov r2,#60
mov r3,#35

loop:
	cmp r2,r3
	Beq Exit
	Blt Loop1
	sub r2,r2,r3
	Bne loop

Loop1:
	sub r3,r3,r2
	B loop
Exit:
	swi 0x11
	