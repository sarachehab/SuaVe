module alu_decoder (
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
                alu_control_o = 4'b0000; // add for lw or sw
                byte_address_o = 1'b0; //for lw and sw
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
    default:    case(funct3_i) // if we have R-type or I-type, because we've dealt with lw, sw and beq
                    3'b000: if (rTypeSub) begin
                                alu_control_o = 4'b1000; //subtract as sub has f_iunct7_5 high and op_5 high while addi has op_5 low
                                byte_address_o = 1'b0; //for lw and sw
                            end
                            else begin
                                alu_control_o = 4'b0000; //add, addi, jalr
                                byte_address_o = 1'b0; //for lw and sw
                            end
                    3'b001: begin
                        alu_control_o = 4'b0001;    //sll, slli
                        byte_address_o = 1'b0; //for lw and sw
                    end
                    3'b101: if(rTypeSub) begin
                                alu_control_o = 4'b1101;    //sra. srai
                                byte_address_o = 1'b0; //for lw and sw
                            end
                            else begin
                                alu_control_o = 4'b0101;    //srl, srli 
                                byte_address_o = 1'b0; //for lw and sw
                            end
                    3'b011: begin 
                        alu_control_o = 4'b0011; //sltu, sltiu
                        byte_address_o = 1'b0; //for lw and sw
                    end
                    3'b010: begin
                        alu_control_o = 4'b0010; //slt, slti
                        byte_address_o = 1'b0; //for lw and sw

                    end
                    3'b110:begin
                        alu_control_o = 4'b0110; // or, ori
                        byte_address_o = 1'b0; //for lw and sw
                    end
                    3'b111: begin
                        alu_control_o = 4'b0111; //and, andi
                        byte_address_o = 1'b0; //for lw and sw
                    end
                    3'b100: begin
                        alu_control_o = 4'b0100; // xor, xori
                        byte_address_o = 1'b0; //for lw and sw
                    end

                    default: begin
                        alu_control_o = 4'b0000;
                        byte_address_o = 1'b0; //for lw and sw
                    end
                endcase
    endcase

endmodule
/*
alu op = 00 lw and sw
alu op = 01 beq
alu op = 10 R and I type
alu op = 11 load upper

distinguish between sub, and addi and add
for sub op5 and f_iunct7_5 is 1 
for add f_iunct7_5 is 0 and op5 is 1
addi doesnt have funct7 but does hav op5 which is 0 
*/
