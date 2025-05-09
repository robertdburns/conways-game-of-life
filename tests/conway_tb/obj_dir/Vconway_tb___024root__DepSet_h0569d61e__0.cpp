// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconway_tb.h for the primary calling header

#include "Vconway_tb__pch.h"
#include "Vconway_tb__Syms.h"
#include "Vconway_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__act(Vconway_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vconway_tb___024root___eval_triggers__act(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_triggers__act\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.conway_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__conway_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.conway_tb__DOT__next_gen) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__conway_tb__DOT__next_gen__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__conway_tb__DOT__clk__0 
        = vlSelfRef.conway_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__conway_tb__DOT__next_gen__0 
        = vlSelfRef.conway_tb__DOT__next_gen;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconway_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
