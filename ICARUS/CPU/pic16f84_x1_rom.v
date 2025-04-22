// Automatically generated .v file on Fri Nov  8 12:42:20 2024
//

module pic16f84_x1_rom ( pc_in, q1, nop_in, inst ) ;
// You will probably want to flush out the nature of these port declarations:
   input wire [12:0] pc_in;
   input wire [0:0] q1;
   input wire [0:0] nop_in;
   output reg [13:0] inst;

   // Implement the module here
   integer fd;                  // File descriptor
   reg [7:0] line[0:127];       // Fixed-size reg array for storing the line
   reg [7:0] char_in;           // To store each character
   integer i;                   // Loop index
   integer j;
   integer k;
   integer count;

   reg [7:0] low_byte, upper_byte;
   reg [15:0] addr;            //register to hold the address
   reg [15:0] paddr;
   reg [3:0] data;
   reg [7:0] byte_count, record_type;

   // Implement the module here
   initial begin
      fd = $fopen("SEVEN_SEGMENT.hex", "r");  // Open the file in read mode
    if (fd == 0) begin
      $display("Error: Could not open file.");
    end else begin
      // Read the file character-by-character
      while (!$feof(fd)) begin
        i = 0;
        // Loop to read a single line (up to the newline or EOF)
        char_in = $fgetc(fd);
        while (i < 128 && char_in != 8'h0A && char_in != 8'hFF) begin
          line[i] = char_in;  // Store the character in the array
          i = i + 1;
          char_in = $fgetc(fd);  // Read the next character
        end

        //Obtains the characters per line
        for (j = 0; j < i; j = j + 1) begin
          //GET BYTE COUNT
          if (j == 1) begin
            if(line[j] >= "A" && line[j] <= "F") begin
              byte_count [7:4] = line[j] + 9;
            end
            else begin
              byte_count [7:4] = line[j];
            end
          end
          else if (j == 2) begin
            if(line[j] >= "A" && line[j] <= "F") begin
              byte_count [3:0] = line[j] + 9;
            end
            else begin
              byte_count [3:0] = line[j];
            end
          end
          //GET ADDRESS
          else if (j == 3)begin
            if(line[j] >= "A" && line[j] <= "F") begin
              addr [15:12] = line[j] + 9;
            end
            else begin
              addr [15:12] = line[j];
            end
          end
          else if (j == 4)begin
            if(line[j] >= "A" && line[j] <= "F") begin
              addr [11:8] = line[j] + 9;
            end
            else begin
              addr [11:8] = line[j];
            end
          end
          else if (j == 5)begin
            if(line[j] >= "A" && line[j] <= "F") begin
              addr [7:4] = line[j] + 9;
            end
            else begin
              addr [7:4] = line[j];
            end
          end
          else if (j == 6)begin
            if(line[j] >= "A" && line[j] <= "F") begin
              addr [3:0] = line[j] + 9;
            end
            else begin
              addr [3:0] = line[j];
            end
          end
          //GET RECORD TYPE
          else if (j == 7)begin
            if(line[j] >= "A" && line[j] <= "F") begin
              record_type [7:4] = line[j] + 9;
            end
            else begin
              record_type [7:4] = line[j];
            end
          end
          else if (j == 8)begin
            if(line[j] >= "A" && line[j] <= "F") begin
              record_type [3:0] = line[j] + 9;
            end
            else begin
              record_type [3:0] = line[j];
            end
          end

        end

        // GET DATA
        if (record_type == 8'h00 && byte_count != 8'h00) begin
          paddr = addr/2;
          count = 0;
          //ACCESS ONE CHARACTER AT A TIME
          for (k = 9; k <= (byte_count*2)+8; k = k+1) begin
            if(line[k] >= "A" && line[k] <= "F") begin
              // SINCE "A" - "F" CHARACTERS HAVE A DECIMAL VALUE FROM 65-70
              // SO WE SUBTRACT IT WITH 55 TO GET THE VALUE OF HEX IN DECIMAL
              // EXAMPLE:
              //     "F"      = 70 in decimal
              //     70 - 55  = 15 in decimal
              //     15 in HEX would equate to F
              data = line[k] - 55;

            end
            else if (line[k] >= "0" && line[k] <= "9") begin
              // SINCE "0" - "9" CHARACTERS HAVE A DECIMAL VALUE FROM 48-57
              // SO WE SUBTRACT IT WITH 55 TO GET THE VALUE OF HEX IN DECIMAL
              // EXAMPLE:
              //     "9"      = 57 in decimal
              //     57 - 48  = 9 in decimal
              //     9 in HEX would equate to 9
              data = line[k] - 48;

            end

            // EXTRACTS THE UPPER BYTE AND LOWER BYTE OF THE 14-BIT INSTRUCTIONS
            if(count == 0) begin
              low_byte [7:4] = data;
              count = count + 1;
            end
            else if (count == 1) begin
              low_byte [3:0] = data;
              count = count + 1;
            end
            else if (count == 2) begin
              upper_byte [7:4] = data;
              count = count + 1;
            end
            else if (count == 3) begin
              upper_byte [3:0] = data;
              count = 0;
              prog_mem [paddr] = {upper_byte, low_byte};
              $display("progmem[%h] = %h", paddr, prog_mem[paddr]);
              paddr = paddr + 1'b1;
            end

          end

        end

        // Stop if EOF (8'hFF) is detected
        if (char_in == 8'hFF) begin
          //disable end_of_file;
        end
        //end_of_file: ;
      end

      $fclose(fd);  // Close the file
    end

  end

  reg [15:0] prog_mem [0:1023];
  reg [13:0] IR;


  always @(*) begin
      if (q1) begin
         IR = prog_mem[pc_in][13:0];

         if(nop_in != 1'b0) begin
            inst = prog_mem[pc_in - 1'b1][13:0];
         end
         else begin
            inst = 14'h0000;
         end

      end

   end




endmodule
