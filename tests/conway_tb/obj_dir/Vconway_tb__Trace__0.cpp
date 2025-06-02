// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconway_tb__Syms.h"


void Vconway_tb___024root__trace_chg_0_sub_0(Vconway_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconway_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_chg_0\n"); );
    // Init
    Vconway_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconway_tb___024root*>(voidSelf);
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconway_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconway_tb___024root__trace_chg_0_sub_0(Vconway_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_chg_0_sub_0\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                    [(0xffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                                    (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                            - (IData)(1U)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                 - (IData)(1U)))))));
        bufp->chgBit(oldp+1,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                    [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                                    (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                            - (IData)(1U)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                 - (IData)(1U)))))));
        bufp->chgBit(oldp+2,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                    [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                                               - (IData)(1U)))][
                                    (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                            - (IData)(1U)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                                 - (IData)(1U)))))));
        bufp->chgBit(oldp+3,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                    [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                                               - (IData)(1U)))][
                                    (7U & (((IData)(0x10U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(0x10U) 
                                                 + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))));
        bufp->chgBit(oldp+4,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                    [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                                    (7U & (((IData)(0x10U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(0x10U) 
                                                 + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))));
        bufp->chgBit(oldp+5,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                    [(0xffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                                    (7U & (((IData)(0x10U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                           >> 5U))] 
                                    >> (0x1fU & ((IData)(0x10U) 
                                                 + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+6,(vlSelfRef.conway_tb__DOT__next_gen));
        bufp->chgCData(oldp+7,(vlSelfRef.conway_tb__DOT__uut__DOT__row),8);
        bufp->chgCData(oldp+8,(vlSelfRef.conway_tb__DOT__uut__DOT__col),8);
        bufp->chgBit(oldp+9,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target)
                               ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)) 
                                  | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)))
                               : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)))));
        bufp->chgBit(oldp+10,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)))));
        bufp->chgBit(oldp+11,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)))));
        bufp->chgBit(oldp+12,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)))));
        bufp->chgBit(oldp+13,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)))));
        bufp->chgBit(oldp+14,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)))));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)))));
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)))));
        bufp->chgBit(oldp+17,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)))));
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)))));
        bufp->chgBit(oldp+20,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)))));
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target)
                                ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)) 
                                   | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)))
                                : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)))));
        bufp->chgBit(oldp+25,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target));
        bufp->chgBit(oldp+26,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__top));
        bufp->chgBit(oldp+27,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__top));
        bufp->chgBit(oldp+28,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target));
        bufp->chgBit(oldp+29,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right));
        bufp->chgBit(oldp+30,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom));
        bufp->chgCData(oldp+31,(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count),3);
        bufp->chgBit(oldp+32,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target));
        bufp->chgBit(oldp+33,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__top));
        bufp->chgBit(oldp+34,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__top));
        bufp->chgBit(oldp+35,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target));
        bufp->chgBit(oldp+36,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right));
        bufp->chgBit(oldp+37,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right));
        bufp->chgBit(oldp+38,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right));
        bufp->chgBit(oldp+39,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target));
        bufp->chgBit(oldp+40,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__top));
        bufp->chgCData(oldp+41,(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count),3);
        bufp->chgBit(oldp+42,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__top));
        bufp->chgBit(oldp+43,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target));
        bufp->chgBit(oldp+44,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right));
        bufp->chgCData(oldp+45,(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count),3);
        bufp->chgBit(oldp+46,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__top));
        bufp->chgBit(oldp+47,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target));
        bufp->chgBit(oldp+48,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right));
        bufp->chgCData(oldp+49,(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count),3);
        bufp->chgBit(oldp+50,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__top));
        bufp->chgBit(oldp+51,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target));
        bufp->chgBit(oldp+52,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right));
        bufp->chgCData(oldp+53,(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count),3);
        bufp->chgBit(oldp+54,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__top));
        bufp->chgBit(oldp+55,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target));
        bufp->chgBit(oldp+56,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right));
        bufp->chgCData(oldp+57,(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count),3);
        bufp->chgBit(oldp+58,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__top));
        bufp->chgBit(oldp+59,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target));
        bufp->chgBit(oldp+60,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right));
        bufp->chgCData(oldp+61,(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count),3);
        bufp->chgCData(oldp+62,(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count),3);
        bufp->chgBit(oldp+63,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__top));
        bufp->chgBit(oldp+64,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target));
        bufp->chgBit(oldp+65,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right));
        bufp->chgCData(oldp+66,(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count),3);
        bufp->chgBit(oldp+67,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__top));
        bufp->chgBit(oldp+68,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target));
        bufp->chgBit(oldp+69,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right));
        bufp->chgCData(oldp+70,(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count),3);
        bufp->chgBit(oldp+71,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__top));
        bufp->chgBit(oldp+72,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target));
        bufp->chgBit(oldp+73,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right));
        bufp->chgCData(oldp+74,(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count),3);
        bufp->chgBit(oldp+75,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__top));
        bufp->chgBit(oldp+76,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target));
        bufp->chgBit(oldp+77,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right));
        bufp->chgCData(oldp+78,(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count),3);
        bufp->chgBit(oldp+79,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__top));
        bufp->chgBit(oldp+80,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target));
        bufp->chgBit(oldp+81,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right));
        bufp->chgCData(oldp+82,(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count),3);
        bufp->chgBit(oldp+83,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__top));
        bufp->chgBit(oldp+84,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target));
        bufp->chgBit(oldp+85,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right));
        bufp->chgCData(oldp+86,(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count),3);
        bufp->chgCData(oldp+87,(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count),3);
        bufp->chgCData(oldp+88,(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count),3);
        bufp->chgIData(oldp+89,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+90,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    }
    bufp->chgBit(oldp+91,(vlSelfRef.conway_tb__DOT__clk));
    bufp->chgBit(oldp+92,(vlSelfRef.conway_tb__DOT__rst));
    bufp->chgBit(oldp+93,(vlSelfRef.conway_tb__DOT__state));
    bufp->chgSData(oldp+94,(vlSelfRef.conway_tb__DOT__addr),16);
    bufp->chgIData(oldp+95,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+96,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
}

void Vconway_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_cleanup\n"); );
    // Init
    Vconway_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconway_tb___024root*>(voidSelf);
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
