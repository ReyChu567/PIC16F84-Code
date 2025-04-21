// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_a_tris.h for the primary calling header

#include "verilated.h"

#include "Vport_a_tris_.h"

VL_INLINE_OPT void Vport_a_tris____combo__TOP__0(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____combo__TOP__0\n"); );
    // Body
    vlSelf->ra0 = (1U & (IData)(vlSelf->tris_val));
    vlSelf->ra1 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 1U));
    vlSelf->ra2 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 2U));
    vlSelf->ra3 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 3U));
    vlSelf->ra4 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 4U));
}

void Vport_a_tris____eval(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____eval\n"); );
    // Body
    Vport_a_tris____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vport_a_tris____eval_debug_assertions(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->tris_val & 0xe0U))) {
        Verilated::overWidthError("tris_val");}
}
#endif  // VL_DEBUG
