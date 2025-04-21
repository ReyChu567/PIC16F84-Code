// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_out_port_a.h for the primary calling header

#include "verilated.h"

#include "Vdata_out_port_a_.h"

VL_INLINE_OPT void Vdata_out_port_a____combo__TOP__0(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____combo__TOP__0\n"); );
    // Body
    vlSelf->ra0 = (1U & (IData)(vlSelf->data_in));
    vlSelf->ra1 = (1U & ((IData)(vlSelf->data_in) >> 1U));
    vlSelf->ra2 = (1U & ((IData)(vlSelf->data_in) >> 2U));
    vlSelf->ra3 = (1U & ((IData)(vlSelf->data_in) >> 3U));
    vlSelf->ra4 = (1U & ((IData)(vlSelf->data_in) >> 4U));
}

void Vdata_out_port_a____eval(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____eval\n"); );
    // Body
    Vdata_out_port_a____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vdata_out_port_a____eval_debug_assertions(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->data_in & 0xe0U))) {
        Verilated::overWidthError("data_in");}
}
#endif  // VL_DEBUG
