// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogramcounter.h for the primary calling header

#include "verilated.h"

#include "Vprogramcounter__Syms.h"
#include "Vprogramcounter___024root.h"

void Vprogramcounter___024root___eval_act(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vprogramcounter___024root___nba_sequent__TOP__0(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->programcounter__DOT__c = ((IData)(vlSelf->PCsrc)
                                       ? (vlSelf->programcounter__DOT__c 
                                          + vlSelf->ImmOp)
                                       : ((IData)(4U) 
                                          + vlSelf->programcounter__DOT__c));
    vlSelf->PC = vlSelf->programcounter__DOT__c;
}

void Vprogramcounter___024root___eval_nba(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vprogramcounter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vprogramcounter___024root___eval_triggers__act(Vprogramcounter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__act(Vprogramcounter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__nba(Vprogramcounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vprogramcounter___024root___eval(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval\n"); );
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
            Vprogramcounter___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vprogramcounter___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("programcounter.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vprogramcounter___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vprogramcounter___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("programcounter.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vprogramcounter___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vprogramcounter___024root___eval_debug_assertions(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
