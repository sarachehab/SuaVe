/*

s0: expected formula lights value
s1: expected wait counter value
s2: expected trigger value
s3: trigger

t0: F1 shift increment
t1: counter for second delay
t2: counter for random delay
t3: sreg[3] of pseudorandom number
t4: sreg[2] of pseudorandom number

a0: output
a1: pseudorandom number

*/

define_pseudonumber:
    bne a1, zero, default
    addi a1, zero, 0xF

default:
    addi s0, zero, 0xFF
    addi s1, zero, 0xF
    addi s2, zero, 0x1
    addi t0, zero, 0x1
    addi t1, zero, 0x1
    addi t2, zero, 0x0
    
reset:
    add a0, zero, zero

wait_trigger:
    bne s3, s2, wait_trigger

f1lights:
    jal ra, wait_second
    add a0, a0, t0
    slli t0, t0, 0x1
    bne a0, s0, f1lights
    jal ra, turn_off_f1

wait_second:
    addi t1, t1, 0x1
    bne t1, s1, wait_second
    addi t1, zero, 0x0
    jalr zero, ra, 0x0

random_delay:
    andi t3, a1, 0x8
    srli t3, t3, 3
    andi t4, a1, 0x4
    srli t4, t4, 2
    xor t3, t3, t4
    slli a1, a1, 0x1
    andi a1, a1, 0xF
    add a1, a1, t3
    jalr zero, ra, 0x0

wait_random_delay:
    addi t2, t2, 0x1
    bne t2, a1, wait_random_delay
    jalr zero, ra, 0x0

turn_off_f1:
    jal ra, random_delay
    jal ra, wait_random_delay
    add a0, zero, zero