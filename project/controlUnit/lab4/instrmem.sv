module instrmem #(
    parameter NUM_ADDRESSES=5,
              PC_WIDTH=32,
              DATA_WIDTH=8,
              INSTRUCTION_WIDTH=32
)(
    input logic [PC_WIDTH-1:0]         A, 
    output logic [INSTRUCTION_WIDTH-1:0]           instr 
);

logic [DATA_WIDTH-1:0] rom_array [2**NUM_ADDRESSES-1:0]; 

logic   [PC_WIDTH-1:0]   addr = {A[31:2], 2'b0};


assign instr = {rom_array[addr],rom_array[addr+1], rom_array[addr+2],rom_array[addr+3]};


initial begin
        $display("Loading rom.");
        $readmemh("instructions.mem",rom_array);
end;

endmodule
