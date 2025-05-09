// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconway_tb.h for the primary calling header

#ifndef VERILATED_VCONWAY_TB___024ROOT_H_
#define VERILATED_VCONWAY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vconway_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconway_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ conway_tb__DOT__clk;
        CData/*0:0*/ conway_tb__DOT__rst;
        CData/*0:0*/ conway_tb__DOT__state;
        CData/*0:0*/ conway_tb__DOT__next_gen;
        CData/*7:0*/ conway_tb__DOT__uut__DOT__row;
        CData/*7:0*/ conway_tb__DOT__uut__DOT__col;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc1__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc1__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc2__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc2__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc3__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc3__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc4__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc4__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc5__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc5__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc6__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc6__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc7__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc7__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc8__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc8__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc9__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc9__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc10__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc10__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc11__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc11__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc12__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc12__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc13__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc13__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc14__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc14__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc15__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc15__target;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc16__top;
        CData/*0:0*/ conway_tb__DOT__uut__DOT____Vcellinp__calc16__target;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc1__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc2__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc3__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc4__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc5__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc6__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc7__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc8__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc9__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc10__DOT__count;
    };
    struct {
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc11__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc12__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc13__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc14__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc15__DOT__count;
        CData/*2:0*/ conway_tb__DOT__uut__DOT__calc16__DOT__count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__conway_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__conway_tb__DOT__next_gen__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ conway_tb__DOT__addr;
        IData/*31:0*/ conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ conway_tb__DOT__uut__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ conway_tb__DOT__uut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlWide<8>/*255:0*/, 256> conway_tb__DOT__uut__DOT__mem;
        VlUnpacked<VlWide<8>/*255:0*/, 256> conway_tb__DOT__uut__DOT__mem_next;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<VlWide<8>/*255:0*/, 256>, true, VlWide<8>/*255:0*/, 1> __VdlyCommitQueueconway_tb__DOT__uut__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h323a2de4__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconway_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconway_tb___024root(Vconway_tb__Syms* symsp, const char* v__name);
    ~Vconway_tb___024root();
    VL_UNCOPYABLE(Vconway_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
