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
    tracep->declBit(c+66,"clk_i", false,-1);
    tracep->declBit(c+67,"rst_i", false,-1);
    tracep->declBit(c+68,"trigger_i", false,-1);
    tracep->declBus(c+69,"a0_o", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk_i", false,-1);
    tracep->declBit(c+67,"rst_i", false,-1);
    tracep->declBit(c+68,"trigger_i", false,-1);
    tracep->declBus(c+69,"a0_o", false,-1, 31,0);
    tracep->declBit(c+70,"JB_instr", false,-1);
    tracep->declBit(c+35,"JALR_instr", false,-1);
    tracep->declBit(c+36,"mem_write", false,-1);
    tracep->declBit(c+37,"alu_src", false,-1);
    tracep->declBit(c+38,"reg_write", false,-1);
    tracep->declBit(c+39,"byte_address", false,-1);
    tracep->declBit(c+60,"zero", false,-1);
    tracep->declBus(c+40,"instr", false,-1, 31,0);
    tracep->declBus(c+41,"pc_var", false,-1, 31,0);
    tracep->declBus(c+42,"pc_plus_4", false,-1, 31,0);
    tracep->declBus(c+43,"imm_ext", false,-1, 31,0);
    tracep->declBus(c+61,"alu_out", false,-1, 31,0);
    tracep->declBus(c+44,"result_src", false,-1, 1,0);
    tracep->declBus(c+45,"imm_src", false,-1, 2,0);
    tracep->declBus(c+46,"alu_control", false,-1, 3,0);
    tracep->pushNamePrefix("controlUnit_top ");
    tracep->declBit(c+60,"zero_i", false,-1);
    tracep->declBus(c+47,"op_i", false,-1, 6,0);
    tracep->declBus(c+48,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+49,"funct7_5_i", false,-1);
    tracep->declBit(c+70,"JB_instr_o", false,-1);
    tracep->declBit(c+35,"JALR_instr_o", false,-1);
    tracep->declBus(c+44,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+36,"mem_write_o", false,-1);
    tracep->declBit(c+37,"alu_src_o", false,-1);
    tracep->declBus(c+45,"imm_src_o", false,-1, 2,0);
    tracep->declBit(c+38,"reg_write_o", false,-1);
    tracep->declBus(c+46,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+39,"byte_address_o", false,-1);
    tracep->declBus(c+50,"alu_op", false,-1, 1,0);
    tracep->declBit(c+51,"branch", false,-1);
    tracep->declBit(c+52,"jmp", false,-1);
    tracep->pushNamePrefix("aluDecoder ");
    tracep->declBus(c+50,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+48,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+49,"funct7_b5_i", false,-1);
    tracep->declBit(c+53,"op_5_i", false,-1);
    tracep->declBus(c+46,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+39,"byte_address_o", false,-1);
    tracep->declBit(c+54,"rTypeSub", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mainDecoder ");
    tracep->declBus(c+47,"op_i", false,-1, 6,0);
    tracep->declBit(c+51,"branch_o", false,-1);
    tracep->declBit(c+52,"jump_o", false,-1);
    tracep->declBit(c+35,"JALR_o", false,-1);
    tracep->declBus(c+44,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+36,"mem_write_o", false,-1);
    tracep->declBit(c+37,"alu_src_o", false,-1);
    tracep->declBus(c+45,"imm_src_o", false,-1, 2,0);
    tracep->declBit(c+38,"reg_write_o", false,-1);
    tracep->declBus(c+50,"alu_op_o", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath ");
    tracep->declBus(c+74,"REG_ADDR_LENGTH", false,-1, 31,0);
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk_i", false,-1);
    tracep->declBus(c+55,"reg_addr1_i", false,-1, 4,0);
    tracep->declBus(c+56,"reg_addr2_i", false,-1, 4,0);
    tracep->declBus(c+57,"reg_addr3_i", false,-1, 4,0);
    tracep->declBit(c+38,"reg_we_i", false,-1);
    tracep->declBit(c+68,"trigger_i", false,-1);
    tracep->declBus(c+44,"result_src_i", false,-1, 1,0);
    tracep->declBus(c+43,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+42,"pc_next_i", false,-1, 31,0);
    tracep->declBit(c+36,"data_mem_we_i", false,-1);
    tracep->declBit(c+39,"data_mem_byte_op_i", false,-1);
    tracep->declBus(c+46,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+37,"alu_src_i", false,-1);
    tracep->declBit(c+60,"eq_o", false,-1);
    tracep->declBus(c+69,"a0_o", false,-1, 31,0);
    tracep->declBus(c+61,"alu_out_o", false,-1, 31,0);
    tracep->declBus(c+62,"reg_rd1", false,-1, 31,0);
    tracep->declBus(c+63,"reg_rd2", false,-1, 31,0);
    tracep->declBus(c+71,"data_mem_rd", false,-1, 31,0);
    tracep->declBus(c+72,"reg_wd", false,-1, 31,0);
    tracep->pushNamePrefix("datapath_alu ");
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"src1_i", false,-1, 31,0);
    tracep->declBus(c+64,"src2_i", false,-1, 31,0);
    tracep->declBus(c+46,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+60,"eq_o", false,-1);
    tracep->declBus(c+61,"alu_result_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath_data_memory ");
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+76,"START_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+77,"END_ADDRESS", false,-1, 31,0);
    tracep->declBit(c+66,"clk_i", false,-1);
    tracep->declBit(c+36,"we_i", false,-1);
    tracep->declBit(c+39,"byte_op_i", false,-1);
    tracep->declBus(c+61,"addr_i", false,-1, 31,0);
    tracep->declBus(c+63,"wd_i", false,-1, 31,0);
    tracep->declBus(c+71,"rd_o", false,-1, 31,0);
    tracep->declBus(c+65,"addr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath_register_file ");
    tracep->declBus(c+74,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+38,"addr3_we_i", false,-1);
    tracep->declBit(c+66,"clk_i", false,-1);
    tracep->declBit(c+68,"trigger_i", false,-1);
    tracep->declBus(c+55,"addr1_i", false,-1, 4,0);
    tracep->declBus(c+56,"addr2_i", false,-1, 4,0);
    tracep->declBus(c+57,"addr3_i", false,-1, 4,0);
    tracep->declBus(c+72,"addr3_wd_i", false,-1, 31,0);
    tracep->declBus(c+62,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+63,"rd2_o", false,-1, 31,0);
    tracep->declBus(c+69,"a0_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("extend_unit ");
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"instr_i", false,-1, 31,7);
    tracep->declBus(c+45,"imm_src_i", false,-1, 2,0);
    tracep->declBus(c+43,"imm_ext_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction_memory ");
    tracep->declBus(c+75,"BYTE_SIZE", false,-1, 31,0);
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"FIRST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+79,"LAST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+41,"addr_i", false,-1, 31,0);
    tracep->declBus(c+40,"instr_o", false,-1, 31,0);
    tracep->declBus(c+59,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("program_counter ");
    tracep->declBus(c+73,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk_i", false,-1);
    tracep->declBit(c+70,"jump_taken_i", false,-1);
    tracep->declBit(c+67,"rst_i", false,-1);
    tracep->declBit(c+35,"jalr_instr_i", false,-1);
    tracep->declBus(c+43,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+61,"jta_jalr_i", false,-1, 31,0);
    tracep->declBus(c+41,"pc_o", false,-1, 31,0);
    tracep->declBus(c+42,"pc_plus4_o", false,-1, 31,0);
    tracep->declBus(c+41,"pc_next", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+35,(vlSelf->cpu__DOT__JALR_instr));
    bufp->fullBit(oldp+36,(vlSelf->cpu__DOT__mem_write));
    bufp->fullBit(oldp+37,(vlSelf->cpu__DOT__alu_src));
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__reg_write));
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__byte_address));
    bufp->fullIData(oldp+40,((((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
                               << 0x18U) | vlSelf->__VdfgTmp_h2e56604c__0)),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__program_counter__DOT__pc_next),32);
    bufp->fullIData(oldp+42,(((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__imm_ext),32);
    bufp->fullCData(oldp+44,(vlSelf->cpu__DOT__result_src),2);
    bufp->fullCData(oldp+45,(vlSelf->cpu__DOT__imm_src),3);
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__alu_control),4);
    bufp->fullCData(oldp+47,((0x7fU & (IData)(vlSelf->__VdfgTmp_h0f734668__0))),7);
    bufp->fullCData(oldp+48,((7U & ((IData)(vlSelf->__VdfgTmp_h0cdf22a8__0) 
                                    >> 4U))),3);
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
                                  >> 6U))));
    bufp->fullCData(oldp+50,(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op),2);
    bufp->fullBit(oldp+51,(vlSelf->cpu__DOT__controlUnit_top__DOT__branch));
    bufp->fullBit(oldp+52,(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->__VdfgTmp_h0f734668__0) 
                                  >> 5U))));
    bufp->fullBit(oldp+54,((1U & (((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
                                   >> 6U) & ((IData)(vlSelf->__VdfgTmp_h0f734668__0) 
                                             >> 5U)))));
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->__VdfgTmp_h2e56604c__0 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+56,(((0x10U & ((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
                                        << 4U)) | (0xfU 
                                                   & (vlSelf->__VdfgTmp_h2e56604c__0 
                                                      >> 0x14U)))),5);
    bufp->fullCData(oldp+57,((0x1fU & ((IData)(vlSelf->__VdfgTmp_hee5fc8f3__0) 
                                       >> 7U))),5);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i),25);
    bufp->fullIData(oldp+59,((0xfffffffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
    bufp->fullBit(oldp+60,((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                            == vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)));
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__datapath__DOT__reg_rd1),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__datapath__DOT__reg_rd2),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr),32);
    bufp->fullBit(oldp+66,(vlSelf->clk_i));
    bufp->fullBit(oldp+67,(vlSelf->rst_i));
    bufp->fullBit(oldp+68,(vlSelf->trigger_i));
    bufp->fullIData(oldp+69,(vlSelf->a0_o),32);
    bufp->fullBit(oldp+70,((((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                              != vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                             & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                            | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))));
    bufp->fullIData(oldp+71,(((IData)(vlSelf->cpu__DOT__byte_address)
                               ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                   ? vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                  [(0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]
                                   : 0U) : ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                             [(0x1ffffU 
                                               & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)] 
                                             << 0x18U) 
                                            | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                << 0x10U) 
                                               | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                   << 8U) 
                                                  | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))]))))),32);
    bufp->fullIData(oldp+72,(((2U & (IData)(vlSelf->cpu__DOT__result_src))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                   ? vlSelf->cpu__DOT__imm_ext
                                   : ((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                               : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                   ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                       ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                           ? vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                          [(0x1ffffU 
                                            & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]
                                           : 0U) : 
                                      ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                        [(0x1ffffU 
                                          & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)] 
                                        << 0x18U) | 
                                       ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                         << 0x10U) 
                                        | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                            [(0x1ffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                            << 8U) 
                                           | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                           [(0x1ffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))]))))
                                   : vlSelf->cpu__DOT__alu_out))),32);
    bufp->fullIData(oldp+73,(0x20U),32);
    bufp->fullIData(oldp+74,(5U),32);
    bufp->fullIData(oldp+75,(8U),32);
    bufp->fullIData(oldp+76,(0x10000U),32);
    bufp->fullIData(oldp+77,(0x1ffffU),32);
    bufp->fullIData(oldp+78,(0xbfc00000U),32);
    bufp->fullIData(oldp+79,(0xbfc00fffU),32);
}
