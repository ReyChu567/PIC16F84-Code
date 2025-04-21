// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vport_a_tris.h for the primary calling header

#ifndef VERILATED_VPORT_A_TRIS__H_
#define VERILATED_VPORT_A_TRIS__H_  // guard

#include "verilated.h"

class Vport_a_tris__Syms;
VL_MODULE(Vport_a_tris_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(tris_val,4,0);
    VL_OUT8(ra0,0,0);
    VL_OUT8(ra1,0,0);
    VL_OUT8(ra2,0,0);
    VL_OUT8(ra3,0,0);
    VL_OUT8(ra4,0,0);

    // INTERNAL VARIABLES
    Vport_a_tris__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vport_a_tris_(Vport_a_tris__Syms* symsp, const char* name);
    ~Vport_a_tris_();
    VL_UNCOPYABLE(Vport_a_tris_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
