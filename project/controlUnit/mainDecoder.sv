module mainDecoder (
    //inputs:
    input logic [6:0] op,
    //outputs:
    output logic branch,//branch and jump need to be or-ed together to determing the PCSrc signal.
    output logic jump,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic ALUSrc,
    output logic [1:0] ImmSrc,
    output logic RegWrite,
    output logic [1:0] ALUOp
);

always_comb
    case(op)
        //memory read instruction: lw
        7'b0000011 : begin
            RegWrite = 1'b1;
            ImmSrc = 2'b00;
            ALUSrc = 1'b1;
            MemWrite = 1'b0;
            ResultSrc = 2'b01;
            branch = 1'b0;
            ALUOp = 2'b00;
            jump = 1'b0;
        end
        //memory write instruction: sw
        7'b0100011 : begin
            RegWrite = 1'b0;
            ImmSrc = 2'b01;
            ALUSrc = 1'b1;
            MemWrite = 1'b1;
            ResultSrc = 2'b00;//don't-care values 
            branch = 1'b0;
            ALUOp = 2'b00;
            jump = 1'b0;
        end
        //register operation:
        7'b0110011 : begin
            RegWrite = 1'b1;
            ImmSrc = 2'b00; //dont-care values
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            branch = 1'b0;
            ALUOp = 2'b10;
            jump = 1'b0;
        end
        //branch opreation: beq
        7'b1100011 : begin
            RegWrite = 1'b0;
            ImmSrc = 2'b10;
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;//dont-care values
            branch = 1'b1;
            ALUOp = 2'b01;
            jump = 1'b0;
        end
        //immediate operation:
        7'b0010011 : begin
            RegWrite = 1'b1;
            ImmSrc = 2'b00;
            ALUSrc = 1'b1;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            branch = 1'b0;
            ALUOp = 2'b10;
            jump = 1'b0;
        end
        7'b1101111 : begin
            RegWrite = 1'b1;
            ImmSrc = 2'b11;
            ALUSrc = 1'b0;//dont-care value
            MemWrite = 1'b0;
            ResultSrc = 2'b10;
            branch = 1'b0;
            ALUOp = 2'b10;//dont-care value
            jump = 1'b1;
        end
        default : begin
            RegWrite = 1'b1;
            ImmSrc = 2'b00; //dont-care values
            ALUSrc = 1'b0;
            MemWrite = 1'b0;
            ResultSrc = 2'b00;
            branch = 1'b0;
            ALUOp = 2'b10;
            jump = 1'b0;
        end
    endcase
endmodule
/*what do we want the default case to be? 
->perhaps we the default to reset the program counter (jump to first intruction)
->maybe we want it to do nothing (no-op) so do not increment program counter?

for not this has been set to register operation mode
*/
