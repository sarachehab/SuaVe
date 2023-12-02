module instruction_memory #(
    parameter   A_WIDTH = 5,
                BYTE_SIZE = 8
)(
    input logic [A_WIDTH-1:0] address_i,
    output logic [D_WIDTH-1:0] instruction_o
);

logic [BYTE_SIZE-1:0] mem [(2**A_WIDTH)-1:0];

initial begin
    $readmemh("instructions.mem" , mem);
end;

assign instruction_o = {mem[(address_i & 32'hFFFFFFFC)+32'd3], mem[(address_i & 32'hFFFFFFFC)+32'd2], mem[(address_i & 32'hFFFFFFFC)+32'd1], mem[(address_i & 32'hFFFFFFFC)]}

endmodule