module pc # (
    parameter   PC_WIDTH = 32
)(
    input                   clk,
    input                   rst,
    input                   PCsrc,
    input   [PC_WIDTH-1:0]  ImmOp,
    output  [PC_WIDTH-1:0]  PC
);

    logic   [PC_WIDTH-1:0]  program_counter;

    initial begin 
        program_counter = 32'hBFC00000;
    end

    always_ff @ (posedge clk) begin

        if (rst || program_counter > 32'hBFC00FFF)    program_counter <= {PC_WIDTH{1'b0}};
        else        program_counter <= PCsrc ? program_counter + ImmOp : program_counter + 32'd4;

    end

    assign PC = program_counter;

endmodule