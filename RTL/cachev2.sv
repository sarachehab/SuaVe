module cachev2 (
	input logic clk_i , write_enable_i , cache_enable_i, byte_op_i,
	input logic [31:0] address_i , write_data_i,
	//output signals
	output logic [31:0] read_data_o
);

    logic [31:0] mem_incoming_data;
    logic [31:0] mem_address, mem_write_data;
    logic mem_write_enable , mem_byte_op;

cacheline line(
    .clk_i(clk_i),
    .write_enable_i(write_enable_i),
    .cache_enable_i(cache_enable_i),
    .address_i(address_i),
    .write_data_i(write_data_i),
    .hit_o(hit_o),
    .read_data_o(read_data_o),
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
