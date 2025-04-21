// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_x1_rom.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_x1_rom_.h"

VL_ATTR_COLD void Vpic16f84_x1_rom____initial__TOP__0(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h22bdaddf__0;
    // Body
    __Vtemp_h22bdaddf__0[0U] = 0x2e686578U;
    __Vtemp_h22bdaddf__0[1U] = 0x54455354U;
    __Vtemp_h22bdaddf__0[2U] = 0x434c525fU;
    __Vtemp_h22bdaddf__0[3U] = 0x45532f4dU;
    __Vtemp_h22bdaddf__0[4U] = 0x2046494cU;
    __Vtemp_h22bdaddf__0[5U] = 0x2f484558U;
    __Vtemp_h22bdaddf__0[6U] = 0x2eU;
    vlSelf->pic16f84_x1_rom__DOT__fd = VL_FOPEN_NN(
                                                   VL_CVT_PACK_STR_NW(7, __Vtemp_h22bdaddf__0)
                                                   , 
                                                   std::string("r"));
    if ((0U == vlSelf->pic16f84_x1_rom__DOT__fd)) {
        VL_WRITEF("Error: Could not open file.\n");
    } else {
        while ((! (vlSelf->pic16f84_x1_rom__DOT__fd ? feof(VL_CVT_I_FP(vlSelf->pic16f84_x1_rom__DOT__fd)) : true))) {
            vlSelf->pic16f84_x1_rom__DOT__i = 0U;
            vlSelf->pic16f84_x1_rom__DOT__char_in = 
                (0xffU & (vlSelf->pic16f84_x1_rom__DOT__fd ? fgetc(VL_CVT_I_FP(vlSelf->pic16f84_x1_rom__DOT__fd)) : -1));
            while (((VL_GTS_III(32, 0x80U, vlSelf->pic16f84_x1_rom__DOT__i) 
                     & (0xaU != (IData)(vlSelf->pic16f84_x1_rom__DOT__char_in))) 
                    & (0xffU != (IData)(vlSelf->pic16f84_x1_rom__DOT__char_in)))) {
                vlSelf->pic16f84_x1_rom__DOT__line[(0x7fU 
                                                    & vlSelf->pic16f84_x1_rom__DOT__i)] 
                    = vlSelf->pic16f84_x1_rom__DOT__char_in;
                vlSelf->pic16f84_x1_rom__DOT__i = ((IData)(1U) 
                                                   + vlSelf->pic16f84_x1_rom__DOT__i);
                vlSelf->pic16f84_x1_rom__DOT__char_in 
                    = (0xffU & (vlSelf->pic16f84_x1_rom__DOT__fd ? fgetc(VL_CVT_I_FP(vlSelf->pic16f84_x1_rom__DOT__fd)) : -1));
            }
            vlSelf->pic16f84_x1_rom__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->pic16f84_x1_rom__DOT__j, vlSelf->pic16f84_x1_rom__DOT__i)) {
                if ((1U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__byte_count 
                        = ((0xfU & (IData)(vlSelf->pic16f84_x1_rom__DOT__byte_count)) 
                           | (0xf0U & ((((0x41U <= 
                                          vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                         & (0x46U >= 
                                            vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                         ? ((IData)(9U) 
                                            + vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)])
                                         : vlSelf->pic16f84_x1_rom__DOT__line
                                        [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                       << 4U)));
                } else if ((2U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__byte_count 
                        = ((0xf0U & (IData)(vlSelf->pic16f84_x1_rom__DOT__byte_count)) 
                           | (0xfU & (((0x41U <= vlSelf->pic16f84_x1_rom__DOT__line
                                        [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                       & (0x46U >= 
                                          vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                       ? ((IData)(9U) 
                                          + vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)])
                                       : vlSelf->pic16f84_x1_rom__DOT__line
                                      [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)])));
                } else if ((3U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__addr 
                        = ((0xfffU & (IData)(vlSelf->pic16f84_x1_rom__DOT__addr)) 
                           | (0xf000U & ((((0x41U <= 
                                            vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                           & (0x46U 
                                              >= vlSelf->pic16f84_x1_rom__DOT__line
                                              [(0x7fU 
                                                & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                           ? ((IData)(9U) 
                                              + vlSelf->pic16f84_x1_rom__DOT__line
                                              [(0x7fU 
                                                & vlSelf->pic16f84_x1_rom__DOT__j)])
                                           : vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                         << 0xcU)));
                } else if ((4U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__addr 
                        = ((0xf0ffU & (IData)(vlSelf->pic16f84_x1_rom__DOT__addr)) 
                           | (0xf00U & ((((0x41U <= 
                                           vlSelf->pic16f84_x1_rom__DOT__line
                                           [(0x7fU 
                                             & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                          & (0x46U 
                                             >= vlSelf->pic16f84_x1_rom__DOT__line
                                             [(0x7fU 
                                               & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                          ? ((IData)(9U) 
                                             + vlSelf->pic16f84_x1_rom__DOT__line
                                             [(0x7fU 
                                               & vlSelf->pic16f84_x1_rom__DOT__j)])
                                          : vlSelf->pic16f84_x1_rom__DOT__line
                                         [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                        << 8U)));
                } else if ((5U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__addr 
                        = ((0xff0fU & (IData)(vlSelf->pic16f84_x1_rom__DOT__addr)) 
                           | (0xf0U & ((((0x41U <= 
                                          vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                         & (0x46U >= 
                                            vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                         ? ((IData)(9U) 
                                            + vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)])
                                         : vlSelf->pic16f84_x1_rom__DOT__line
                                        [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                       << 4U)));
                } else if ((6U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__addr 
                        = ((0xfff0U & (IData)(vlSelf->pic16f84_x1_rom__DOT__addr)) 
                           | (0xfU & (((0x41U <= vlSelf->pic16f84_x1_rom__DOT__line
                                        [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                       & (0x46U >= 
                                          vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                       ? ((IData)(9U) 
                                          + vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)])
                                       : vlSelf->pic16f84_x1_rom__DOT__line
                                      [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)])));
                } else if ((7U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__record_type 
                        = ((0xfU & (IData)(vlSelf->pic16f84_x1_rom__DOT__record_type)) 
                           | (0xf0U & ((((0x41U <= 
                                          vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                         & (0x46U >= 
                                            vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                         ? ((IData)(9U) 
                                            + vlSelf->pic16f84_x1_rom__DOT__line
                                            [(0x7fU 
                                              & vlSelf->pic16f84_x1_rom__DOT__j)])
                                         : vlSelf->pic16f84_x1_rom__DOT__line
                                        [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                       << 4U)));
                } else if ((8U == vlSelf->pic16f84_x1_rom__DOT__j)) {
                    vlSelf->pic16f84_x1_rom__DOT__record_type 
                        = ((0xf0U & (IData)(vlSelf->pic16f84_x1_rom__DOT__record_type)) 
                           | (0xfU & (((0x41U <= vlSelf->pic16f84_x1_rom__DOT__line
                                        [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]) 
                                       & (0x46U >= 
                                          vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)]))
                                       ? ((IData)(9U) 
                                          + vlSelf->pic16f84_x1_rom__DOT__line
                                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)])
                                       : vlSelf->pic16f84_x1_rom__DOT__line
                                      [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__j)])));
                }
                vlSelf->pic16f84_x1_rom__DOT__j = ((IData)(1U) 
                                                   + vlSelf->pic16f84_x1_rom__DOT__j);
            }
            if (((0U == (IData)(vlSelf->pic16f84_x1_rom__DOT__record_type)) 
                 & (0U != (IData)(vlSelf->pic16f84_x1_rom__DOT__byte_count)))) {
                vlSelf->pic16f84_x1_rom__DOT__paddr 
                    = (0xffffU & ((IData)(vlSelf->pic16f84_x1_rom__DOT__addr) 
                                  >> 1U));
                vlSelf->pic16f84_x1_rom__DOT__count = 0U;
                vlSelf->pic16f84_x1_rom__DOT__k = 9U;
                while ((vlSelf->pic16f84_x1_rom__DOT__k 
                        <= ((IData)(8U) + ((IData)(vlSelf->pic16f84_x1_rom__DOT__byte_count) 
                                           << 1U)))) {
                    if (((0x41U <= vlSelf->pic16f84_x1_rom__DOT__line
                          [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__k)]) 
                         & (0x46U >= vlSelf->pic16f84_x1_rom__DOT__line
                            [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__k)]))) {
                        vlSelf->pic16f84_x1_rom__DOT__data 
                            = (0xfU & (vlSelf->pic16f84_x1_rom__DOT__line
                                       [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__k)] 
                                       - (IData)(7U)));
                    } else if (((0x30U <= vlSelf->pic16f84_x1_rom__DOT__line
                                 [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__k)]) 
                                & (0x39U >= vlSelf->pic16f84_x1_rom__DOT__line
                                   [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__k)]))) {
                        vlSelf->pic16f84_x1_rom__DOT__data 
                            = (0xfU & vlSelf->pic16f84_x1_rom__DOT__line
                               [(0x7fU & vlSelf->pic16f84_x1_rom__DOT__k)]);
                    }
                    if ((0U == vlSelf->pic16f84_x1_rom__DOT__count)) {
                        vlSelf->pic16f84_x1_rom__DOT__count 
                            = ((IData)(1U) + vlSelf->pic16f84_x1_rom__DOT__count);
                        vlSelf->pic16f84_x1_rom__DOT__low_byte 
                            = ((0xfU & (IData)(vlSelf->pic16f84_x1_rom__DOT__low_byte)) 
                               | ((IData)(vlSelf->pic16f84_x1_rom__DOT__data) 
                                  << 4U));
                    } else if ((1U == vlSelf->pic16f84_x1_rom__DOT__count)) {
                        vlSelf->pic16f84_x1_rom__DOT__count 
                            = ((IData)(1U) + vlSelf->pic16f84_x1_rom__DOT__count);
                        vlSelf->pic16f84_x1_rom__DOT__low_byte 
                            = ((0xf0U & (IData)(vlSelf->pic16f84_x1_rom__DOT__low_byte)) 
                               | (IData)(vlSelf->pic16f84_x1_rom__DOT__data));
                    } else if ((2U == vlSelf->pic16f84_x1_rom__DOT__count)) {
                        vlSelf->pic16f84_x1_rom__DOT__count 
                            = ((IData)(1U) + vlSelf->pic16f84_x1_rom__DOT__count);
                        vlSelf->pic16f84_x1_rom__DOT__upper_byte 
                            = ((0xfU & (IData)(vlSelf->pic16f84_x1_rom__DOT__upper_byte)) 
                               | ((IData)(vlSelf->pic16f84_x1_rom__DOT__data) 
                                  << 4U));
                    } else if (VL_UNLIKELY((3U == vlSelf->pic16f84_x1_rom__DOT__count))) {
                        vlSelf->pic16f84_x1_rom__DOT__upper_byte 
                            = ((0xf0U & (IData)(vlSelf->pic16f84_x1_rom__DOT__upper_byte)) 
                               | (IData)(vlSelf->pic16f84_x1_rom__DOT__data));
                        vlSelf->pic16f84_x1_rom__DOT__count = 0U;
                        vlSelf->pic16f84_x1_rom__DOT__prog_mem[(0x3ffU 
                                                                & (IData)(vlSelf->pic16f84_x1_rom__DOT__paddr))] 
                            = (((IData)(vlSelf->pic16f84_x1_rom__DOT__upper_byte) 
                                << 8U) | (IData)(vlSelf->pic16f84_x1_rom__DOT__low_byte));
                        VL_WRITEF("progmem[%x] = %x\n",
                                  16,vlSelf->pic16f84_x1_rom__DOT__paddr,
                                  16,vlSelf->pic16f84_x1_rom__DOT__prog_mem
                                  [(0x3ffU & (IData)(vlSelf->pic16f84_x1_rom__DOT__paddr))]);
                        vlSelf->pic16f84_x1_rom__DOT__paddr 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->pic16f84_x1_rom__DOT__paddr)));
                    }
                    vlSelf->pic16f84_x1_rom__DOT__k 
                        = ((IData)(1U) + vlSelf->pic16f84_x1_rom__DOT__k);
                }
            }
        }
        VL_FCLOSE_I(vlSelf->pic16f84_x1_rom__DOT__fd); vlSelf->pic16f84_x1_rom__DOT__fd = 0;
    }
}

VL_ATTR_COLD void Vpic16f84_x1_rom____eval_initial(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____eval_initial\n"); );
    // Body
    Vpic16f84_x1_rom____initial__TOP__0(vlSelf);
}

void Vpic16f84_x1_rom____combo__TOP__0(Vpic16f84_x1_rom_* vlSelf);

VL_ATTR_COLD void Vpic16f84_x1_rom____eval_settle(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____eval_settle\n"); );
    // Body
    Vpic16f84_x1_rom____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vpic16f84_x1_rom____final(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____final\n"); );
}

VL_ATTR_COLD void Vpic16f84_x1_rom____ctor_var_reset(Vpic16f84_x1_rom_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_x1_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_x1_rom____ctor_var_reset\n"); );
    // Body
    vlSelf->pc_in = VL_RAND_RESET_I(13);
    vlSelf->q1 = VL_RAND_RESET_I(1);
    vlSelf->nop_in = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(14);
    vlSelf->pic16f84_x1_rom__DOT__fd = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->pic16f84_x1_rom__DOT__line[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->pic16f84_x1_rom__DOT__char_in = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_x1_rom__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pic16f84_x1_rom__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->pic16f84_x1_rom__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->pic16f84_x1_rom__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->pic16f84_x1_rom__DOT__low_byte = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_x1_rom__DOT__upper_byte = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_x1_rom__DOT__addr = VL_RAND_RESET_I(16);
    vlSelf->pic16f84_x1_rom__DOT__paddr = VL_RAND_RESET_I(16);
    vlSelf->pic16f84_x1_rom__DOT__data = VL_RAND_RESET_I(4);
    vlSelf->pic16f84_x1_rom__DOT__byte_count = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_x1_rom__DOT__record_type = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->pic16f84_x1_rom__DOT__prog_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
}
