module instruction_memory #(
    parameter   BYTE_SIZE = 8,
                DATA_WIDTH = 32,
                FIRST_INSTR_ADDR = 32'hBFC00000,
                LAST_INSTR_ADDR  = 32'hBFC00FFF
)(
    input  logic [DATA_WIDTH-1:0] addr_f_i,
    output logic [DATA_WIDTH-1:0] instr_f_o
);

logic [BYTE_SIZE-1:0] rom [LAST_INSTR_ADDR:FIRST_INSTR_ADDR];

initial begin

    $display("Loading rom.");
    //$readmemh("pdf.hex", rom);
    $readmemh("instructions.hex", rom);
    $display("Program written to ROM successfully");

end;

logic [DATA_WIDTH-1:0] addr = addr_f_i & 32'hFFFFFFFC;

assign instr_f_o = {rom[addr+32'd0], rom[addr+32'd1], rom[addr+32'd2], rom[addr+32'd3]};

endmodule
