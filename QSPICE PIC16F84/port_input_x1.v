// Automatically generated .v file on Sat Nov 30 22:00:14 2024
//

module port_input_x1 ( tris_stat, in, data_in ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [0:0] tris_stat;
   input reg [0:0] in;
   output reg [0:0] data_in;

   // Implement the module here
   always @(*) begin
      if (tris_stat == 1'b1) begin        //PORT IS INPUT
         data_in = in;
      end
      else if (tris_stat == 1'b0) begin   //PORT IS OUTPUT
         data_in = 1'b0;

      end

   end


endmodule
