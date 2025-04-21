// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vport_b_tris.h for the primary calling header

#ifndef VERILATED_VPORT_B_TRIS__H_
#define VERILATED_VPORT_B_TRIS__H_  // guard

#include "verilated.h"

class Vport_b_tris__Syms;
VL_MODULE(Vport_b_tris_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(tris_val,7,0);
    VL_OUT8(rb0,0,0);
    VL_OUT8(rb1,0,0);
    VL_OUT8(rb2,0,0);
    VL_OUT8(rb3,0,0);
    VL_OUT8(rb4,0,0);
    VL_OUT8(rb5,0,0);
    VL_OUT8(rb6,0,0);
    VL_OUT8(rb7,0,0);

    // INTERNAL VARIABLES
    Vport_b_tris__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vport_b_tris_(Vport_b_tris__Syms* symsp, const char* name);
    ~Vport_b_tris_();
    VL_UNCOPYABLE(Vport_b_tris_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
