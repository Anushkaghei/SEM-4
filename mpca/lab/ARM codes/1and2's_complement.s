.text 
mov r0,#244
mov r1,#0 @ no of ones
mov r2,#0 @ no of zeros
loop:
mov r3,r0

and r4,r3,#1

cmp r4,#1
beq one
bne zero

one:
add r1,r1,#1
b next

zero:
add r2,r2,#1
b next

next:
mov r0,r0,lsr #1
cmp r0,#0
bne loop
beq end

end:
swi 0x11