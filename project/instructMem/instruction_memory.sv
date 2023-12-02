module instruction_memory #(
    parameter   NB_ADDR = 12,
                BYTE_SIZE = 8,
                INSTR_WIDTH = 32,
                FIRST_INSTRUCTION_ADDR = 32'hBFC00000,
                LAST_INSTRUCTION_ADDR = 32'hBFC00FFF
)(
    input logic [A_WIDTH-1:0] address_i,
    output logic [INSTR_WIDTH-1:0] instruction_o
);

logic [BYTE_SIZE-1:0] mem [(2**NB_ADDR)-1:0];

initial begin
    $readmemh("instructions.mem", mem, );
end;

assign instruction_o = {mem[(address_i & 32'hFFFFFFFC)+32'd3], mem[(address_i & 32'hFFFFFFFC)+32'd2], mem[(address_i & 32'hFFFFFFFC)+32'd1], mem[(address_i & 32'hFFFFFFFC)]}

endmodule