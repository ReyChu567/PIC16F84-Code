// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpic16f84_x1_rom.h for the primary calling header

#ifndef VERILATED_VPIC16F84_X1_ROM__H_
#define VERILATED_VPIC16F84_X1_ROM__H_  // guard

#include "verilated.h"

class Vpic16f84_x1_rom__Syms;
VL_MODULE(Vpic16f84_x1_rom_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(q1,0,0);
    VL_IN8(nop_in,0,0);
    CData/*7:0*/ pic16f84_x1_rom__DOT__char_in;
    CData/*7:0*/ pic16f84_x1_rom__DOT__low_byte;
    CData/*7:0*/ pic16f84_x1_rom__DOT__upper_byte;
    CData/*3:0*/ pic16f84_x1_rom__DOT__data;
    CData/*7:0*/ pic16f84_x1_rom__DOT__byte_count;
    CData/*7:0*/ pic16f84_x1_rom__DOT__record_type;
    VL_IN16(pc_in,12,0);
    VL_OUT16(inst,13,0);
    SData/*15:0*/ pic16f84_x1_rom__DOT__addr;
    SData/*15:0*/ pic16f84_x1_rom__DOT__paddr;
    IData/*31:0*/ pic16f84_x1_rom__DOT__fd;
    IData/*31:0*/ pic16f84_x1_rom__DOT__i;
    IData/*31:0*/ pic16f84_x1_rom__DOT__j;
    IData/*31:0*/ pic16f84_x1_rom__DOT__k;
    IData/*31:0*/ pic16f84_x1_rom__DOT__count;
    VlUnpacked<CData/*7:0*/, 128> pic16f84_x1_rom__DOT__line;
    VlUnpacked<SData/*15:0*/, 1024> pic16f84_x1_rom__DOT__prog_mem;

    // INTERNAL VARIABLES
    Vpic16f84_x1_rom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpic16f84_x1_rom_(Vpic16f84_x1_rom__Syms* symsp, const char* name);
    ~Vpic16f84_x1_rom_();
    VL_UNCOPYABLE(Vpic16f84_x1_rom_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
