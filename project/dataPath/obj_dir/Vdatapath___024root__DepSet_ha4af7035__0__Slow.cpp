// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath.h for the primary calling header

#include "verilated.h"

#include "Vdatapath___024root.h"

VL_ATTR_COLD void Vdatapath___024root___initial__TOP__0(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h22c8b573__0;
    // Body
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[1U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[2U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[3U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[4U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[5U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[6U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[7U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[8U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[9U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0xaU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0xbU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0xcU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0xdU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0xeU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0xfU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x10U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x11U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x12U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x13U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x14U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x15U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x16U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x17U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x18U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x19U] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x1aU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x1bU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x1cU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x1dU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x1eU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x1fU] = 0U;
    vlSelf->datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vtemp_h22c8b573__0[0U] = 0x2e6d656dU;
    __Vtemp_h22c8b573__0[1U] = 0x6d6f7279U;
    __Vtemp_h22c8b573__0[2U] = 0x615f6d65U;
    __Vtemp_h22c8b573__0[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h22c8b573__0)
                 ,  &(vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram)
                 , 0x10000U, ~0ULL);
    vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10000U > vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[(0x1ffffU 
                                                                    & vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vdatapath___024root___settle__TOP__0(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0_o = vlSelf->datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
    vlSelf->datapath__DOT__reg_rd1 = vlSelf->datapath__DOT__datapath_register_file__DOT__rf
        [vlSelf->reg_addr1_i];
    vlSelf->datapath__DOT__reg_rd2 = vlSelf->datapath__DOT__datapath_register_file__DOT__rf
        [vlSelf->reg_addr2_i];
    vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i 
        = ((IData)(vlSelf->alu_src_i) ? vlSelf->imm_ext_i
            : vlSelf->datapath__DOT__reg_rd2);
    vlSelf->eq_o = (vlSelf->datapath__DOT__reg_rd1 
                    == vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i);
    vlSelf->alu_out_o = ((8U & (IData)(vlSelf->alu_control_i))
                          ? ((4U & (IData)(vlSelf->alu_control_i))
                              ? ((2U & (IData)(vlSelf->alu_control_i))
                                  ? 0U : ((1U & (IData)(vlSelf->alu_control_i))
                                           ? (vlSelf->datapath__DOT__reg_rd1 
                                              >> (0x1fU 
                                                  & vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                           : 0U)) : 
                             ((2U & (IData)(vlSelf->alu_control_i))
                               ? 0U : ((1U & (IData)(vlSelf->alu_control_i))
                                        ? 0U : (vlSelf->datapath__DOT__reg_rd1 
                                                - vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i))))
                          : ((4U & (IData)(vlSelf->alu_control_i))
                              ? ((2U & (IData)(vlSelf->alu_control_i))
                                  ? ((1U & (IData)(vlSelf->alu_control_i))
                                      ? (vlSelf->datapath__DOT__reg_rd1 
                                         & vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i)
                                      : (vlSelf->datapath__DOT__reg_rd1 
                                         | vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                  : ((1U & (IData)(vlSelf->alu_control_i))
                                      ? (vlSelf->datapath__DOT__reg_rd1 
                                         >> (0x1fU 
                                             & vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                      : (vlSelf->datapath__DOT__reg_rd1 
                                         ^ vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i)))
                              : ((2U & (IData)(vlSelf->alu_control_i))
                                  ? ((1U & (IData)(vlSelf->alu_control_i))
                                      ? ((QData)((IData)(vlSelf->datapath__DOT__reg_rd1)) 
                                         < (QData)((IData)(vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i)))
                                      : (vlSelf->datapath__DOT__reg_rd1 
                                         < vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                  : ((1U & (IData)(vlSelf->alu_control_i))
                                      ? (vlSelf->datapath__DOT__reg_rd1 
                                         << (0x1fU 
                                             & vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                      : (vlSelf->datapath__DOT__reg_rd1 
                                         + vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i)))));
    vlSelf->datapath__DOT__datapath_data_memory__DOT__addr 
        = ((IData)(vlSelf->data_mem_byte_op_i) ? vlSelf->alu_out_o
            : (0xfffffffcU & vlSelf->alu_out_o));
}

VL_ATTR_COLD void Vdatapath___024root___eval_initial(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___eval_initial\n"); );
    // Body
    Vdatapath___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vdatapath___024root___eval_settle(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___eval_settle\n"); );
    // Body
    Vdatapath___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdatapath___024root___final(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___final\n"); );
}

VL_ATTR_COLD void Vdatapath___024root___ctor_var_reset(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->reg_addr1_i = VL_RAND_RESET_I(5);
    vlSelf->reg_addr2_i = VL_RAND_RESET_I(5);
    vlSelf->reg_addr3_i = VL_RAND_RESET_I(5);
    vlSelf->reg_we_i = VL_RAND_RESET_I(1);
    vlSelf->trigger_i = VL_RAND_RESET_I(1);
    vlSelf->result_src_i = VL_RAND_RESET_I(2);
    vlSelf->imm_ext_i = VL_RAND_RESET_I(32);
    vlSelf->pc_next_i = VL_RAND_RESET_I(32);
    vlSelf->data_mem_we_i = VL_RAND_RESET_I(1);
    vlSelf->data_mem_byte_op_i = VL_RAND_RESET_I(1);
    vlSelf->alu_control_i = VL_RAND_RESET_I(4);
    vlSelf->alu_src_i = VL_RAND_RESET_I(1);
    vlSelf->eq_o = VL_RAND_RESET_I(1);
    vlSelf->a0_o = VL_RAND_RESET_I(32);
    vlSelf->alu_out_o = VL_RAND_RESET_I(32);
    vlSelf->datapath__DOT__reg_rd1 = VL_RAND_RESET_I(32);
    vlSelf->datapath__DOT__reg_rd2 = VL_RAND_RESET_I(32);
    vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->datapath__DOT__datapath_register_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->datapath__DOT__datapath_data_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
