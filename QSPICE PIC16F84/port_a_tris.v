// Automatically generated .v file on Fri Nov  8 14:59:39 2024
//

module port_a_tris ( tris_val, ra0, ra1, ra2, ra3, ra4 ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [4:0] tris_val;
   output reg [0:0] ra0;
   output reg [0:0] ra1;
   output reg [0:0] ra2;
   output reg [0:0] ra3;
   output reg [0:0] ra4;

   // Implement the module here
   assign ra0 = tris_val[0];
   assign ra1 = tris_val[1];
   assign ra2 = tris_val[2];
   assign ra3 = tris_val[3];
   assign ra4 = tris_val[4];

endmodule
