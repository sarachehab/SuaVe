// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "verilated.h"

#include "Vpc__Syms.h"
#include "Vpc___024root.h"

VL_ATTR_COLD void Vpc___024root___eval_static(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpc___024root___eval_initial__TOP(Vpc___024root* vlSelf);

VL_ATTR_COLD void Vpc___024root___eval_initial(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial\n"); );
    // Body
    Vpc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vpc___024root___eval_initial__TOP(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->pc__DOT__pc_next = 0xbfc00000U;
}

VL_ATTR_COLD void Vpc___024root___eval_final(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vpc___024root___eval_triggers__stl(Vpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__stl(Vpc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vpc___024root___eval_stl(Vpc___024root* vlSelf);

VL_ATTR_COLD void Vpc___024root___eval_settle(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vpc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vpc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("pc.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vpc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__stl(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpc___024root___stl_sequent__TOP__0(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc_o = vlSelf->pc__DOT__pc_next;
}

VL_ATTR_COLD void Vpc___024root___eval_stl(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpc___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__act(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpc___024root___dump_triggers__nba(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpc___024root___ctor_var_reset(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->jump_taken_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->jalr_instr_i = VL_RAND_RESET_I(1);
    vlSelf->imm_ext_i = VL_RAND_RESET_I(32);
    vlSelf->jta_jalr_i = VL_RAND_RESET_I(32);
    vlSelf->pc_o = VL_RAND_RESET_I(32);
    vlSelf->pc__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
}
