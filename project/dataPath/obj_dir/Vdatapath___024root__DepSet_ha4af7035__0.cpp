// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath.h for the primary calling header

#include "verilated.h"

#include "Vdatapath___024root.h"

VL_INLINE_OPT void Vdatapath___024root___sequent__TOP__0(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__datapath__DOT__datapath_register_file__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__datapath__DOT__datapath_register_file__DOT__rf__v1;
    IData/*31:0*/ __Vdlyvval__datapath__DOT__datapath_register_file__DOT__rf__v1;
    CData/*0:0*/ __Vdlyvset__datapath__DOT__datapath_register_file__DOT__rf__v1;
    IData/*16:0*/ __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    CData/*0:0*/ __Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    IData/*16:0*/ __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v4;
    CData/*7:0*/ __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v4;
    // Body
    __Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 0U;
    __Vdlyvset__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0U;
    if (vlSelf->data_mem_we_i) {
        if (vlSelf->data_mem_byte_op_i) {
            __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 
                = (0xffU & vlSelf->datapath__DOT__reg_rd2);
            __Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 1U;
            __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 
                = (0x1ffffU & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr);
        } else if ((1U & (~ (IData)(vlSelf->data_mem_byte_op_i)))) {
            __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->datapath__DOT__reg_rd2);
            __Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 
                = (0x1ffffU & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr);
            __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->datapath__DOT__reg_rd2 
                            >> 8U));
            __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(1U) + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr));
            __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 
                = (0xffU & (vlSelf->datapath__DOT__reg_rd2 
                            >> 0x10U));
            __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(2U) + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr));
            __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v4 
                = (vlSelf->datapath__DOT__reg_rd2 >> 0x18U);
            __Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v4 
                = (0x1ffffU & ((IData)(3U) + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr));
        }
    }
    __Vdlyvval__datapath__DOT__datapath_register_file__DOT__rf__v0 
        = vlSelf->trigger_i;
    if (((IData)(vlSelf->reg_we_i) & (0U != (IData)(vlSelf->reg_addr3_i)))) {
        __Vdlyvval__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = ((2U & (IData)(vlSelf->result_src_i))
                ? ((1U & (IData)(vlSelf->result_src_i))
                    ? vlSelf->imm_ext_i : vlSelf->pc_next_i)
                : ((1U & (IData)(vlSelf->result_src_i))
                    ? ((IData)(vlSelf->data_mem_byte_op_i)
                        ? ((IData)(vlSelf->data_mem_byte_op_i)
                            ? vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                           [(0x1ffffU & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]
                            : 0U) : ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                      << 0x18U) | (
                                                   (vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                       << 8U) 
                                                      | vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]))))
                    : vlSelf->alu_out_o));
        __Vdlyvset__datapath__DOT__datapath_register_file__DOT__rf__v1 = 1U;
        __Vdlyvdim0__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = vlSelf->reg_addr3_i;
    }
    if (__Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v0) {
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v0] 
            = __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__datapath__DOT__datapath_data_memory__DOT__data_ram__v1) {
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v1] 
            = __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v2] 
            = __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v3] 
            = __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
        vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__datapath__DOT__datapath_data_memory__DOT__data_ram__v4] 
            = __Vdlyvval__datapath__DOT__datapath_data_memory__DOT__data_ram__v4;
    }
    vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0x13U] 
        = __Vdlyvval__datapath__DOT__datapath_register_file__DOT__rf__v0;
    if (__Vdlyvset__datapath__DOT__datapath_register_file__DOT__rf__v1) {
        vlSelf->datapath__DOT__datapath_register_file__DOT__rf[__Vdlyvdim0__datapath__DOT__datapath_register_file__DOT__rf__v1] 
            = __Vdlyvval__datapath__DOT__datapath_register_file__DOT__rf__v1;
    }
    vlSelf->a0_o = vlSelf->datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void Vdatapath___024root___combo__TOP__0(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___combo__TOP__0\n"); );
    // Body
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

void Vdatapath___024root___eval(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vdatapath___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vdatapath___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vdatapath___024root___eval_debug_assertions(Vdatapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->reg_addr1_i & 0xe0U))) {
        Verilated::overWidthError("reg_addr1_i");}
    if (VL_UNLIKELY((vlSelf->reg_addr2_i & 0xe0U))) {
        Verilated::overWidthError("reg_addr2_i");}
    if (VL_UNLIKELY((vlSelf->reg_addr3_i & 0xe0U))) {
        Verilated::overWidthError("reg_addr3_i");}
    if (VL_UNLIKELY((vlSelf->reg_we_i & 0xfeU))) {
        Verilated::overWidthError("reg_we_i");}
    if (VL_UNLIKELY((vlSelf->trigger_i & 0xfeU))) {
        Verilated::overWidthError("trigger_i");}
    if (VL_UNLIKELY((vlSelf->result_src_i & 0xfcU))) {
        Verilated::overWidthError("result_src_i");}
    if (VL_UNLIKELY((vlSelf->data_mem_we_i & 0xfeU))) {
        Verilated::overWidthError("data_mem_we_i");}
    if (VL_UNLIKELY((vlSelf->data_mem_byte_op_i & 0xfeU))) {
        Verilated::overWidthError("data_mem_byte_op_i");}
    if (VL_UNLIKELY((vlSelf->alu_control_i & 0xf0U))) {
        Verilated::overWidthError("alu_control_i");}
    if (VL_UNLIKELY((vlSelf->alu_src_i & 0xfeU))) {
        Verilated::overWidthError("alu_src_i");}
}
#endif  // VL_DEBUG
