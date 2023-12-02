// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "verilated.h"

#include "Vinstruction_memory__Syms.h"
#include "Vinstruction_memory___024root.h"

VL_INLINE_OPT void Vinstruction_memory___024root___ico_sequent__TOP__0(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___ico_sequent__TOP__0\n"); );
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

void Vinstruction_memory___024root___eval_ico(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vinstruction_memory___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vinstruction_memory___024root___eval_act(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_act\n"); );
}

void Vinstruction_memory___024root___eval_nba(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_nba\n"); );
}

void Vinstruction_memory___024root___eval_triggers__ico(Vinstruction_memory___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__ico(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG
void Vinstruction_memory___024root___eval_triggers__act(Vinstruction_memory___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__act(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory___024root___dump_triggers__nba(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vinstruction_memory___024root___eval(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vinstruction_memory___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vinstruction_memory___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("instruction_memory.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vinstruction_memory___024root___eval_ico(vlSelf);
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
            Vinstruction_memory___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vinstruction_memory___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("instruction_memory.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vinstruction_memory___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vinstruction_memory___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("instruction_memory.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vinstruction_memory___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vinstruction_memory___024root___eval_debug_assertions(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
