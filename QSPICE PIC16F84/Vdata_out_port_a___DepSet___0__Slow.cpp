// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_out_port_a.h for the primary calling header

#include "verilated.h"

#include "Vdata_out_port_a_.h"

VL_ATTR_COLD void Vdata_out_port_a____eval_initial(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____eval_initial\n"); );
}

void Vdata_out_port_a____combo__TOP__0(Vdata_out_port_a_* vlSelf);

VL_ATTR_COLD void Vdata_out_port_a____eval_settle(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____eval_settle\n"); );
    // Body
    Vdata_out_port_a____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdata_out_port_a____final(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____final\n"); );
}

VL_ATTR_COLD void Vdata_out_port_a____ctor_var_reset(Vdata_out_port_a_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_out_port_a__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_out_port_a____ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(5);
    vlSelf->ra0 = VL_RAND_RESET_I(1);
    vlSelf->ra1 = VL_RAND_RESET_I(1);
    vlSelf->ra2 = VL_RAND_RESET_I(1);
    vlSelf->ra3 = VL_RAND_RESET_I(1);
    vlSelf->ra4 = VL_RAND_RESET_I(1);
}
