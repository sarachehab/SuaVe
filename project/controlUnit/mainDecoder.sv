module mainDecoder (
    //inputs:
    input logic [6:0] op_i,
    //outputs:
    output logic branch_o,//branch_o and jump_o need to be or-ed together to determing the PCSrc signal.
    //schematic in lecture slide call for anding with zero which doesnt make sense???
    output logic jump_o,
    output logic [1:0] result_src_o,
    output logic mem_write_o,
    output logic alu_src_o,
    output logic [1:0] imm_src_o,
    output logic reg_write_o,
    output logic [1:0] alu_op_o
);

always_comb
    case(op_i)
        //memory read instruction: lw
        7'b0000011 : begin
            reg_write_o = 1'b1;
            imm_src_o = 2'b00;
            alu_src_o = 1'b1;
            mem_write_o = 1'b0;
            result_src_o = 2'b01;
            branch_o = 1'b0;
            alu_op_o = 2'b00;
            jump_o = 1'b0;
        end
        //memory write instruction: sw
        7'b0100011 : begin
            reg_write_o = 1'b0;
            imm_src_o = 2'b01;
            alu_src_o = 1'b1;
            mem_write_o = 1'b1;
            result_src_o = 2'b00;//don't-care values 
            branch_o = 1'b0;
            alu_op_o = 2'b00;
            jump_o = 1'b0;
        end
        //register operation:
        7'b0110011 : begin
            reg_write_o = 1'b1;
            imm_src_o = 2'b00; //dont-care values
            alu_src_o = 1'b0;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
        end
        //branch_o opreation: beq
        7'b1100011 : begin
            reg_write_o = 1'b0;
            imm_src_o = 2'b10;
            alu_src_o = 1'b0;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;//dont-care values
            branch_o = 1'b1;
            alu_op_o = 2'b01;
            jump_o = 1'b0;
        end
        //immediate operation:
        7'b0010011 : begin
            reg_write_o = 1'b1;
            imm_src_o = 2'b00;
            alu_src_o = 1'b1;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
        end
        //jump operatio : JAL
        7'b1101111 : begin
            reg_write_o = 1'b1;
            imm_src_o = 2'b11;
            alu_src_o = 1'b0;//dont-care value
            mem_write_o = 1'b0;
            result_src_o = 2'b10;
            branch_o = 1'b0;
            alu_op_o = 2'b00;//dont-care value
            jump_o = 1'b1;
        end
        default : begin
            reg_write_o = 1'b1;
            imm_src_o = 2'b00; //dont-care values
            alu_src_o = 1'b0;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
        end
    endcase
endmodule
/*what do we want the default case to be? 
->perhaps we the default to reset the program counter (jump_o to first intruction)
->maybe we want it to do nothing (no-op) so do not increment program counter?

for not this has been set to register operation mode
*/
