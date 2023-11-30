module aluDecoder (
    //inputs:
    input logic [1:0] alu_op_i,
    input logic [2:0] funct3_i,
    input logic funct7_b5_i,
    input logic op_5_i,

    output logic [2:0] alu_control_o
);
logic rTypeSub = funct7_b5_i & op_5_i;

always_comb
    case(alu_op_i)
    2'b00:  alu_control_o = 000; // add for lw or sw
    2'b01: alu_control_o = 001; //subtract for beq
    default:    case(funct3_i) // if we have R-type or I-type, because we've dealt with lw, sw and beq
                    3'b000: if (rTypeSub)
                                alu_control_o = 3'b001; //subtract as sub has f_iunct7_5 high and op_5 high while addi has op_5 low
                            else
                                        alu_control_o = 3'b000; //add, addi
                                3'b010: alu_control_o = 3'b101; //slt, slti
                                3'b110: alu_control_o = 3'b011; // or, ori
                                3'b111: alu_control_o = 3'b010; //and, andi
                                default: alu_control_o = 3'b000;
                endcase
    endcase

endmodule
/*
distinguish between sub, and addi and add
for sub op5 and f_iunct7_5 is 1 
for add f_iunct7_5 is 0 and op5 is 1
addi doesnt have funct7 but does hav op5 which is 0 
*/
