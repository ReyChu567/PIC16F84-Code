// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatainporta.h for the primary calling header

#include "verilated.h"

#include "Vdatainporta_.h"

VL_ATTR_COLD void Vdatainporta____eval_initial(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____eval_initial\n"); );
}

void Vdatainporta____combo__TOP__0(Vdatainporta_* vlSelf);

VL_ATTR_COLD void Vdatainporta____eval_settle(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____eval_settle\n"); );
    // Body
    Vdatainporta____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdatainporta____final(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____final\n"); );
}

VL_ATTR_COLD void Vdatainporta____ctor_var_reset(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____ctor_var_reset\n"); );
    // Body
    vlSelf->ra0 = VL_RAND_RESET_I(1);
    vlSelf->ra1 = VL_RAND_RESET_I(1);
    vlSelf->ra2 = VL_RAND_RESET_I(1);
    vlSelf->ra3 = VL_RAND_RESET_I(1);
    vlSelf->ra4 = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(5);
}
