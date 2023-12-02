module instruction_memory #(
    parameter   ADDR_EXP = 12,
                BYTE_SIZE = 8,
                DATA_WIDTH = 32,
                FIRST_INSTR_ADDR = 32'hBFC00000,
                LAST_INSTR_ADDR = 32'hBFC00FFF
)(
    input logic [DATA_WIDTH-1:0] addr_i,
    output logic [DATA_WIDTH-1:0] instr_o
);

logic [BYTE_SIZE-1:0] rom [2**ADDR_EXP-1:0];

initial begin

    $display("Loading rom.");
    $readmemh("instructions.mem", rom);
    $display("Program written to ROM successfully");

end;

logic [DATA_WIDTH-1:0] normalized_address = (addr_i - FIRST_INSTR_ADDR) & 32'hFFFFFFFC;

assign instr_o = {rom[normalized_address+32'd3], rom[normalized_address+32'd2], rom[normalized_address+32'd1], rom[normalized_address]};

endmodule