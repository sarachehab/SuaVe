## Control Unit

![[control_unit2.png]](../../images/control_unit/control_unit2.png)

The components of the control unit are mentioned and tested individually but the top file combines both and sees if they work together.

Let us analyze that.

![[control_unit1.png]](../../images/control_unit/control_unit1.png)

Here, the first instructions are:

| Type  | Implemented Instructions  |
| ----- | ------------------------- |
| `R`   |`ADD`, `SUB`, `SLL`, `SLT`, `SLTU`, `XOR`, `SRL`, `SRA`, `OR`, `AND`|
| `I`   |`ADDI`, `SLLI`, `SLTI`, `XORI`, `SRLI`, `SRAI`, `ORI`, `ANDI`, `LBU`, `LW`, `JALR`|
| `B`   |`BNE`|
| `S`   |`SW`, `SB`|
| `U`   |`LUI`|
| `J`   |`JAL`|


These instructions can be identified through the `ALUOp` they are mapped to:
- `ALUOp = 2'00` for LW, SW, LBU and SB
- `ALUOp = 2'01` for BNE
- `ALUOp = 2'10` for R and I type instructions
- `ALUOp = 2'11` for LUI

