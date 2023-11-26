module reg_file #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH    = 32
)(
    input  logic                     addr3_we_i, clk_i,
    input  logic [ADDRESS_WIDTH-1:0] addr1_i, addr2_i, addr3_i,
    input  logic [DATA_WIDTH-1:0]    addr3_wd_i,
    output logic [DATA_WIDTH-1:0]    rd1_o, rd2_o
);

    logic [DATA_WIDTH-1:0] rf[2**ADDRESS_WIDTH-1:0];

    initial begin
        for (int i = 0; i < 32; i++)
            rf[i] = DATA_WIDTH'b0;
    end

    always_ff @(posedge clk_i) 
        if (addr3_we_i) rf[addr3_i] <= addr3_wd_i;

    assign rd1_o = rf[addr1_i];
    assign rd2_o = rf[addr2_i];

endmodule