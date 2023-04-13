a: .word 1000
.equ A, 0x80
.equ B, 0x40
.equ C, 0x20
.equ D, 0x08
.equ E, 0x04
.equ F, 0x02
.equ G, 0x01
.equ P, 0x10

mov r2,#16

tab:
.word A|B|C|D|E|G|P ;0
.word B|C|P ;1
.word A|B|F|E|D|P ;2
.word A|B|F|C|D|P ;3
.word B|G|F|C|P ;4
.word A|G|F|C|D|P ;5
.word A|G|C|D|E|F|P ;6
.word A|B|C|P ;7
.word A|B|C|D|E|F|G|P ;8
.word A|B|F|G|C|D|P ;9
.word A|G|E|C|B|F ;A
.word A|B|C|D|E|F|G ;B
.word A|G|D|E ;C
.word A|B|C|D|E|G ;D
.word A|D|E|G|F ;E
.word A|G|F|E ;F

ldr r5, =tab
add r5, r5, #60
downcount:
	ldr r0,[r5],#-4
	swi 0x200
	bl delay
	sub r2,r2,#1
	cmp r2, #0
	beq exit
	b downcount

delay: 
	ldr r6, =a
	ldr r7,[r6]
	
loop:
	sub r7,r7,#1
	cmp r7,#0
	bne loop
	mov pc,lr

exit:
	swi 0x11
	
