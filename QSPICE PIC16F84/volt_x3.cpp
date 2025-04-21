// Automatically generated C++ file on Sat Nov 30 22:12:03 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD volt_x3.cpp Vvolt_x3*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vvolt_x3.h"

extern "C" __declspec(dllexport) void Destroy(Vvolt_x3 *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void volt_x3(Vvolt_x3 **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vvolt_x3;
   (*instance)->vdd = data[0].uc;
   (*instance)->in = data[1].b;
   (*instance)->mclr = data[2].b;
   (*instance)->q1 = data[3].b;

   (*instance)->eval();

   data[4].uc = (*instance)->out;
}
