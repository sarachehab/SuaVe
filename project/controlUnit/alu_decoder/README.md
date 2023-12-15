the schematic below is for the alu decoder

![[alu_decoder.png]](../../../images/control_unit/alu_decoder.png)

this is a sub unit of the control unit and takes in the instruction values and signals from the main control unit and with that, controls the alu.

the main purpose of this module is that we can indicate what the ALU needs to do for the specific instruction given.
we have included the following instructions
```verilog
lw,
sw,
lbu,
sb,
beq,
lui,
sub,
add,
addi,
sll,
slli,
sra,
srai,
srl,
srli,
sltu,
sltiu,
slt,
slti,
or,
ori,
and,
andi,
xor,
xori,
jal,
jalr,

```

now the main differentiator for most of these instructions is using alu_op_i which comes from the main decoder.
we have:
alu op = 00  for lw, sw, lbu and sb
alu op = 01 for beq
alu op = 10 for R and I type instructions
alu op = 11 for load upper immediate

we have differentiated them based on this because the same instructrion for R and I type require the alu to do the same thing. Then following this the R and I type instructions are differentiated by funct3_i.

therefore in the snippet of code below we can see:

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

here we first differentiate based on the case of alu_op_i and then we use the second bit of funct3_1 [1] to differentiate between lw,sw and lbu, sb. this works because the bit [1] is 1 for lw,sw and 0 for lbu and sb.

we also set our output byte_addres_o to 1 only for lbu and sb as they are the only byte instructions we have, elsewhere it will be 0.

then for the default case which will be alu_op_1 as 2'b10 (which is R and I type instructions) we need to differentiate between the different instructions using funct3_i as it is unique for all except for add, addi and subtract as well as for sra, srai and srl, srli. hence we use something interesting. We make an internal logic called rTypeSub which is 
```
logic rTypeSub = funct7_b5_i & op_5_i;
```
which gives a 1 for subtract so we can differentiate between it and add, addi. This is because sub has funct7_5 high and op_5 high while addi has op_5 low and add has bit 5 of funct7 as low. 

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
it is the exact same for sra, srai and srl, slri. just with different funct3_i
It is also important to know that for many instructions such as beq and sub, the alu is being told to do a subtract operation and for lw, sw it is being told to do an add instruction so we have made these instructions to output the same alu_control_o so that the alu doesnt need to have a separate add function for lw and sw when it already has an add function for add and addi, hence reduing redundancies.


And the rest are all determined by funct3_i.
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

extensive testing was done for the alu decoder with the testbench 

and we can see for the following code the output should be: (as determined by the testbench)

```verilog
0
8
7
6
2
1
5

```

and we see the waveform as expected
![[alu_decoder2.png]](../../../images/control_unit/alu_decoder2.png)

and the test is done for all the instructions with the testbench.
