// Automatically generated .v file on Sat Nov 30 21:12:25 2024
//

module datainporta ( ra0, ra1, ra2, ra3, ra4, data_out ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [0:0] ra0;
   input reg [0:0] ra1;
   input reg [0:0] ra2;
   input reg [0:0] ra3;
   input reg [0:0] ra4;
   output reg [4:0] data_out;

   // Implement the module here
   assign data_out[0] = ra0;
   assign data_out[1] = ra1;
   assign data_out[2] = ra2;
   assign data_out[3] = ra3;
   assign data_out[4] = ra4;

endmodule
