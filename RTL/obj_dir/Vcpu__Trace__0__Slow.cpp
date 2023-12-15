// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+127,"rst_i", false,-1);
    tracep->declBit(c+128,"trigger_i", false,-1);
    tracep->declBus(c+129,"a0_o", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+127,"rst_i", false,-1);
    tracep->declBit(c+128,"trigger_i", false,-1);
    tracep->declBus(c+129,"a0_o", false,-1, 31,0);
    tracep->declBit(c+130,"JB_instr", false,-1);
    tracep->declBit(c+88,"JALR_instr", false,-1);
    tracep->declBit(c+89,"mem_write", false,-1);
    tracep->declBit(c+90,"alu_src", false,-1);
    tracep->declBit(c+91,"reg_write", false,-1);
    tracep->declBit(c+92,"byte_address", false,-1);
    tracep->declBit(c+115,"zero", false,-1);
    tracep->declBit(c+93,"cache_enable", false,-1);
    tracep->declBus(c+94,"instr", false,-1, 31,0);
    tracep->declBus(c+95,"pc_var", false,-1, 31,0);
    tracep->declBus(c+96,"pc_plus_4", false,-1, 31,0);
    tracep->declBus(c+97,"imm_ext", false,-1, 31,0);
    tracep->declBus(c+116,"alu_out", false,-1, 31,0);
    tracep->declBus(c+98,"result_src", false,-1, 1,0);
    tracep->declBus(c+99,"imm_src", false,-1, 2,0);
    tracep->declBus(c+100,"alu_control", false,-1, 3,0);
    tracep->pushNamePrefix("controlUnit_top ");
    tracep->declBit(c+115,"zero_i", false,-1);
    tracep->declBus(c+101,"op_i", false,-1, 6,0);
    tracep->declBus(c+102,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+103,"funct7_5_i", false,-1);
    tracep->declBit(c+130,"JB_instr_o", false,-1);
    tracep->declBit(c+88,"JALR_instr_o", false,-1);
    tracep->declBus(c+98,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+89,"mem_write_o", false,-1);
    tracep->declBit(c+90,"alu_src_o", false,-1);
    tracep->declBus(c+99,"imm_src_o", false,-1, 2,0);
    tracep->declBit(c+91,"reg_write_o", false,-1);
    tracep->declBus(c+100,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+92,"byte_address_o", false,-1);
    tracep->declBit(c+93,"cache_enable_o", false,-1);
    tracep->declBus(c+104,"alu_op", false,-1, 1,0);
    tracep->declBit(c+105,"branch", false,-1);
    tracep->declBit(c+106,"jmp", false,-1);
    tracep->pushNamePrefix("aluDecoder ");
    tracep->declBus(c+104,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+102,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+103,"funct7_b5_i", false,-1);
    tracep->declBit(c+107,"op_5_i", false,-1);
    tracep->declBus(c+100,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+92,"byte_address_o", false,-1);
    tracep->declBit(c+108,"rTypeSub", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mainDecoder ");
    tracep->declBus(c+101,"op_i", false,-1, 6,0);
    tracep->declBit(c+105,"branch_o", false,-1);
    tracep->declBit(c+106,"jump_o", false,-1);
    tracep->declBit(c+88,"JALR_o", false,-1);
    tracep->declBus(c+98,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+89,"mem_write_o", false,-1);
    tracep->declBit(c+90,"alu_src_o", false,-1);
    tracep->declBus(c+99,"imm_src_o", false,-1, 2,0);
    tracep->declBit(c+91,"reg_write_o", false,-1);
    tracep->declBus(c+104,"alu_op_o", false,-1, 1,0);
    tracep->declBit(c+93,"cache_enable_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath ");
    tracep->declBus(c+133,"REG_ADDR_LENGTH", false,-1, 31,0);
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+134,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBus(c+109,"reg_addr1_i", false,-1, 4,0);
    tracep->declBus(c+110,"reg_addr2_i", false,-1, 4,0);
    tracep->declBus(c+111,"reg_addr3_i", false,-1, 4,0);
    tracep->declBit(c+91,"reg_we_i", false,-1);
    tracep->declBit(c+128,"trigger_i", false,-1);
    tracep->declBit(c+93,"cache_enable_i", false,-1);
    tracep->declBus(c+98,"result_src_i", false,-1, 1,0);
    tracep->declBus(c+97,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+96,"pc_next_i", false,-1, 31,0);
    tracep->declBit(c+89,"data_mem_we_i", false,-1);
    tracep->declBit(c+92,"data_mem_byte_op_i", false,-1);
    tracep->declBus(c+100,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+90,"alu_src_i", false,-1);
    tracep->declBit(c+115,"eq_o", false,-1);
    tracep->declBus(c+129,"a0_o", false,-1, 31,0);
    tracep->declBus(c+116,"alu_out_o", false,-1, 31,0);
    tracep->declBus(c+117,"reg_rd1", false,-1, 31,0);
    tracep->declBus(c+118,"reg_rd2", false,-1, 31,0);
    tracep->declBus(c+119,"data_mem_rd", false,-1, 31,0);
    tracep->declBus(c+131,"reg_wd", false,-1, 31,0);
    tracep->pushNamePrefix("cached_memory ");
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+89,"we_i", false,-1);
    tracep->declBit(c+92,"byte_op_i", false,-1);
    tracep->declBit(c+93,"cache_enable_i", false,-1);
    tracep->declBus(c+116,"addr_i", false,-1, 31,0);
    tracep->declBus(c+118,"wd_i", false,-1, 31,0);
    tracep->declBus(c+119,"rd_o", false,-1, 31,0);
    tracep->declBus(c+120,"mem_incoming_data", false,-1, 31,0);
    tracep->declBus(c+116,"mem_address", false,-1, 31,0);
    tracep->declBus(c+121,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+89,"mem_write_enable", false,-1);
    tracep->declBit(c+112,"mem_byte_op", false,-1);
    tracep->pushNamePrefix("line ");
    tracep->declBus(c+132,"width", false,-1, 31,0);
    tracep->declBus(c+135,"tag_bits", false,-1, 31,0);
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+89,"write_enable_i", false,-1);
    tracep->declBit(c+93,"cache_enable_i", false,-1);
    tracep->declBit(c+92,"byte_op_i", false,-1);
    tracep->declBus(c+116,"address_i", false,-1, 31,0);
    tracep->declBus(c+118,"write_data_i", false,-1, 31,0);
    tracep->declBus(c+119,"read_data_o", false,-1, 31,0);
    tracep->declBus(c+120,"mem_incoming_data_i", false,-1, 31,0);
    tracep->declBus(c+116,"mem_address_o", false,-1, 31,0);
    tracep->declBus(c+121,"mem_write_data_o", false,-1, 31,0);
    tracep->declBit(c+89,"mem_write_enable_o", false,-1);
    tracep->declBit(c+112,"mem_byte_op_o", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+4+i*1,"cache_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+20+i*1,"cache_tag", true,(i+0), 29,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+36+i*1,"valid", true,(i+0));
    }
    tracep->declBus(c+52,"counter", false,-1, 3,0);
    tracep->declBus(c+122,"tag", false,-1, 29,0);
    tracep->declBus(c+123,"byteoffset", false,-1, 1,0);
    tracep->declBit(c+53,"hit", false,-1);
    tracep->declBus(c+54,"wayhit", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+55,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+134,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+136,"START_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+137,"END_ADDRESS", false,-1, 31,0);
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+89,"we_i", false,-1);
    tracep->declBit(c+112,"byte_op_i", false,-1);
    tracep->declBus(c+116,"addr_i", false,-1, 31,0);
    tracep->declBus(c+121,"wd_i", false,-1, 31,0);
    tracep->declBus(c+120,"rd_o", false,-1, 31,0);
    tracep->declBus(c+124,"addr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("datapath_alu ");
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+117,"src1_i", false,-1, 31,0);
    tracep->declBus(c+125,"src2_i", false,-1, 31,0);
    tracep->declBus(c+100,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+115,"eq_o", false,-1);
    tracep->declBus(c+116,"alu_result_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath_register_file ");
    tracep->declBus(c+133,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+91,"addr3_we_i", false,-1);
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+128,"trigger_i", false,-1);
    tracep->declBus(c+109,"addr1_i", false,-1, 4,0);
    tracep->declBus(c+110,"addr2_i", false,-1, 4,0);
    tracep->declBus(c+111,"addr3_i", false,-1, 4,0);
    tracep->declBus(c+131,"addr3_wd_i", false,-1, 31,0);
    tracep->declBus(c+117,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+118,"rd2_o", false,-1, 31,0);
    tracep->declBus(c+129,"a0_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+56+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("extend_unit ");
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"instr_i", false,-1, 31,7);
    tracep->declBus(c+99,"imm_src_i", false,-1, 2,0);
    tracep->declBus(c+97,"imm_ext_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction_memory ");
    tracep->declBus(c+134,"BYTE_SIZE", false,-1, 31,0);
    tracep->declBus(c+132,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"FIRST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+139,"LAST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+95,"addr_i", false,-1, 31,0);
    tracep->declBus(c+94,"instr_o", false,-1, 31,0);
    tracep->declBus(c+114,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("program_counter ");
    tracep->declBus(c+132,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+126,"clk_i", false,-1);
    tracep->declBit(c+130,"jump_taken_i", false,-1);
    tracep->declBit(c+127,"rst_i", false,-1);
    tracep->declBit(c+88,"jalr_instr_i", false,-1);
    tracep->declBus(c+97,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+116,"jta_jalr_i", false,-1, 31,0);
    tracep->declBus(c+95,"pc_o", false,-1, 31,0);
    tracep->declBus(c+96,"pc_plus4_o", false,-1, 31,0);
    tracep->declBus(c+95,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[0]),30);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[1]),30);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[2]),30);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[3]),30);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[4]),30);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[5]),30);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[6]),30);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[7]),30);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[8]),30);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[9]),30);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[10]),30);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[11]),30);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[12]),30);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[13]),30);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[14]),30);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[15]),30);
    bufp->fullBit(oldp+36,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[0]));
    bufp->fullBit(oldp+37,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[1]));
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[2]));
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[3]));
    bufp->fullBit(oldp+40,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[4]));
    bufp->fullBit(oldp+41,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[5]));
    bufp->fullBit(oldp+42,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[6]));
    bufp->fullBit(oldp+43,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[7]));
    bufp->fullBit(oldp+44,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[8]));
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[9]));
    bufp->fullBit(oldp+46,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[10]));
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[11]));
    bufp->fullBit(oldp+48,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[12]));
    bufp->fullBit(oldp+49,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[13]));
    bufp->fullBit(oldp+50,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[14]));
    bufp->fullBit(oldp+51,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[15]));
    bufp->fullCData(oldp+52,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__counter),4);
    bufp->fullBit(oldp+53,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__hit));
    bufp->fullCData(oldp+54,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__wayhit),4);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+69,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+74,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+75,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+80,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+81,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+82,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+83,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+84,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+85,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+86,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+87,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+88,(vlSelf->cpu__DOT__JALR_instr));
    bufp->fullBit(oldp+89,(vlSelf->cpu__DOT__mem_write));
    bufp->fullBit(oldp+90,(vlSelf->cpu__DOT__alu_src));
    bufp->fullBit(oldp+91,(vlSelf->cpu__DOT__reg_write));
    bufp->fullBit(oldp+92,(vlSelf->cpu__DOT__byte_address));
    bufp->fullBit(oldp+93,(vlSelf->cpu__DOT__cache_enable));
    bufp->fullIData(oldp+94,(vlSelf->cpu__DOT__instr),32);
    bufp->fullIData(oldp+95,(vlSelf->cpu__DOT__program_counter__DOT__pc_next),32);
    bufp->fullIData(oldp+96,(((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
    bufp->fullIData(oldp+97,(vlSelf->cpu__DOT__imm_ext),32);
    bufp->fullCData(oldp+98,(vlSelf->cpu__DOT__result_src),2);
    bufp->fullCData(oldp+99,(vlSelf->cpu__DOT__imm_src),3);
    bufp->fullCData(oldp+100,(vlSelf->cpu__DOT__alu_control),4);
    bufp->fullCData(oldp+101,((0x7fU & vlSelf->cpu__DOT__instr)),7);
    bufp->fullCData(oldp+102,((7U & (vlSelf->cpu__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+103,((1U & (vlSelf->cpu__DOT__instr 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+104,(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op),2);
    bufp->fullBit(oldp+105,(vlSelf->cpu__DOT__controlUnit_top__DOT__branch));
    bufp->fullBit(oldp+106,(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp));
    bufp->fullBit(oldp+107,((1U & (vlSelf->cpu__DOT__instr 
                                   >> 5U))));
    bufp->fullBit(oldp+108,((IData)((0x40000020U == 
                                     (0x40000020U & vlSelf->cpu__DOT__instr)))));
    bufp->fullCData(oldp+109,((0x1fU & (vlSelf->cpu__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+110,((0x1fU & (vlSelf->cpu__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelf->cpu__DOT__instr 
                                        >> 7U))),5);
    bufp->fullBit(oldp+112,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__mem_byte_op));
    bufp->fullIData(oldp+113,((vlSelf->cpu__DOT__instr 
                               >> 7U)),25);
    bufp->fullIData(oldp+114,((0xfffffffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
    bufp->fullBit(oldp+115,((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                             == vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)));
    bufp->fullIData(oldp+116,(vlSelf->cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+117,(vlSelf->cpu__DOT__datapath__DOT__reg_rd1),32);
    bufp->fullIData(oldp+118,(vlSelf->cpu__DOT__datapath__DOT__reg_rd2),32);
    bufp->fullIData(oldp+119,(vlSelf->cpu__DOT__datapath__DOT__data_mem_rd),32);
    bufp->fullIData(oldp+120,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__mem_incoming_data),32);
    bufp->fullIData(oldp+121,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__mem_write_data),32);
    bufp->fullIData(oldp+122,((vlSelf->cpu__DOT__alu_out 
                               >> 2U)),30);
    bufp->fullCData(oldp+123,((3U & vlSelf->cpu__DOT__alu_out)),2);
    bufp->fullIData(oldp+124,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__memory__DOT__addr),32);
    bufp->fullIData(oldp+125,(vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i),32);
    bufp->fullBit(oldp+126,(vlSelf->clk_i));
    bufp->fullBit(oldp+127,(vlSelf->rst_i));
    bufp->fullBit(oldp+128,(vlSelf->trigger_i));
    bufp->fullIData(oldp+129,(vlSelf->a0_o),32);
    bufp->fullBit(oldp+130,((((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                               != vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                              & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                             | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))));
    bufp->fullIData(oldp+131,(((2U & (IData)(vlSelf->cpu__DOT__result_src))
                                ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                    ? vlSelf->cpu__DOT__imm_ext
                                    : ((IData)(4U) 
                                       + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                                : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                    ? vlSelf->cpu__DOT__datapath__DOT__data_mem_rd
                                    : vlSelf->cpu__DOT__alu_out))),32);
    bufp->fullIData(oldp+132,(0x20U),32);
    bufp->fullIData(oldp+133,(5U),32);
    bufp->fullIData(oldp+134,(8U),32);
    bufp->fullIData(oldp+135,(0x1eU),32);
    bufp->fullIData(oldp+136,(0x10000U),32);
    bufp->fullIData(oldp+137,(0x1ffffU),32);
    bufp->fullIData(oldp+138,(0xbfc00000U),32);
    bufp->fullIData(oldp+139,(0xbfc00fffU),32);
}
