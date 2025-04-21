// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_out_x1.h for the primary calling header

#include "verilated.h"

#include "Vport_out_x1_.h"

VL_INLINE_OPT void Vport_out_x1____combo__TOP__0(Vport_out_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_out_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_out_x1____combo__TOP__0\n"); );
    // Body
    if (vlSelf->tris_stat) {
        if (vlSelf->tris_stat) {
            vlSelf->out = 0U;
        }
    } else {
        vlSelf->out = vlSelf->data_out;
    }
}

void Vport_out_x1____eval(Vport_out_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_out_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_out_x1____eval\n"); );
    // Body
    Vport_out_x1____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vport_out_x1____eval_debug_assertions(Vport_out_x1_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_out_x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_out_x1____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->tris_stat & 0xfeU))) {
        Verilated::overWidthError("tris_stat");}
    if (VL_UNLIKELY((vlSelf->data_out & 0xfeU))) {
        Verilated::overWidthError("data_out");}
}
#endif  // VL_DEBUG
