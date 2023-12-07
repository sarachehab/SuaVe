/*

a0 - F1 lights counter
a1 - wait timer
a2 - trigger

ra - return address

s0 - maximum counter value
s1 - maximum wait timer
s2 - trigger val

t0 - trigger



*/


default:
    addi s0, zero, 0xFF
    addi s1, zero, 0xF
    addi s2, zero, 0x1

reset:
    add a0, zero, zero

check_trigger:
    bne t3, s2, check_trigger

f1lights:
    jal ra, wait_second
    slli a0, a0, 0x1
    addi a0, a0, 0x1
    bne a0, s0, f1lights
    jal ra, turn_off_f1

wait_second:
    addi a1, a1, 0x1
    bne a1, s1, wait_second
    addi a1, zero, 0x0
    jalr zero, ra, 0x0

turn_off_f1:
    jal ra, wait_second
    add a0, zero, zero