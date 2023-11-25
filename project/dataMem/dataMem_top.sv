module dataMem_top#(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH    = 32
)(
    input  logic we, clk,
    input  logic [ADDRESS_WIDTH-1:0] ad,
    input  logic [DATA_WIDTH-1:0]    wd,
    output logic [DATA_WIDTH-1:0]    rd
);

logic [DATA_WIDTH-1:0] dm[2**ADDRESS_WIDTH-1:0];

initial begin
    for (int i = 0; i < 2**ADDRESS_WIDTH; i++)
        dm[i] = DATA_WIDTH'b0;
end

always_ff @(posedge clk) 
    if (we) dm[ad] <= wd;

assign rd = dm[ad];

endmodule
