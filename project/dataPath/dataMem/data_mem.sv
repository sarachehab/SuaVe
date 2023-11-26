module data_mem #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH    = 32
)(
    input  logic                     we_i, clk_i,
    input  logic [DATA_WIDTH-1:0]    wd_i,
    input  logic [ADDRESS_WIDTH-1:0] addr_i,
    output logic [DATA_WIDTH-1:0]    rd_o
);

    logic [DATA_WIDTH-1:0] dm[2**ADDRESS_WIDTH-1:0];

    initial begin
        for (int i = 0; i < 2**ADDRESS_WIDTH; i++)
            dm[i] = DATA_WIDTH'b0;
    end

    always_ff @(posedge clk_i) 
        if (we_i) dm[addr_i] <= wd_i;

    assign rd_o = dm[addr_i];

endmodule
