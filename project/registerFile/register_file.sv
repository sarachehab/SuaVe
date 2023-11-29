module register_file #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH    = 32
)(
    input  logic                     addr3_we_i, clk_i,
    input  logic [ADDRESS_WIDTH-1:0] addr1_i, addr2_i, addr3_i,
    input  logic [DATA_WIDTH-1:0]    addr3_wd_i,
    output logic [DATA_WIDTH-1:0]    rd1_o, rd2_o
);

    logic [DATA_WIDTH-1:0]    rf[2**ADDRESS_WIDTH-1:0];
    logic [DATA_WIDTH-1:0]    addr3_data_q;
    logic [ADDRESS_WIDTH-1:0] addr3_i_q;

    initial begin
        for (int i = 0; i < 32; i++)
            rf[i] = {DATA_WIDTH{1'b0}};
    end

    assign rd1_o = rf[addr1_i];
    assign rd2_o = rf[addr2_i];

    always_ff @(negedge clk_i) begin
        addr3_i_q <= addr3_i;
        if(addr3_we_i && addr3_i != 0) begin
            addr3_data_q <= addr3_wd_i;
        end else begin
            addr3_data_q <= rf[addr3_i];
        end
    end 

    always_ff @(posedge clk_i) begin
        rf[addr3_i_q] <= addr3_data_q;
    end

endmodule
