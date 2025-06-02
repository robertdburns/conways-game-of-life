// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconway_tb.h for the primary calling header

#include "Vconway_tb__pch.h"
#include "Vconway_tb___024root.h"

void Vconway_tb___024root___timing_resume(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___timing_resume\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h323a2de4__0.resume(
                                                   "@( conway_tb.next_gen)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vconway_tb___024root___timing_commit(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___timing_commit\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h323a2de4__0.commit(
                                                   "@( conway_tb.next_gen)");
    }
}

void Vconway_tb___024root___eval_triggers__act(Vconway_tb___024root* vlSelf);
void Vconway_tb___024root___eval_act(Vconway_tb___024root* vlSelf);

bool Vconway_tb___024root___eval_phase__act(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_phase__act\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconway_tb___024root___eval_triggers__act(vlSelf);
    Vconway_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconway_tb___024root___timing_resume(vlSelf);
        Vconway_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vconway_tb___024root___eval_nba(Vconway_tb___024root* vlSelf);

bool Vconway_tb___024root___eval_phase__nba(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_phase__nba\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconway_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__nba(Vconway_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__act(Vconway_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vconway_tb___024root___eval(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vconway_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("conway_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconway_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("conway_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconway_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconway_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconway_tb___024root___eval_debug_assertions(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_debug_assertions\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
