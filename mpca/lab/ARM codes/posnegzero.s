.text
mov r0,#12 ; number of elements
ldr r1,=arr
check:ldr r2,[r1],#4 ; post addressing
    cmp r2,#0
    beq zero
    bgt positive
    blt negative


    
zero: add r3,r3,#1
    sub r0,r0,#1
    @ add r1,r1,#4
    cmp r0,#0
    bne check
    swi 0x11

positive: add r4,r4,#1
    sub r0,r0,#1
    @ add r1,r1,#4
    cmp r0,#0
    bne check
    swi 0x11

negative: add r5,r5,#1
    sub r0,r0,#1
    @ add r1,r1,#4
    cmp r0,#0
    bne check
    swi 0x11


.data
arr: .word -2,1,0,3,-4,0,5,6,7,8,9,10