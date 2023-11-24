module regFile #(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input logic WE3, 
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] AD1, AD2, AD3,
    input logic [DATA_WIDTH-1:0] WD3,
    output logic [DATA_WIDTH-1:0] RD1, RD2, a0
);

logic [DATA_WIDTH-1:0] rf[2**ADDRESS_WIDTH-1:0];

// initial begin
//     $display("Loading rom.");
//     $readmemh("sinerom.mem", rom_array);
// end;

always_ff @(posedge clk) 
    if (WE3) rf[AD3] <=  WD3;

assign RD1 = (AD1 != 0) ? rf[AD1] : 0;
assign RD2 = (AD2 != 0) ? rf[AD2] : 0;
assign a0  = (AD3 != 0) ? rf[AD3] : 0; //could be wrong, discuss!!!!!

endmodule