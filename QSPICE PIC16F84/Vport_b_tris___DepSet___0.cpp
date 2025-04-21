// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_b_tris.h for the primary calling header

#include "verilated.h"

#include "Vport_b_tris_.h"

VL_INLINE_OPT void Vport_b_tris____combo__TOP__0(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____combo__TOP__0\n"); );
    // Body
    vlSelf->rb0 = (1U & (IData)(vlSelf->tris_val));
    vlSelf->rb1 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 1U));
    vlSelf->rb2 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 2U));
    vlSelf->rb3 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 3U));
    vlSelf->rb4 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 4U));
    vlSelf->rb5 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 5U));
    vlSelf->rb6 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 6U));
    vlSelf->rb7 = (1U & ((IData)(vlSelf->tris_val) 
                         >> 7U));
}

void Vport_b_tris____eval(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____eval\n"); );
    // Body
    Vport_b_tris____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vport_b_tris____eval_debug_assertions(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
