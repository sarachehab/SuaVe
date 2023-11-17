// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogramcounter.h for the primary calling header

#include "verilated.h"

#include "Vprogramcounter__Syms.h"
#include "Vprogramcounter___024root.h"

VL_ATTR_COLD void Vprogramcounter___024root___eval_static(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vprogramcounter___024root___eval_initial__TOP(Vprogramcounter___024root* vlSelf);

VL_ATTR_COLD void Vprogramcounter___024root___eval_initial(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_initial\n"); );
    // Body
    Vprogramcounter___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vprogramcounter___024root___eval_initial__TOP(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->programcounter__DOT__c = 0U;
}

VL_ATTR_COLD void Vprogramcounter___024root___eval_final(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vprogramcounter___024root___eval_triggers__stl(Vprogramcounter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__stl(Vprogramcounter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___eval_stl(Vprogramcounter___024root* vlSelf);

VL_ATTR_COLD void Vprogramcounter___024root___eval_settle(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vprogramcounter___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vprogramcounter___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("programcounter.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vprogramcounter___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__stl(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprogramcounter___024root___stl_sequent__TOP__0(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->PC = vlSelf->programcounter__DOT__c;
}

VL_ATTR_COLD void Vprogramcounter___024root___eval_stl(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vprogramcounter___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__act(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__nba(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprogramcounter___024root___ctor_var_reset(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->programcounter__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
