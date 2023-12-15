# ALU Decoder

The `ALU Decoder` is part of the `Control Unit`, and is there to pass on control signals to the Arithmetic Logic Unit

![[alu_decoder.png]](../../../images/control_unit/alu_decoder.png)

The following instructions are supported:

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


Only the R and I type instructions are of interest to the `ALU`, and thus the `ALUDecoder`. These two instructions can be differentiated through funct3.

> For store and load instructions, the ALU should perform an addition.

Therefore, in the snippet of code below we can see:

```verilog
always_comb
    case(alu_op_i)
    2'b00:  if(funct3_i[1])begin
                alu_control_o = 4'b0000; // add for lw or sw
                byte_address_o = 1'b0;
            end
            else begin
                alu_control_o = 4'b0000; // for lbu and sb
                byte_address_o = 1'b1;// for lbu and sb
            end
    2'b01: begin
        alu_control_o = 4'b1000; //subtract for beq
        byte_address_o = 1'b0; //for lw and sw
    end
    2'b11: begin
        alu_control_o = 4'b0001; //logical shift left for lui
        byte_address_o = 1'b0; //for lw and sw
    end
    //defaut case for 2'b10
    default:    case(funct3_i)
```

Here, we first differentiate based on the case of `ALUOp` and then we use the second bit of `funct3` [1] to differentiate between LW, SW and LBU and SB. this works because the bit [1] is 1 for LW, SW and 0 for LBU and SB.

We also set our output `byte_addres_o` to 1 only for LBU and SB as they are the only byte instructions we have, elsewhere it would be 0.

Then for the default case which will be `alu_op_1` as 2'b10 (which is R and I type instructions) we need to differentiate between the different instructions using `funct3` as it is unique for all except for add, addi and subtract as well as for SRA, SRAI and SRL, SRLI. hence we use something interesting. We make an internal logic called rTypeSub which is:

```
logic rTypeSub = funct7_b5_i & op_5_i;
```

which gives a 1 for subtract so we can differentiate between it and add, addi. This is because sub has `funct7_5` high and `op_5` high while `addi` has `op_5` low and add has bit 5 of funct7 as low. 

```verilog
default:    case(funct3_i)
	3'b000: if (rTypeSub) begin
		alu_control_o = 4'b1000;
		byte_address_o = 1'b0; //for lw and sw
		end
		else begin
		alu_control_o = 4'b0000; //add, addi, jalr
		byte_address_o = 1'b0;
```
it is the exact same for SRA, SRAI and SRL, SLRI. just with different `funct3`.

It is also important to know that for many instructions such as BNE and SUB, the alu is being told to do a subtract operation and for LW, SW it is being told to do an add instruction so we have made these instructions to output the same `alu_control` so that the alu doesnt need to have a separate add function for LW and SW when it already has an add function for ADD and ADDI, hence reducing redundancies.


And the rest are all determined by `funct3`.
For safety we also add a default case and set everything to 0.

```verilog
3'b001: begin
	alu_control_o = 4'b0001;    //sll, slli
	 byte_address_o = 1'b0; //for lw and sw
	end
	3'b101: if(rTypeSub) begin
				alu_control_o = 4'b1101;    //sra. srai
				byte_address_o = 1'b0; //for lw and sw
		end
			else begin
				alu_control_o = 4'b0101;    //srl, srli
				byte_address_o = 1'b0; //for lw and sw
			end
	3'b011: begin
		alu_control_o = 4'b0011; //sltu, sltiu
		byte_address_o = 1'b0;
	end
	3'b010: begin
		alu_control_o = 4'b0010; //slt, slti
		byte_address_o = 1'b0; 
	end
	3'b110:begin
		alu_control_o = 4'b0110; // or, ori
		byte_address_o = 1'b0; 
	end
	3'b111: begin
		alu_control_o = 4'b0111; //and, andi
		byte_address_o = 1'b0;
	end
	3'b100: begin
		alu_control_o = 4'b0100; // xor, xori
		byte_address_o = 1'b0;
	end
	default: begin
		alu_control_o = 4'b0000;
		byte_address_o = 1'b0; //for lw and sw
	     end
```

Extensive testing was conducted for the `ALUDecoder`. The testbench tests every instructions, and prints the expected value we should have obtained: 


```verilog
0
8
7
6
2
1
5
```

The waveform is as expected:

![[alu_decoder2.png]](../../../images/control_unit/alu_decoder2.png)