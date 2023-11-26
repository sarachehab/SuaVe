module pc # (
    parameter PC_WIDTH = 32
)(
    input                   clk, PCSrc, rst,
    input  [PC_WIDTH-1:0]   ImmExt,
    output [PC_WIDTH-1:0]   PC
);

    logic [PC_WIDTH-1:0] PCNext;

    initial begin 
        PCNext = 32'hBFC00000;
    end

    always_ff @ (posedge clk)
        if (rst)    PCNext <= 32'hBFC00000;
        else        PCNext <= PCSrc ? PC + ImmExt : PC + 32'd4;

    assign PC = PCNext;

endmodule

