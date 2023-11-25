module pc_top # (
    parameter PC_WIDTH = 32
)(
    input  clk, pcSrc,
    input  [PC_WIDTH-1:0] immExt,
    output [PC_WIDTH-1:0] pcOut
);

    logic [PC_WIDTH-1:0] pcReg;

    initial begin 
        pcReg = {PC_WIDTH{1'b0}};
    end

    always_ff @ (posedge clk)
        pcReg <= pcSrc ? pcReg + immExt : pcReg + PC_WIDTH'd4;

    assign pcOut = pcReg;

endmodule

