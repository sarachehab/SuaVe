![[control_unit2.png]](../../images/control_unit/control_unit2.png)
The components of the control unit are mentioned and tested individually but the top file combines both and sees if they work together.
so let us analyze that.

![[control_unit1.png]](../../images/control_unit/control_unit1.png)
here the first instructions are:
```verilog
//instructions with alu_op 2
add
sub
and
or
slt
sll
srl
sltu
xor
addi
andi
ori
slti
slli
srli
sltiu
xori
//then instruction with aluop 3
lui
//then follows instructions with aluop 0
lw
sw
lbu
sb
//then follow instruction with aluop1
beq
```

hence we can see the main decoder is working well with the aludecoder as it is giving correct values based on the requirements:

alu op = 00  for lw, sw, lbu and sb
alu op = 01 for beq
alu op = 10 for R and I type instructions
alu op = 11 for load upper immediate

