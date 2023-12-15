module cache (
	input logic clk_i , we_i , byte_op_i, cache_enable_i,
	input logic [31:0] addr_i , wd_i,
	//output signals
	output logic [31:0] rd_o
);

    logic [31:0] mem_incoming_data;
    logic [31:0] mem_address, mem_write_data;
    logic mem_write_enable , mem_byte_op;


cacheline line(
    .clk_i(clk_i),
    .write_enable_i(we_i),
    .cache_enable_i(cache_enable_i),
    .address_i(addr_i),
    .write_data_i(wd_i),
    .read_data_o(rd_o),
    .byte_op_i(byte_op_i),

    .mem_incoming_data_i(mem_incoming_data),
    .mem_address_o(mem_address),
    .mem_write_data_o(mem_write_data),
    .mem_write_enable_o(mem_write_enable),
    .mem_byte_op_o(mem_byte_op)
);

data_memory memory(
    .clk_i(clk_i),
    .we_i(mem_write_enable),
    .addr_i(mem_address),
    .wd_i(mem_write_data),
    .rd_o(mem_incoming_data),
    .byte_op_i(mem_byte_op)
);

endmodule
