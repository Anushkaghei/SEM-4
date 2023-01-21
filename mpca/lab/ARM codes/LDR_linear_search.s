.data 
a: .word 10,20,30,40,50,60,70,80,90,100
b: .word 20

.text
ldr r0,=a
ldr r1,=b
mov r3,#0
mov r4,#05

back:ldr r5,[r0]
	cmp r5,r4
	beq done
	add r0,r0,#4
	add r3,r3,#1
	cmp r3,#10
	bne back
	mov r6,#00
	str r6,[r1]
	B notfound

done:
	mov r6,#01
	str r6,[r1]
	
notfound: swi 0x011