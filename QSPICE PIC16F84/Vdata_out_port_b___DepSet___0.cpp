// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_out_port_b.h for the primary calling header

#include "verilated.h"

#include "Vdata_out_port_b_.h"

VL_INLINE_OPT void Vdata_out_port_b____combo__TOP__0(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____combo__TOP__0\n"); );
    // Body
    vlSelf->rb0 = (1U & (IData)(vlSelf->data_in));
    vlSelf->rb1 = (1U & ((IData)(vlSelf->data_in) >> 1U));
    vlSelf->rb2 = (1U & ((IData)(vlSelf->data_in) >> 2U));
    vlSelf->rb3 = (1U & ((IData)(vlSelf->data_in) >> 3U));
    vlSelf->rb4 = (1U & ((IData)(vlSelf->data_in) >> 4U));
    vlSelf->rb5 = (1U & ((IData)(vlSelf->data_in) >> 5U));
    vlSelf->rb6 = (1U & ((IData)(vlSelf->data_in) >> 6U));
    vlSelf->rb7 = (1U & ((IData)(vlSelf->data_in) >> 7U));
}

void Vdata_out_port_b____eval(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____eval\n"); );
    // Body
    Vdata_out_port_b____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vdata_out_port_b____eval_debug_assertions(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
