// Automatically generated C++ file on Sat Nov 30 20:50:31 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD pic16f84_clock.cpp Vpic16f84_clock*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vpic16f84_clock.h"

extern "C" __declspec(dllexport) void Destroy(Vpic16f84_clock *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void pic16f84_clock(Vpic16f84_clock **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vpic16f84_clock;
   (*instance)->clk = data[0].b;
   (*instance)->vdd = data[1].uc;
   (*instance)->vss = data[2].uc;
   (*instance)->mclr = data[3].b;

   (*instance)->eval();

   data[4].b = (*instance)->q1;
   data[5].b = (*instance)->q2;
   data[6].b = (*instance)->q3;
   data[7].b = (*instance)->q4;
   data[8].b = (*instance)->clk_out;
}
