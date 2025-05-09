// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconway_tb__Syms.h"


VL_ATTR_COLD void Vconway_tb___024root__trace_init_sub__TOP__0(Vconway_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_init_sub__TOP__0\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("conway_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"next_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"next_gen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("calc1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+30,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+62,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+77,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+82,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("calc9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"top_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"bottom_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"bottom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"bottom_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"top_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"target_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconway_tb___024root__trace_init_top(Vconway_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_init_top\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconway_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconway_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconway_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconway_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconway_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconway_tb___024root__trace_register(Vconway_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_register\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconway_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconway_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconway_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconway_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconway_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_const_0\n"); );
    // Init
    Vconway_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconway_tb___024root*>(voidSelf);
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vconway_tb___024root__trace_full_0_sub_0(Vconway_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconway_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_full_0\n"); );
    // Init
    Vconway_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconway_tb___024root*>(voidSelf);
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconway_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconway_tb___024root__trace_full_0_sub_0(Vconway_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconway_tb___024root__trace_full_0_sub_0\n"); );
    Vconway_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                 [(0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                                 (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                         - (IData)(1U)) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                           - (IData)(1U)))))));
    bufp->fullBit(oldp+2,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                                 (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                         - (IData)(1U)) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                           - (IData)(1U)))))));
    bufp->fullBit(oldp+3,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                                            - (IData)(1U)))][
                                 (7U & (((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                         - (IData)(1U)) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col) 
                                           - (IData)(1U)))))));
    bufp->fullBit(oldp+4,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                 [(0xffU & ((IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row) 
                                            - (IData)(1U)))][
                                 (7U & (((IData)(0x10U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(0x10U) 
                                           + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))));
    bufp->fullBit(oldp+5,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                 [vlSelfRef.conway_tb__DOT__uut__DOT__row][
                                 (7U & (((IData)(0x10U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(0x10U) 
                                           + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))));
    bufp->fullBit(oldp+6,((1U & (vlSelfRef.conway_tb__DOT__uut__DOT__mem
                                 [(0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__row)))][
                                 (7U & (((IData)(0x10U) 
                                         + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(0x10U) 
                                           + (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__col)))))));
    bufp->fullBit(oldp+7,(vlSelfRef.conway_tb__DOT__next_gen));
    bufp->fullCData(oldp+8,(vlSelfRef.conway_tb__DOT__uut__DOT__row),8);
    bufp->fullCData(oldp+9,(vlSelfRef.conway_tb__DOT__uut__DOT__col),8);
    bufp->fullBit(oldp+10,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target));
    bufp->fullBit(oldp+11,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__top));
    bufp->fullBit(oldp+12,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__top));
    bufp->fullBit(oldp+13,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target));
    bufp->fullBit(oldp+14,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom_right));
    bufp->fullBit(oldp+15,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__bottom));
    bufp->fullBit(oldp+16,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc1__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count)))));
    bufp->fullCData(oldp+17,(vlSelfRef.conway_tb__DOT__uut__DOT__calc1__DOT__count),3);
    bufp->fullBit(oldp+18,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target));
    bufp->fullBit(oldp+19,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__top));
    bufp->fullBit(oldp+20,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__top));
    bufp->fullBit(oldp+21,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target));
    bufp->fullBit(oldp+22,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__bottom_right));
    bufp->fullBit(oldp+23,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__bottom_right));
    bufp->fullBit(oldp+24,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__bottom_right));
    bufp->fullBit(oldp+25,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target));
    bufp->fullBit(oldp+26,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__top));
    bufp->fullBit(oldp+27,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc10__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count)))));
    bufp->fullCData(oldp+28,(vlSelfRef.conway_tb__DOT__uut__DOT__calc10__DOT__count),3);
    bufp->fullBit(oldp+29,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__top));
    bufp->fullBit(oldp+30,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target));
    bufp->fullBit(oldp+31,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__bottom_right));
    bufp->fullBit(oldp+32,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc11__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count)))));
    bufp->fullCData(oldp+33,(vlSelfRef.conway_tb__DOT__uut__DOT__calc11__DOT__count),3);
    bufp->fullBit(oldp+34,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__top));
    bufp->fullBit(oldp+35,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target));
    bufp->fullBit(oldp+36,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__bottom_right));
    bufp->fullBit(oldp+37,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc12__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count)))));
    bufp->fullCData(oldp+38,(vlSelfRef.conway_tb__DOT__uut__DOT__calc12__DOT__count),3);
    bufp->fullBit(oldp+39,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__top));
    bufp->fullBit(oldp+40,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target));
    bufp->fullBit(oldp+41,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__bottom_right));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc13__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count)))));
    bufp->fullCData(oldp+43,(vlSelfRef.conway_tb__DOT__uut__DOT__calc13__DOT__count),3);
    bufp->fullBit(oldp+44,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__top));
    bufp->fullBit(oldp+45,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target));
    bufp->fullBit(oldp+46,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__bottom_right));
    bufp->fullBit(oldp+47,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc14__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count)))));
    bufp->fullCData(oldp+48,(vlSelfRef.conway_tb__DOT__uut__DOT__calc14__DOT__count),3);
    bufp->fullBit(oldp+49,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__top));
    bufp->fullBit(oldp+50,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target));
    bufp->fullBit(oldp+51,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__bottom_right));
    bufp->fullBit(oldp+52,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc15__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count)))));
    bufp->fullCData(oldp+53,(vlSelfRef.conway_tb__DOT__uut__DOT__calc15__DOT__count),3);
    bufp->fullBit(oldp+54,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc16__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count)))));
    bufp->fullCData(oldp+55,(vlSelfRef.conway_tb__DOT__uut__DOT__calc16__DOT__count),3);
    bufp->fullBit(oldp+56,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__top));
    bufp->fullBit(oldp+57,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target));
    bufp->fullBit(oldp+58,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__bottom_right));
    bufp->fullBit(oldp+59,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc2__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count)))));
    bufp->fullCData(oldp+60,(vlSelfRef.conway_tb__DOT__uut__DOT__calc2__DOT__count),3);
    bufp->fullBit(oldp+61,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__top));
    bufp->fullBit(oldp+62,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target));
    bufp->fullBit(oldp+63,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__bottom_right));
    bufp->fullBit(oldp+64,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc3__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count)))));
    bufp->fullCData(oldp+65,(vlSelfRef.conway_tb__DOT__uut__DOT__calc3__DOT__count),3);
    bufp->fullBit(oldp+66,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__top));
    bufp->fullBit(oldp+67,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target));
    bufp->fullBit(oldp+68,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__bottom_right));
    bufp->fullBit(oldp+69,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc4__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count)))));
    bufp->fullCData(oldp+70,(vlSelfRef.conway_tb__DOT__uut__DOT__calc4__DOT__count),3);
    bufp->fullBit(oldp+71,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__top));
    bufp->fullBit(oldp+72,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target));
    bufp->fullBit(oldp+73,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__bottom_right));
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc5__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count)))));
    bufp->fullCData(oldp+75,(vlSelfRef.conway_tb__DOT__uut__DOT__calc5__DOT__count),3);
    bufp->fullBit(oldp+76,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__top));
    bufp->fullBit(oldp+77,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target));
    bufp->fullBit(oldp+78,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__bottom_right));
    bufp->fullBit(oldp+79,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc6__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count)))));
    bufp->fullCData(oldp+80,(vlSelfRef.conway_tb__DOT__uut__DOT__calc6__DOT__count),3);
    bufp->fullBit(oldp+81,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__top));
    bufp->fullBit(oldp+82,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target));
    bufp->fullBit(oldp+83,(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__bottom_right));
    bufp->fullBit(oldp+84,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc7__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count)))));
    bufp->fullCData(oldp+85,(vlSelfRef.conway_tb__DOT__uut__DOT__calc7__DOT__count),3);
    bufp->fullBit(oldp+86,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc8__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count)))));
    bufp->fullCData(oldp+87,(vlSelfRef.conway_tb__DOT__uut__DOT__calc8__DOT__count),3);
    bufp->fullBit(oldp+88,(((IData)(vlSelfRef.conway_tb__DOT__uut__DOT____Vcellinp__calc9__target)
                             ? ((2U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)) 
                                | (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)))
                             : (3U == (IData)(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count)))));
    bufp->fullCData(oldp+89,(vlSelfRef.conway_tb__DOT__uut__DOT__calc9__DOT__count),3);
    bufp->fullIData(oldp+90,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+91,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullBit(oldp+92,(vlSelfRef.conway_tb__DOT__clk));
    bufp->fullBit(oldp+93,(vlSelfRef.conway_tb__DOT__rst));
    bufp->fullBit(oldp+94,(vlSelfRef.conway_tb__DOT__state));
    bufp->fullSData(oldp+95,(vlSelfRef.conway_tb__DOT__addr),16);
    bufp->fullIData(oldp+96,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+97,(vlSelfRef.conway_tb__DOT__uut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
}
