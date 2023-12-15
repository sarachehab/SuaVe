// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_data[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[0]),30);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[1]),30);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[2]),30);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[3]),30);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[4]),30);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[5]),30);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[6]),30);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[7]),30);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[8]),30);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[9]),30);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[10]),30);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[11]),30);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[12]),30);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[13]),30);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[14]),30);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__cache_tag[15]),30);
        bufp->chgBit(oldp+35,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[0]));
        bufp->chgBit(oldp+36,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[1]));
        bufp->chgBit(oldp+37,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[2]));
        bufp->chgBit(oldp+38,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[3]));
        bufp->chgBit(oldp+39,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[4]));
        bufp->chgBit(oldp+40,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[5]));
        bufp->chgBit(oldp+41,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[6]));
        bufp->chgBit(oldp+42,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[7]));
        bufp->chgBit(oldp+43,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[8]));
        bufp->chgBit(oldp+44,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[9]));
        bufp->chgBit(oldp+45,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[10]));
        bufp->chgBit(oldp+46,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[11]));
        bufp->chgBit(oldp+47,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[12]));
        bufp->chgBit(oldp+48,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[13]));
        bufp->chgBit(oldp+49,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[14]));
        bufp->chgBit(oldp+50,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__valid[15]));
        bufp->chgCData(oldp+51,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__counter),4);
        bufp->chgBit(oldp+52,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__hit));
        bufp->chgCData(oldp+53,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__wayhit),4);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__line__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+68,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+71,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+72,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+73,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+74,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+75,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+79,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+80,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+81,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+82,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+83,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+84,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+85,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+86,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+87,(vlSelf->cpu__DOT__JALR_instr));
        bufp->chgBit(oldp+88,(vlSelf->cpu__DOT__mem_write));
        bufp->chgBit(oldp+89,(vlSelf->cpu__DOT__alu_src));
        bufp->chgBit(oldp+90,(vlSelf->cpu__DOT__reg_write));
        bufp->chgBit(oldp+91,(vlSelf->cpu__DOT__byte_address));
        bufp->chgBit(oldp+92,(vlSelf->cpu__DOT__cache_enable));
        bufp->chgIData(oldp+93,(vlSelf->cpu__DOT__instr),32);
        bufp->chgIData(oldp+94,(vlSelf->cpu__DOT__program_counter__DOT__pc_next),32);
        bufp->chgIData(oldp+95,(((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
        bufp->chgIData(oldp+96,(vlSelf->cpu__DOT__imm_ext),32);
        bufp->chgCData(oldp+97,(vlSelf->cpu__DOT__result_src),2);
        bufp->chgCData(oldp+98,(vlSelf->cpu__DOT__imm_src),3);
        bufp->chgCData(oldp+99,(vlSelf->cpu__DOT__alu_control),4);
        bufp->chgCData(oldp+100,((0x7fU & vlSelf->cpu__DOT__instr)),7);
        bufp->chgCData(oldp+101,((7U & (vlSelf->cpu__DOT__instr 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+102,((1U & (vlSelf->cpu__DOT__instr 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+103,(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op),2);
        bufp->chgBit(oldp+104,(vlSelf->cpu__DOT__controlUnit_top__DOT__branch));
        bufp->chgBit(oldp+105,(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp));
        bufp->chgBit(oldp+106,((1U & (vlSelf->cpu__DOT__instr 
                                      >> 5U))));
        bufp->chgBit(oldp+107,((IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelf->cpu__DOT__instr)))));
        bufp->chgCData(oldp+108,((0x1fU & (vlSelf->cpu__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+109,((0x1fU & (vlSelf->cpu__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelf->cpu__DOT__instr 
                                           >> 7U))),5);
        bufp->chgBit(oldp+111,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__mem_byte_op));
        bufp->chgIData(oldp+112,((vlSelf->cpu__DOT__instr 
                                  >> 7U)),25);
        bufp->chgIData(oldp+113,((0xfffffffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+114,((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                == vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)));
        bufp->chgIData(oldp+115,(vlSelf->cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+116,(vlSelf->cpu__DOT__datapath__DOT__reg_rd1),32);
        bufp->chgIData(oldp+117,(vlSelf->cpu__DOT__datapath__DOT__reg_rd2),32);
        bufp->chgIData(oldp+118,(vlSelf->cpu__DOT__datapath__DOT__data_mem_rd),32);
        bufp->chgIData(oldp+119,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__mem_incoming_data),32);
        bufp->chgIData(oldp+120,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__mem_write_data),32);
        bufp->chgIData(oldp+121,((vlSelf->cpu__DOT__alu_out 
                                  >> 2U)),30);
        bufp->chgCData(oldp+122,((3U & vlSelf->cpu__DOT__alu_out)),2);
        bufp->chgIData(oldp+123,(vlSelf->cpu__DOT__datapath__DOT__cached_memory__DOT__memory__DOT__addr),32);
        bufp->chgIData(oldp+124,(vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i),32);
    }
    bufp->chgBit(oldp+125,(vlSelf->clk_i));
    bufp->chgBit(oldp+126,(vlSelf->rst_i));
    bufp->chgBit(oldp+127,(vlSelf->trigger_i));
    bufp->chgIData(oldp+128,(vlSelf->a0_o),32);
    bufp->chgBit(oldp+129,((((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                              != vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                             & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                            | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))));
    bufp->chgIData(oldp+130,(((2U & (IData)(vlSelf->cpu__DOT__result_src))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                   ? vlSelf->cpu__DOT__imm_ext
                                   : ((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                               : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                   ? vlSelf->cpu__DOT__datapath__DOT__data_mem_rd
                                   : vlSelf->cpu__DOT__alu_out))),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
