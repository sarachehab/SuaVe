// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "verilated.h"

#include "Vinstruction_memory___024root.h"

VL_INLINE_OPT void Vinstruction_memory___024root___combo__TOP__0(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->instr_o = ((vlSelf->instruction_memory__DOT__rom
                        [(0xfffU & ((IData)(3U) + (0xffcU 
                                                   & vlSelf->addr_i)))] 
                        << 0x18U) | ((vlSelf->instruction_memory__DOT__rom
                                      [(0xfffU & ((IData)(2U) 
                                                  + 
                                                  (0xffcU 
                                                   & vlSelf->addr_i)))] 
                                      << 0x10U) | (
                                                   (vlSelf->instruction_memory__DOT__rom
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0xffcU 
                                                         & vlSelf->addr_i)))] 
                                                    << 8U) 
                                                   | vlSelf->instruction_memory__DOT__rom
                                                   [
                                                   (0xffcU 
                                                    & vlSelf->addr_i)])));
}

void Vinstruction_memory___024root___eval(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval\n"); );
    // Body
    Vinstruction_memory___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vinstruction_memory___024root___eval_debug_assertions(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
