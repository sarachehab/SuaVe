// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "verilated.h"

#include "Vpc__Syms.h"
#include "Vpc___024root.h"

void Vpc___024root___eval_act(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vpc___024root___nba_sequent__TOP__0(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc__DOT__program_counter = (((IData)(vlSelf->rst) 
                                         | (0xbfc00fffU 
                                            < vlSelf->pc__DOT__program_counter))
                                         ? 0U : ((IData)(vlSelf->PCsrc)
                                                  ? 
                                                 (vlSelf->pc__DOT__program_counter 
                                                  + vlSelf->ImmOp)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->pc__DOT__program_counter)));
    vlSelf->PC = vlSelf->pc__DOT__program_counter;
}

void Vpc___024root___eval_nba(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vpc___024root___eval_triggers__act(Vpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__act(Vpc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__nba(Vpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vpc___024root___eval(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vpc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vpc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("pc.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vpc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vpc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("pc.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vpc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vpc___024root___eval_debug_assertions(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
