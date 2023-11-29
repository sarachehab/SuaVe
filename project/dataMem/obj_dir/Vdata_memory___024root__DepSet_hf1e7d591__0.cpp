// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory__Syms.h"
#include "Vdata_memory___024root.h"

VL_INLINE_OPT void Vdata_memory___024root___ico_sequent__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->rd_o = ((IData)(vlSelf->byte_op_i) ? (IData)(vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0)
                     : ((vlSelf->data_memory__DOT__data_ram
                         [(0x1ffffU & ((IData)(3U) 
                                       + (IData)(vlSelf->data_memory__DOT__addr)))] 
                         << 0x18U) | ((vlSelf->data_memory__DOT__data_ram
                                       [(0x1ffffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlSelf->data_memory__DOT__addr)))] 
                                       << 0x10U) | 
                                      ((vlSelf->data_memory__DOT__data_ram
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelf->data_memory__DOT__addr)))] 
                                        << 8U) | (IData)(vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0)))));
}

void Vdata_memory___024root___eval_ico(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vdata_memory___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdata_memory___024root___eval_act(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdata_memory___024root___nba_sequent__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v0;
    __Vdlyvdim0__data_memory__DOT__data_ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v0;
    __Vdlyvval__data_memory__DOT__data_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__data_ram__v0;
    __Vdlyvset__data_memory__DOT__data_ram__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v1;
    __Vdlyvdim0__data_memory__DOT__data_ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v1;
    __Vdlyvval__data_memory__DOT__data_ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__data_ram__v1;
    __Vdlyvset__data_memory__DOT__data_ram__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v2;
    __Vdlyvdim0__data_memory__DOT__data_ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v2;
    __Vdlyvval__data_memory__DOT__data_ram__v2 = 0;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v3;
    __Vdlyvdim0__data_memory__DOT__data_ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v3;
    __Vdlyvval__data_memory__DOT__data_ram__v3 = 0;
    // Body
    __Vdlyvset__data_memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__data_memory__DOT__data_ram__v1 = 0U;
    if (vlSelf->we_i) {
        __Vdlyvval__data_memory__DOT__data_ram__v0 
            = (0xffU & vlSelf->wd_i);
        __Vdlyvset__data_memory__DOT__data_ram__v0 = 1U;
        __Vdlyvdim0__data_memory__DOT__data_ram__v0 
            = vlSelf->data_memory__DOT__addr;
        if (vlSelf->byte_op_i) {
            __Vdlyvval__data_memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->wd_i);
            __Vdlyvset__data_memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__data_memory__DOT__data_ram__v1 
                = (0x1ffffU & ((IData)(1U) + (IData)(vlSelf->data_memory__DOT__addr)));
            __Vdlyvval__data_memory__DOT__data_ram__v2 
                = (0xffU & vlSelf->wd_i);
            __Vdlyvdim0__data_memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(2U) + (IData)(vlSelf->data_memory__DOT__addr)));
            __Vdlyvval__data_memory__DOT__data_ram__v3 
                = (0xffU & vlSelf->wd_i);
            __Vdlyvdim0__data_memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(3U) + (IData)(vlSelf->data_memory__DOT__addr)));
        }
    }
    if (__Vdlyvset__data_memory__DOT__data_ram__v0) {
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v0] 
            = __Vdlyvval__data_memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__data_memory__DOT__data_ram__v1) {
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v1] 
            = __Vdlyvval__data_memory__DOT__data_ram__v1;
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v2] 
            = __Vdlyvval__data_memory__DOT__data_ram__v2;
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v3] 
            = __Vdlyvval__data_memory__DOT__data_ram__v3;
    }
    vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0 
        = vlSelf->data_memory__DOT__data_ram[vlSelf->data_memory__DOT__addr];
    vlSelf->rd_o = ((IData)(vlSelf->byte_op_i) ? (IData)(vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0)
                     : ((vlSelf->data_memory__DOT__data_ram
                         [(0x1ffffU & ((IData)(3U) 
                                       + (IData)(vlSelf->data_memory__DOT__addr)))] 
                         << 0x18U) | ((vlSelf->data_memory__DOT__data_ram
                                       [(0x1ffffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlSelf->data_memory__DOT__addr)))] 
                                       << 0x10U) | 
                                      ((vlSelf->data_memory__DOT__data_ram
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelf->data_memory__DOT__addr)))] 
                                        << 8U) | (IData)(vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0)))));
}

void Vdata_memory___024root___eval_nba(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdata_memory___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdata_memory___024root___eval_triggers__ico(Vdata_memory___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__ico(Vdata_memory___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_memory___024root___eval_triggers__act(Vdata_memory___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__act(Vdata_memory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__nba(Vdata_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_memory___024root___eval(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vdata_memory___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vdata_memory___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("data_memory.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vdata_memory___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vdata_memory___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdata_memory___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("data_memory.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vdata_memory___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdata_memory___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("data_memory.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdata_memory___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vdata_memory___024root___eval_debug_assertions(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->we_i & 0xfeU))) {
        Verilated::overWidthError("we_i");}
    if (VL_UNLIKELY((vlSelf->byte_op_i & 0xfeU))) {
        Verilated::overWidthError("byte_op_i");}
}
#endif  // VL_DEBUG
