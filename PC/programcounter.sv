module programcounter # (
    parameter   PC_WIDTH = 32
)(
    input                   clk,
    input                   PCsrc,
    input   [PC_WIDTH-1:0]  ImmOp,
    output  [PC_WIDTH-1:0]  PC
);

    logic   [PC_WIDTH-1:0]  c;

    initial begin 
        c = 32'b0;
    end

    always_ff @ (posedge clk) begin
        c <= PCsrc ? c + ImmOp : c + 32'd4;
    end

    assign PC = c;

endmodule

