// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconway_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconway_tb::Vconway_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconway_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconway_tb::Vconway_tb(const char* _vcname__)
    : Vconway_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconway_tb::~Vconway_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconway_tb___024root___eval_debug_assertions(Vconway_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vconway_tb___024root___eval_static(Vconway_tb___024root* vlSelf);
void Vconway_tb___024root___eval_initial(Vconway_tb___024root* vlSelf);
void Vconway_tb___024root___eval_settle(Vconway_tb___024root* vlSelf);
void Vconway_tb___024root___eval(Vconway_tb___024root* vlSelf);

void Vconway_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconway_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconway_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconway_tb___024root___eval_static(&(vlSymsp->TOP));
        Vconway_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vconway_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconway_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vconway_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vconway_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vconway_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vconway_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vconway_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconway_tb___024root___eval_final(Vconway_tb___024root* vlSelf);

VL_ATTR_COLD void Vconway_tb::final() {
    Vconway_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconway_tb::hierName() const { return vlSymsp->name(); }
const char* Vconway_tb::modelName() const { return "Vconway_tb"; }
unsigned Vconway_tb::threads() const { return 1; }
void Vconway_tb::prepareClone() const { contextp()->prepareClone(); }
void Vconway_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconway_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconway_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconway_tb___024root__trace_init_top(Vconway_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconway_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconway_tb___024root*>(voidSelf);
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconway_tb___024root__trace_decl_types(tracep);
    Vconway_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconway_tb___024root__trace_register(Vconway_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconway_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconway_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconway_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
