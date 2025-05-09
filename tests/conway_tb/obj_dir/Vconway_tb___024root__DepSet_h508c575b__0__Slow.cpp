// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconway_tb.h for the primary calling header

#include "Vconway_tb__pch.h"
#include "Vconway_tb___024root.h"

VL_ATTR_COLD void Vconway_tb___024root___eval_static__TOP(Vconway_tb___024root* vlSelf);
VL_ATTR_COLD void Vconway_tb___024root____Vm_traceActivitySetAll(Vconway_tb___024root* vlSelf);

VL_ATTR_COLD void Vconway_tb___024root___eval_static(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_static\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconway_tb___024root___eval_static__TOP(vlSelf);
    Vconway_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vconway_tb___024root___eval_static__TOP(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_static__TOP\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.conway_tb__DOT__uut__DOT__row = 0U;
    vlSelfRef.conway_tb__DOT__uut__DOT__col = 0U;
}

VL_ATTR_COLD void Vconway_tb___024root___eval_final(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_final\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__stl(Vconway_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconway_tb___024root___eval_phase__stl(Vconway_tb___024root* vlSelf);

VL_ATTR_COLD void Vconway_tb___024root___eval_settle(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_settle\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vconway_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("conway_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconway_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__stl(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___dump_triggers__stl\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconway_tb___024root___stl_sequent__TOP__0(Vconway_tb___024root* vlSelf);

VL_ATTR_COLD void Vconway_tb___024root___eval_stl(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_stl\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vconway_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vconway_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vconway_tb___024root___stl_sequent__TOP__0(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___stl_sequent__TOP__0\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                  >> 5U)] >> (0x1fU & (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(0xfU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xfU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                              >> 5U)] 
                 >> (0x1fU & (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                  >> 5U)] >> (0x1fU & (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(0xfU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xfU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(0xfU) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(0xfU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(2U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(2U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(3U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(4U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(5U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(5U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(6U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(6U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(7U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(7U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(8U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(8U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(9U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(9U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(0xaU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xaU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(0xbU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xbU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(0xcU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xcU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(0xdU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xdU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                 (7U & (((IData)(0xeU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xeU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(1U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(2U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(2U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(2U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(2U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(3U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(3U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(3U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(4U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(4U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(4U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(5U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(5U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(5U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(5U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(6U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(6U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(6U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(6U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(7U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(7U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(7U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(7U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(8U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(8U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(8U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(8U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(9U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(9U) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(9U) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(9U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(0xaU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xaU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(0xaU) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(0xaU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(0xbU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xbU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(0xbU) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(0xbU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(0xcU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xcU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(0xcU) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(0xcU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(0xdU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xdU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(0xdU) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(0xdU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                 (7U & (((IData)(0xeU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                        >> 5U))] >> (0x1fU & ((IData)(0xeU) 
                                              + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__top 
        = (1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                            - (IData)(1U)))][(7U & 
                                              (((IData)(0xeU) 
                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                               >> 5U))] 
                 >> (0x1fU & ((IData)(0xeU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if ((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
               (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                       - (IData)(1U)) >> 5U))] >> (0x1fU 
                                                   & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                      - (IData)(1U)))))) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if ((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
               [vlSelfRef.conway_tb__DOT__uut__DOT__row][
               (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                       - (IData)(1U)) >> 5U))] >> (0x1fU 
                                                   & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                      - (IData)(1U)))))) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    if ((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
               [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                          - (IData)(1U)))][(7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                   - (IData)(1U)) 
                                                  >> 5U))] 
               >> (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                            - (IData)(1U)))))) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count = 0U;
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if ((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
               [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                          - (IData)(1U)))][(7U & (((IData)(0x10U) 
                                                   + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                  >> 5U))] 
               >> (0x1fU & ((IData)(0x10U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if ((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
               [vlSelfRef.conway_tb__DOT__uut__DOT__row][
               (7U & (((IData)(0x10U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                      >> 5U))] >> (0x1fU & ((IData)(0x10U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if ((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
               (7U & (((IData)(0x10U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                      >> 5U))] >> (0x1fU & ((IData)(0x10U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    if (vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__top) {
        vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)));
    }
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                                                >> 5U)] 
        = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
             >> 5U)]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target)
                           ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)) 
                              | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)))
                           : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count))) 
                         << (0x1fU & (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(1U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(1U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count))) 
                                << (0x1fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(2U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(2U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(2U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count))) 
                                << (0x1fU & ((IData)(2U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(3U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(3U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(3U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count))) 
                                << (0x1fU & ((IData)(3U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(4U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(4U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(4U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count))) 
                                << (0x1fU & ((IData)(4U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(5U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(5U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(5U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count))) 
                                << (0x1fU & ((IData)(5U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(6U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(6U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(6U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count))) 
                                << (0x1fU & ((IData)(6U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(7U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(7U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(7U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count))) 
                                << (0x1fU & ((IData)(7U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(8U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(8U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(8U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count))) 
                                << (0x1fU & ((IData)(8U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(9U) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(9U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(9U) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count))) 
                                << (0x1fU & ((IData)(9U) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(0xaU) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xaU) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(0xaU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count))) 
                                << (0x1fU & ((IData)(0xaU) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(0xbU) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xbU) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(0xbU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count))) 
                                << (0x1fU & ((IData)(0xbU) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(0xcU) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xcU) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(0xcU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count))) 
                                << (0x1fU & ((IData)(0xcU) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(0xdU) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xdU) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(0xdU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count))) 
                                << (0x1fU & ((IData)(0xdU) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(0xeU) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xeU) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(0xeU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count))) 
                                << (0x1fU & ((IData)(0xeU) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
    vlSelfRef.conway_tb__DOT__uut__DOT__mem_next[vlSelfRef.conway_tb__DOT__uut__DOT__row][(7U 
                                                                                & (((IData)(0xfU) 
                                                                                + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                                                                >> 5U))] 
        = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xfU) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col))))) 
            & vlSelfRef.conway_tb__DOT__uut__DOT__mem_next
            [vlSelfRef.conway_tb__DOT__uut__DOT__row][
            (7U & (((IData)(0xfU) + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                   >> 5U))]) | (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target)
                                  ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)) 
                                     | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)))
                                  : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count))) 
                                << (0x1fU & ((IData)(0xfU) 
                                             + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))));
}

VL_ATTR_COLD void Vconway_tb___024root___eval_triggers__stl(Vconway_tb___024root* vlSelf);

VL_ATTR_COLD bool Vconway_tb___024root___eval_phase__stl(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___eval_phase__stl\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconway_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vconway_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__act(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___dump_triggers__act\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge conway_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( conway_tb.next_gen)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconway_tb___024root___dump_triggers__nba(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___dump_triggers__nba\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge conway_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( conway_tb.next_gen)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconway_tb___024root____Vm_traceActivitySetAll(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root____Vm_traceActivitySetAll\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vconway_tb___024root___ctor_var_reset(Vconway_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root___ctor_var_reset\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->conway_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__addr = VL_RAND_RESET_I(16);
    vlSelf->conway_tb__DOT__next_gen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->conway_tb__DOT__uut__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->conway_tb__DOT__uut__DOT__mem_next[__Vi0]);
    }
    vlSelf->conway_tb__DOT__uut__DOT__row = VL_RAND_RESET_I(8);
    vlSelf->conway_tb__DOT__uut__DOT__col = VL_RAND_RESET_I(8);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc1__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc1__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc2__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc2__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc3__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc3__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc4__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc4__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc5__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc5__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc6__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc6__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc7__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc7__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc8__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc8__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc9__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc9__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc10__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc10__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc11__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc11__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc12__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc12__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc13__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc13__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc14__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc14__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc15__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc15__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc16__top = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT____Vcellinp__calc16__target = VL_RAND_RESET_I(1);
    vlSelf->conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->conway_tb__DOT__uut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->conway_tb__DOT__uut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->conway_tb__DOT__uut__DOT__calc1__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc2__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc3__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc4__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc5__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc6__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc7__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc8__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc9__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc10__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc11__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc12__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc13__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc14__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc15__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->conway_tb__DOT__uut__DOT__calc16__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__conway_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__conway_tb__DOT__next_gen__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
