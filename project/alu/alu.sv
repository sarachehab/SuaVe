module alu#(
    parameter DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0] SrcA, SrcB,
    input  logic [2:0] ALUControl,
    output logic [DATA_WIDTH-1:0] ALUResult,
    output logic EQ
);

always_comb begin 
    EQ = (SrcA == SrcB);
    case (ALUControl)
        // add
        3'b000: ALUResult = SrcA + SrcB;
        // subtract
        3'b001: ALUResult = SrcA - SrcB;
        // and
        3'b010: ALUResult = SrcA & SrcB;
        // or
        3'b011: ALUResult = SrcA | SrcB;
        // SLT
        3'b101: ALUResult = {{DATA_WIDTH-1{1'b0}}, (SrcA < SrcB)};
        default: ALUResult = {DATA_WIDTH{1'b0}};
    endcase 
end

endmodule
