module regFile_top#(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input logic we3, clk,
    input logic [ADDRESS_WIDTH-1:0] ad1, ad2, ad3,
    input logic [DATA_WIDTH-1:0] wd3,
    output logic [DATA_WIDTH-1:0] rd1, rd2
);

logic [DATA_WIDTH-1:0] rf[2**ADDRESS_WIDTH-1:0];

initial begin
    for (int i = 0; i < 32; i++)
        rf[i] = DATA_WIDTH'b0;
end

always_ff @(posedge clk) 
    if (we3) rf[ad3] <=  wd3;

assign rd1 = rf[ad1];
assign rd2 = rf[ad2];

endmodule