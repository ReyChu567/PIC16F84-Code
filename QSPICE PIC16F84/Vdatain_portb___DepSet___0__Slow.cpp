// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatain_portb.h for the primary calling header

#include "verilated.h"

#include "Vdatain_portb_.h"

VL_ATTR_COLD void Vdatain_portb____eval_initial(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____eval_initial\n"); );
}

void Vdatain_portb____combo__TOP__0(Vdatain_portb_* vlSelf);

VL_ATTR_COLD void Vdatain_portb____eval_settle(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____eval_settle\n"); );
    // Body
    Vdatain_portb____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdatain_portb____final(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____final\n"); );
}

VL_ATTR_COLD void Vdatain_portb____ctor_var_reset(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____ctor_var_reset\n"); );
    // Body
    vlSelf->rb0 = VL_RAND_RESET_I(1);
    vlSelf->rb1 = VL_RAND_RESET_I(1);
    vlSelf->rb2 = VL_RAND_RESET_I(1);
    vlSelf->rb3 = VL_RAND_RESET_I(1);
    vlSelf->rb4 = VL_RAND_RESET_I(1);
    vlSelf->rb5 = VL_RAND_RESET_I(1);
    vlSelf->rb6 = VL_RAND_RESET_I(1);
    vlSelf->rb7 = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
}
