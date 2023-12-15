# Extend Unit

The `Sign Extend` is fairly straigtforward for our RISCV as we need to extend the immediate of the based on the instruction type. 

The instructions are divided based on the following:

![[sign_ext1.png]](../../images/extend/sign_ext1.png)


> R type instructions do not have an immediate field, so no extension needed there


The following is how the different instruction types are extended based on the type of instruction (determined by the input `instr_i` given to the sign extend module from the controlunit)

```verilog
case(imm_src_i)

	//type I
	3'b000: imm_ext_o = {{20{instr_i[31]}}, instr_i[31:20]};
	// type S
	3'b001: imm_ext_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]};
	//type B
	3'b010: imm_ext_o = {{20{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], {1'b0}};
	//type Jal
	3'b011: imm_ext_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], {1'b0}};
	//type U
	3'b100: imm_ext_o = {instr_i[31:12], {12{1'b0}}};
	 default: imm_ext_o = 32'b0;
```


The first test shown below outputted the correct `sign extended` immediate values for all except for imm_src_i = 11 which should set imm_ext_o to be { {12{1'b0}}, instr_i[31:12]};
![[error_sign_extend.jpg]](../../images/extend/error_sign_extend.jpg)


![[extend2.jpg]](../../images/extend/sign_extend2.jpg)

Here, we can see that the instructions are sign extended properly