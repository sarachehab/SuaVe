// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextend_unit.h for the primary calling header

#include "verilated.h"

#include "Vextend_unit__Syms.h"
#include "Vextend_unit___024root.h"

VL_INLINE_OPT void Vextend_unit___024root___ico_sequent__TOP__0(Vextend_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->imm_ext_o = ((4U & (IData)(vlSelf->imm_src_i))
                          ? ((2U & (IData)(vlSelf->imm_src_i))
                              ? 0U : ((1U & (IData)(vlSelf->imm_src_i))
                                       ? 0U : (0xfffff000U 
                                               & (vlSelf->instr_i 
                                                  << 7U))))
                          : ((2U & (IData)(vlSelf->imm_src_i))
                              ? ((1U & (IData)(vlSelf->imm_src_i))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->instr_i 
                                                     >> 0x18U)))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & (vlSelf->instr_i 
                                                       << 7U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->instr_i 
                                                          >> 2U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->instr_i 
                                                            >> 0xdU)))))
                                  : (((- (IData)((1U 
                                                  & (vlSelf->instr_i 
                                                     >> 0x18U)))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->instr_i 
                                                      << 0xbU)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->instr_i 
                                                         >> 0xdU)) 
                                                     | (0x1eU 
                                                        & vlSelf->instr_i)))))
                              : ((1U & (IData)(vlSelf->imm_src_i))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->instr_i 
                                                     >> 0x18U)))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->instr_i 
                                                      >> 0xdU)) 
                                                  | (0x1fU 
                                                     & vlSelf->instr_i)))
                                  : (((- (IData)((1U 
                                                  & (vlSelf->instr_i 
                                                     >> 0x18U)))) 
                                      << 0xcU) | (0xfffU 
                                                  & (vlSelf->instr_i 
                                                     >> 0xdU))))));
}

void Vextend_unit___024root___eval_ico(Vextend_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vextend_unit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vextend_unit___024root___eval_act(Vextend_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root___eval_act\n"); );
}

void Vextend_unit___024root___eval_nba(Vextend_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root___eval_nba\n"); );
}

void Vextend_unit___024root___eval_triggers__ico(Vextend_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vextend_unit___024root___dump_triggers__ico(Vextend_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vextend_unit___024root___eval_triggers__act(Vextend_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vextend_unit___024root___dump_triggers__act(Vextend_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vextend_unit___024root___dump_triggers__nba(Vextend_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vextend_unit___024root___eval(Vextend_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root___eval\n"); );
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
        Vextend_unit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vextend_unit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("extend_unit.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vextend_unit___024root___eval_ico(vlSelf);
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
            Vextend_unit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vextend_unit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("extend_unit.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vextend_unit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vextend_unit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("extend_unit.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vextend_unit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vextend_unit___024root___eval_debug_assertions(Vextend_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->instr_i & 0xfe000000U))) {
        Verilated::overWidthError("instr_i");}
    if (VL_UNLIKELY((vlSelf->imm_src_i & 0xf8U))) {
        Verilated::overWidthError("imm_src_i");}
}
#endif  // VL_DEBUG
