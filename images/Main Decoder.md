# Main Decoder
### Introduction
The control Unit is split into two sections. The instructions are initially interpreted by the main decoder which only has one input. The main decoder accepts as its inputs the opcode of an instruction (the 7 least significant bits of the instruction). With this information, the main decoder can determine if there is an R type, I type, S type, etc instruction. The main decoder drives a 2 bit output to the alu decoder which it the decodes using funct3 and funct7 to determine the alu operation. The main decoder also drives other important control signals which control the program counter, registry file, data memory and the extend block.

![main decoder schematic](images/main_decoder_schematic.png)

The following is the truth table for the given opcode. The output signals should be driven according these values:

| instruction | opcode  | RegWrite | ImmSrc | ALUSrc | MemWrite | ResultSrc | Branch | ALUop | Jump | JALR |
|-------------|---------|----------|--------|--------|----------|-----------|--------|-------|------|------|
| Load        | 0000011 | 1        | 000    | 1      | 0        | 01        | 0      | 00    | 0    | 0    |
| store       | 0100011 | 0        | 001    | 1      | 1        | xx        | 0      | 00    | 0    | 0    |
| Register    | 0110011 | 1        | xxx    | 0      | 0        | 00        | 0      | 10    | 0    | 0    |
| Branch      | 1100011 | 0        | 010    | 0      | 0        | xx        | 1      | 01    | 0    | 0    |
| Immediate   | 0010011 | 1        | 000    | 1      | 0        | 00        | 0      | 10    | 0    | 0    |
| JAL         | 1101111 | 1        | 011    | x      | 0        | 10        | 0      | xx    | 1    | 0    |
| JALR        | 1100111 | 1        | 000    | 1      | 0        | 10        | 0      | 10    | 0    | 1    |
| LUI         | 0110111 | 1        | 100    | 1      | 0        | 11        | 0      | 11    | 0    | 0    |



#### Signal Defintions:
-**RegWrite**: controls the register file's write enable

-**ImmSrc**: controls the type of immediate to be read which can depend on the instruction type

-**ALUSrc**: sets whether or not the alu reads from extend block or register file

-**MemWrite**: controls the main data memory write enable

-**ResultSrc**: controls the final mux which decides which result gets written to the register file

-**Branch**: goes high if and only if there is a branch instruction

-**ALUop**: output signal to ALU decoder which then further decodes this signal by combining it with funct3 and funct7

-**Jump**: goes high if and only if there is a JAL instruction

-**JALR**: goes high if and only if there is a JALR instruction

#### Systerm Verilog Implementation
```verilog
module main_decoder (
    //inputs:
    input logic [6:0]                   op_i,
    //outputs:
    output logic                        branch_o,
    output logic                        jump_o,
    output logic                         JALR_o,
    output logic    [1:0]               result_src_o,
    output logic                        mem_write_o,
    output logic                        alu_src_o,
    output logic    [2:0]               imm_src_o,
    output logic                        reg_write_o,
    output logic    [1:0]               alu_op_o,
);
```
Here, the inputs and outputs and outputs can be defined. To interpret the opcode from the input `op_i` it is possible to use a case statement to simply define what each signal should be driven to as shown below: 
```verilog
always_comb begin

    case(op_i)

        //memory read instruction: lw
        7'b0000011 : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b000;
            alu_src_o = 1'b1;
            mem_write_o = 1'b0;
            result_src_o = 2'b01;
            branch_o = 1'b0;
            alu_op_o = 2'b00;
            jump_o = 1'b0;
            JALR_o = 1'b0;
            cache_enable_o = 1'b1;
        end

        //memory write instruction: sw
        7'b0100011 : begin
            reg_write_o = 1'b0;
            imm_src_o = 3'b001;
            alu_src_o = 1'b1;
            mem_write_o = 1'b1;
            result_src_o = 2'b00;//don't-care values 
            branch_o = 1'b0;
            alu_op_o = 2'b00;
            jump_o = 1'b0;
            JALR_o = 1'b0;
            cache_enable_o = 1'b1;
        end
    //... and so on 
```
To test this, it is possible to use a UVM testbench which drives the `op_i` inpute to random values and checks if the outputs are correct. Here are a few examples of the waveforms produces from such a testing methodology. 
![Main Decoder Waveform](images/maindecoder_waveform.png)
