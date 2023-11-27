module mainDecoder (
    //inputs:
    input logic [6:0] op,
    //outputs:
    output logic branch,//branch and jump need to be or-ed together to determing the PCSrc signal.
    //schematic in lecture slide call for anding with zero which doesnt make sense???
    output logic jump,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic ALUSrc,
    output logic [1:0] ImmSrc,
    output logic RegWrite,
    output logic [1:0] ALUOp
)

always_comb
    case(op)
        //memory read instruction: lw
        6'b0000011 : begin
            RegWrite = 1'b1;
            ImmSrc = 2'b00;
            ALUSrc = 1'b1;
            MemWrite = 1'b0;
            ResultSrc = 2'b01;
            Branch = 1'b0;
            ALUOp = 2'b00;
            Jump = 1'b0;
        end
        //memory write instruction: sw
        6'b0100011 : begin
            RegWrite = 1'b0,
            ImmSrc = 1'b01;
            ALUSrc = 1'b1;
            MemWrite = 1'b1;
            ResultSrc = 2'b00;//don't-care values 
            Branch = 1'b0;
            ALUOp = 2'b00;
            Jump = 1'b0;
        end
        //register operation:
        6'b0110011 : begin
            RegWrite = 1'b1,
            ImmSrc = 1'b00; //dont-care values
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            Branch = 1'b0;
            ALUOp = 2'b10;
            Jump = 1'b0;
        end
        //branch opreation: beq
        6'b1100011 : begin
            RegWrite = 1'b0,
            ImmSrc = 1'b10;
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;//dont-care values
            Branch = 1'b1;
            ALUOp = 2'b01;
            Jump = 1'b0;
        end
        //immediate operation:
        6'b0010011 : begin
            RegWrite = 1'b1,
            ImmSrc = 1'b00;
            ALUSrc = 1'b1;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            Branch = 1'b0;
            ALUOp = 2'b10;
            Jump = 1'b0;
        end
        6'b1101111 : begin
            RegWrite = 1'b1,
            ImmSrc = 1'b11;
            ALUSrc = 1'b0;//dont-care value
            MemWrite = 1'b0;
            ResultSrc = 2'b10;
            Branch = 1'b0;
            ALUOp = 2'b10;//dont-care value
            Jump = 1'b1;
        end
        default : begin
            RegWrite = 1'b1,
            ImmSrc = 1'b00; //dont-care values
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            Branch = 1'b0;
            ALUOp = 2'b10;
            Jump = 1'b0;
        end
    endcase
endmodule
/*what do we want the default case to be? 
->perhaps we the default to reset the program counter (jump to first intruction)
->maybe we want it to do nothing (no-op) so do not increment program counter?

for not this has been set to register operation mode
*/