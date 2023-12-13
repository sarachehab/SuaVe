module main_decoder (
    //inputs:
    input logic [6:0]                   op_i,
    //outputs:
    output logic                        branch_o,
    output logic                        jump_o,
    output logic                        jalr_o,
    output logic    [1:0]               result_src_o,
    output logic                        mem_write_o,
    output logic                        alu_src_o,
    output logic    [2:0]               imm_src_o,
    output logic                        reg_write_o,
    output logic    [1:0]               alu_op_o
);

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
            jalr_o = 1'b0;
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
            jalr_o = 1'b0;
        end

        //register operation:
        7'b0110011 : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b000; //dont-care values
            alu_src_o = 1'b0;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
            jalr_o = 1'b0;
        end

        //branch_o operation: beq
        7'b1100011 : begin
            reg_write_o = 1'b0;
            imm_src_o = 3'b010;
            alu_src_o = 1'b0;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;//dont-care values
            branch_o = 1'b1;
            alu_op_o = 2'b01;
            jump_o = 1'b0;
            jalr_o = 1'b0;
        end

        //immediate operation:
        7'b0010011 : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b000;
            alu_src_o = 1'b1;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
            jalr_o = 1'b0;
        end

        // Jump instruction JAL
        7'b1101111 : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b011;
            alu_src_o = 1'b0;//dont-care value
            mem_write_o = 1'b0;
            result_src_o = 2'b10;
            branch_o = 1'b0;
            alu_op_o = 2'b00;//dont-care value
            jump_o = 1'b1;
            jalr_o = 1'b0;
        end
        //Jump instruction JALR
        7'b1100111 : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b000;
            alu_src_o = 1'b1;
            mem_write_o = 1'b0;
            result_src_o = 2'b10;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
            jalr_o = 1'b1;
        end
        //upper type : lui
        7'b0110111 : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b100;
            alu_src_o = 1'b1;
            mem_write_o = 1'b0;
            result_src_o = 2'b11;
            branch_o = 1'b0;
            alu_op_o = 2'b11;
            jump_o = 1'b0;
            jalr_o = 1'b0;
        end

        // reset all variables
        default : begin
            reg_write_o = 1'b1;
            imm_src_o = 3'b000; //dont-care values
            alu_src_o = 1'b0;
            mem_write_o = 1'b0;
            result_src_o = 2'b00;
            branch_o = 1'b0;
            alu_op_o = 2'b10;
            jump_o = 1'b0;
            jalr_o = 1'b0;
        end
    endcase
end;
endmodule

/* what do we want the default case to be? 
->perhaps we the default to reset the program counter (jump_o to first intruction)
->maybe we want it to do nothing (no-op) so do not increment program counter?

for not this has been set to register operation mode
*/
