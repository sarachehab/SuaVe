// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->eq_o = (vlSelf->src1_i == vlSelf->src2_i);
    vlSelf->alu_result_o = ((4U & (IData)(vlSelf->alu_control_i))
                             ? ((2U & (IData)(vlSelf->alu_control_i))
                                 ? 0U : ((1U & (IData)(vlSelf->alu_control_i))
                                          ? (vlSelf->src1_i 
                                             < vlSelf->src2_i)
                                          : 0U)) : 
                            ((2U & (IData)(vlSelf->alu_control_i))
                              ? ((1U & (IData)(vlSelf->alu_control_i))
                                  ? (vlSelf->src1_i 
                                     | vlSelf->src2_i)
                                  : (vlSelf->src1_i 
                                     & vlSelf->src2_i))
                              : ((1U & (IData)(vlSelf->alu_control_i))
                                  ? (vlSelf->src1_i 
                                     - vlSelf->src2_i)
                                  : (vlSelf->src1_i 
                                     + vlSelf->src2_i))));
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_control_i & 0xf8U))) {
        Verilated::overWidthError("alu_control_i");}
}
#endif  // VL_DEBUG
