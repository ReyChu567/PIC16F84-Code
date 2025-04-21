// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_input_x1.h for the primary calling header

#include "verilated.h"

#include "Vport_input_x1_.h"

VL_ATTR_COLD void Vport_input_x1____eval_initial(Vport_input_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_input_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_input_x1____eval_initial\n"); );
}

void Vport_input_x1____combo__TOP__0(Vport_input_x1_* vlSelf);

VL_ATTR_COLD void Vport_input_x1____eval_settle(Vport_input_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_input_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_input_x1____eval_settle\n"); );
    // Body
    Vport_input_x1____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vport_input_x1____final(Vport_input_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_input_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_input_x1____final\n"); );
}

VL_ATTR_COLD void Vport_input_x1____ctor_var_reset(Vport_input_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_input_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_input_x1____ctor_var_reset\n"); );
    // Body
    vlSelf->tris_stat = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(1);
}
