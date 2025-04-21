// Automatically generated C++ file on Sat Nov 30 21:21:46 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD datain_portb.cpp Vdatain_portb*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vdatain_portb.h"

extern "C" __declspec(dllexport) void Destroy(Vdatain_portb *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void datain_portb(Vdatain_portb **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vdatain_portb;
   (*instance)->rb0 = data[0].b;
   (*instance)->rb1 = data[1].b;
   (*instance)->rb2 = data[2].b;
   (*instance)->rb3 = data[3].b;
   (*instance)->rb4 = data[4].b;
   (*instance)->rb5 = data[5].b;
   (*instance)->rb6 = data[6].b;
   (*instance)->rb7 = data[7].b;

   (*instance)->eval();

   data[8].uc = (*instance)->data_out;
}
