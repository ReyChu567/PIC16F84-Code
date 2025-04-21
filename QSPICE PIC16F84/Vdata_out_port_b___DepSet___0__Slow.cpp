// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_out_port_b.h for the primary calling header

#include "verilated.h"

#include "Vdata_out_port_b_.h"

VL_ATTR_COLD void Vdata_out_port_b____eval_initial(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____eval_initial\n"); );
}

void Vdata_out_port_b____combo__TOP__0(Vdata_out_port_b_* vlSelf);

VL_ATTR_COLD void Vdata_out_port_b____eval_settle(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____eval_settle\n"); );
    // Body
    Vdata_out_port_b____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdata_out_port_b____final(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____final\n"); );
}

VL_ATTR_COLD void Vdata_out_port_b____ctor_var_reset(Vdata_out_port_b_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_b____ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->rb0 = VL_RAND_RESET_I(1);
    vlSelf->rb1 = VL_RAND_RESET_I(1);
    vlSelf->rb2 = VL_RAND_RESET_I(1);
    vlSelf->rb3 = VL_RAND_RESET_I(1);
    vlSelf->rb4 = VL_RAND_RESET_I(1);
    vlSelf->rb5 = VL_RAND_RESET_I(1);
    vlSelf->rb6 = VL_RAND_RESET_I(1);
    vlSelf->rb7 = VL_RAND_RESET_I(1);
}
