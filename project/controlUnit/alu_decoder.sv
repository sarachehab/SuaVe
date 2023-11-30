
module aluDecoder (
    //inputs:
    input logic [1:0] alu_op_i,
    input logic [2:0] funct3_i,
    input logic funct7_b5_i,
    input logic op_5_i,

    output logic [3:0] alu_control_o,
    output logic byte_address_o
);
logic rTypeSub = funct7_b5_i & op_5_i;

always_comb
    case(alu_op_i)
    2'b00:  if(funct3_i[1])begin
                alu_control_o = 1'b000; // add for lw or sw
                byte_address_o = 1'b0; for lw and sw
            end
            else begin
                alu_control_o = 1'b000; 
                byte_address_o = 1'b1;// for lb and sb
            end
    2'b01: alu_control_o = 001; //subtract for beq
    2'b11: alu_control_o = 1000 //logical shift left for lui
    default:    case(funct3_i) // if we have R-type or I-type, because we've dealt with lw, sw and beq
                    3'b000: if (rTypeSub)
                                alu_control_o = 3'b001; //subtract as sub has f_iunct7_5 high and op_5 high while addi has op_5 low
                            else
                                alu_control_o = 3'b000; //add, addi
                    3'b001: alu_control_o = 4'b1000;
                    3'b101: if(rTypeSub)
                                alu_control_o = 4'b1001;
                            else
                                alu_control_o = 4'b1010;
                    3'b011: alu_control_o = 4b'0101;
                    3'b010: alu_control_o = 3'b101; //slt, slti
                    3'b110: alu_control_o = 3'b011; // or, ori
                    3'b111: alu_control_o = 3'b010; //and, andi
                    3b'101: alu_control_o = 4'b1010 //sra, srai
                    3b'100: alu_control_o = 4'b0111 // xor, xori

                                default: alu_control_o = 3'b000;
                endcase
    endcase

endmodule
/*
alu op = 00 lw and sw
alu op = 01 beq
alu op = 10 lb
alu op = 11 load upper

distinguish between sub, and addi and add
for sub op5 and f_iunct7_5 is 1 
for add f_iunct7_5 is 0 and op5 is 1
addi doesnt have funct7 but does hav op5 which is 0 
*/
