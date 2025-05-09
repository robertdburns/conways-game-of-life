// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconway_tb.h for the primary calling header

#include "Vconway_tb__pch.h"
#include "Vconway_tb__Syms.h"
#include "Vconway_tb___024root.h"

VL_ATTR_COLD void Vconway_tb___024root___eval_initial__TOP(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_initial__TOP\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb_.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0xffU, vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0U;
        while (VL_GTS_III(32, 0xffU, vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j)) {
            vlSelfRef.conway_tb__DOT__uut__DOT__mem[(0xffU 
                                                     & vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i)][(7U 
                                                                                & (vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j))) 
                   & vlSelfRef.conway_tb__DOT__uut__DOT__mem
                   [(0xffU & vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i)][
                   (7U & (vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j 
                          >> 5U))]);
            vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j 
                = ((IData)(1U) + vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j);
        }
        vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__stl(Vconway_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconway_tb___024root___eval_triggers__stl(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_triggers__stl\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconway_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
