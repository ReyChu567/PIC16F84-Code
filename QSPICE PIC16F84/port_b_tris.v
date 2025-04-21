// Automatically generated .v file on Sat Nov 30 21:19:51 2024
//

module port_b_tris ( tris_val, rb0, rb1, rb2, rb3, rb4, rb5, rb6, rb7 ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [7:0] tris_val;
   output reg [0:0] rb0;
   output reg [0:0] rb1;
   output reg [0:0] rb2;
   output reg [0:0] rb3;
   output reg [0:0] rb4;
   output reg [0:0] rb5;
   output reg [0:0] rb6;
   output reg [0:0] rb7;

   // Implement the module here
   assign rb0 = tris_val[0];
   assign rb1 = tris_val[1];
   assign rb2 = tris_val[2];
   assign rb3 = tris_val[3];
   assign rb4 = tris_val[4];
   assign rb5 = tris_val[5];
   assign rb6 = tris_val[6];
   assign rb7 = tris_val[7];

endmodule
