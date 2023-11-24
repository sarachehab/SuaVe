module programcounter # (
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
        program_counter = {PC_WIDTH{1'b0}};
    end

    always_ff @ (posedge clk) begin

        if (rst)    program_counter <= {PC_WIDTH{1'b0}};
        else        program_counter <= PCsrc ? program_counter + ImmOp : program_counter + 32'd4;   // change 32 to be dependant on PC_WIDTH

    end

    assign PC = program_counter;

endmodule

