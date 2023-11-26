module aluDecoder #(
    //inputs:
    input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    input logic funct7_5,
    input logic op_5,

    output logic [2:0] ALUControl
);
logic rTypeSub = funct7_5 & op_5;

always_comb
    case(ALUOp)
    2'b00:  ALUControl = 000 // add for lw or sw
    2'b01: ALUControl = 001 //subtract for beq
    default:    case(funct3) // if we have R-type or I-type, because we've dealt with lw, sw and beq
                    3'b000: if (rTypeSub)
                                ALUControl = 3'b001 //subtract as sub has funct7_5 high and op_5 high while addi has op_5 low
                            else
                                        ALUControl = 3'b000; //add, addi
                                3'b010: ALUControl = 3'b101; //slt, slti
                                3'b110: ALUControl = 3'b011; // or, ori
                                3'b111: ALUControl = 3'b010; //and, andi
                                default: ALUControl = 3'b000;
                endcase
    endcase

endmodule
/*
distinguish between sub, and addi and add
for sub op5 and funct7_5 is 1 
for add funct7_5 is 0 and op5 is 1
addi doesnt have funct7 but does hav op5 which is 0 
*/