// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_x1_rom.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_x1_rom_.h"

VL_INLINE_OPT void Vpic16f84_x1_rom____combo__TOP__0(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____combo__TOP__0\n"); );
    // Body
    if (vlSelf->q1) {
        vlSelf->inst = ((IData)(vlSelf->nop_in) ? (0x3fffU 
                                                   & vlSelf->pic16f84_x1_rom__DOT__prog_mem
                                                   [
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->pc_in) 
                                                       - (IData)(1U)))])
                         : 0U);
    }
}

void Vpic16f84_x1_rom____eval(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____eval\n"); );
    // Body
    Vpic16f84_x1_rom____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vpic16f84_x1_rom____eval_debug_assertions(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->pc_in & 0xe000U))) {
        Verilated::overWidthError("pc_in");}
    if (VL_UNLIKELY((vlSelf->q1 & 0xfeU))) {
        Verilated::overWidthError("q1");}
    if (VL_UNLIKELY((vlSelf->nop_in & 0xfeU))) {
        Verilated::overWidthError("nop_in");}
}
#endif  // VL_DEBUG
