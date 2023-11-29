module data_memory # (
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH    = 32,
              BYTE_WIDTH    = 8, 
              START_ADDRESS = 32'h10000,
              END_ADDRESS   = 32'h1FFFF
)(
    input  logic                        clk_i, we_i, byte_op_i,
    input  logic [DATA_WIDTH-1:0]       addr_i,
    input  logic [DATA_WIDTH-1:0]       wd_i,
    output logic [DATA_WIDTH-1:0]       rd_o
);

logic [BYTE_WIDTH-1:0] data_ram [17'h1FFFF:0];
logic addr = byte_op_i ? addr_i : (addr_i & 32'hFFFFFFFC);

initial begin
    $readmemh("gaussian.mem", data_ram, START_ADDRESS, END_ADDRESS);
    for (int i = 0; i < START_ADDRESS; i++) begin
        data_ram[i] = {BYTE_WIDTH{1'b0}};
    end;
end;

always_ff @(posedge clk_i) begin

    if (we_i) begin
        data_ram[addr] <= wd_i[BYTE_WIDTH-1:0];

        if (byte_op_i) begin
            data_ram[addr+1] <= wd_i[2*BYTE_WIDTH-1:0];
            data_ram[addr+2] <= wd_i[3*BYTE_WIDTH-1:0];
            data_ram[addr+3] <= wd_i[4*BYTE_WIDTH-1:0];
        end;
    end;
end;

assign rd_o = byte_op_i ? {{3*BYTE_WIDTH{1'b0}}, data_ram[addr]} : {data_ram[addr+3], data_ram[addr+2], data_ram[addr+1], data_ram[addr+0]};

endmodule