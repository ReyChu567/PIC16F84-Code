// Automatically generated .v file on Mon Apr  7 22:09:25 2025
//

module port_out_x1 ( tris_stat, data_out, out ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [0:0] tris_stat;
   input reg [0:0] data_out;
   output reg [0:0] out;

   // Implement the module here
   always @(*) begin
      if (tris_stat == 1'b0) begin        //PORT IS OUTPUT
         out = data_out;
      end
      else if (tris_stat == 1'b1) begin   //PORT IS INPUT
         out = 1'b0;

      end

   end

endmodule
