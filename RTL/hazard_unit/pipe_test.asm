/*
addi t0, zero, 0xFF     #t0 = 0xFF, 
addi t1, zero, 0x100    #t0 = 0xFF, t1 = 0x100
add t1, t0, t1          #t0 = 0xFF, t1 = 0x1FF
sub a0, t1, t0          #t0 = 0xFF, t1 = 0x1FF, a0 = 0x100
and a0, t0, t1          #t0 = 0xFF, t1 = 0x1FF, a0 = 0xFF
addi a2, zero, 0        #t0 = 0xFF, t1 = 0x1FF, a0 = 0xFF, a2 = 0
lbu a0, 0x100(a2)       #t0 = 0xFF, t1 = 0x1FF, a0 = 0x3,  a2 = 0

0f f0 02 93
10 00 03 13
00 62 83 33
40 53 05 33
00 62 f5 33
00 00 06 13
10 06 45 03

*/

addi t1, zero, 0x2      #t1 = 0x2
lw t0, 0x100(a2)        #t1 = 0x2, t0 = 0x3
and a2, t0, t1          #t1 = 0x2, t0 = 0x3, a2 = 0x2
or t1, t1, t0           #t1 = 0x3, t0 = 0x3, a2 = 0x2
sub t1, t0, a2          #t1 = 0x3, t0 = 0x3, a2 = 0x2