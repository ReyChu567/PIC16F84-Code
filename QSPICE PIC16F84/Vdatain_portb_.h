// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdatain_portb.h for the primary calling header

#ifndef VERILATED_VDATAIN_PORTB__H_
#define VERILATED_VDATAIN_PORTB__H_  // guard

#include "verilated.h"

class Vdatain_portb__Syms;
VL_MODULE(Vdatain_portb_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rb0,0,0);
    VL_IN8(rb1,0,0);
    VL_IN8(rb2,0,0);
    VL_IN8(rb3,0,0);
    VL_IN8(rb4,0,0);
    VL_IN8(rb5,0,0);
    VL_IN8(rb6,0,0);
    VL_IN8(rb7,0,0);
    VL_OUT8(data_out,7,0);

    // INTERNAL VARIABLES
    Vdatain_portb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdatain_portb_(Vdatain_portb__Syms* symsp, const char* name);
    ~Vdatain_portb_();
    VL_UNCOPYABLE(Vdatain_portb_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
