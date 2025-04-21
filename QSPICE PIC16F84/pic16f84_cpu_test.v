// Automatically generated .v file on Mon Nov 25 00:39:08 2024
//

module pic16f84_cpu_test (z, q1, q2, q3, q4, op_code, port_a_data_in, port_b_data_in, mclr, pc_out, nop_out, port_a_tris, port_a_data_out, port_b_tris, port_b_data_out ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [0:0] q1;
   input reg [0:0] q2;
   input reg [0:0] q3;
   input reg [0:0] q4;
   input reg [13:0] op_code;
   input reg [4:0] port_a_data_in;
   input reg [7:0] port_b_data_in;
   input reg [0:0] mclr;
   output reg [12:0] pc_out;
   output reg [0:0] nop_out;
   output reg [4:0] port_a_tris;
   output reg [4:0] port_a_data_out;
   output reg [7:0] port_b_tris;
   output reg [7:0] port_b_data_out;

   output reg [0:0] z;

   // Implement the module here
   // BYTE-ORIENTED FILE REGISTER OPERATIONS
   reg ADDWF, ANDWF, CLR, COMF, DECF, INCF, IORWF, MOVF, MOVWF, RLF, RRF, SUBWF, SWAPF, XORWF, DECFSZ, INCFSZ, NOP;
   //BIT-ORIENTED FILE REGISTER OPERATIONS
   reg BCF, BSF, BTFSC, BTFSS;
   //LITERAL AND CONTROL OPERATIONS
   reg XORLW, ANDLW, IORLW, ADDLW, SUBLW, MOVLW, GOTO, CALL, CLRWDT, RETURN, RETFIE, RETLW, SLEEP;

   // 0-127 BANK 0 & 128-255 BANK 1
   reg [7:0] data_memory [0:255];

   // Define the special function registers (SFR)
   localparam INDF     = 8'h00;
   localparam TMR0     = 8'h01;
   localparam OPTION   = 8'h81;
   localparam PCL      = 8'h02;
   localparam STATUS   = 8'h03;
   localparam FSR      = 8'h04;
   localparam PORTA    = 8'h05;
   localparam TRISA    = 8'h85;
   localparam PORTB    = 8'h06;
   localparam TRISB    = 8'h86;
   localparam EEDATA   = 8'h08;
   localparam EECON1   = 8'h88;
   localparam EEADR    = 8'h09;
   localparam EECON2   = 8'h89;
   localparam PCLATH   = 8'h0A;
   localparam INTCON   = 8'h0B;


//=========================================================================
    initial begin                               // Value on Power-on Reset
    // u = unchanged, x = unknown, - = unimplemented bit read as '0', q = value depends on condition.

        data_memory[INDF]           = 8'h00;        // ---- ----
        //data_memory[TMR0]                         // xxxx xxxx
        data_memory[OPTION]         = 8'hFF;        // 1111 1111
        data_memory[PCL]            = 8'h00;        // 0000 0000
        data_memory[STATUS][7:3]    = 5'b00011;     // 0001 1xxx
        //data_memory[FSR]                          // xxxx xxxx
        data_memory[PORTA][7:5]     = 3'b000;       // ---x xxxx
        //data_memory[PORTB]                        // xxxx xxxx
        data_memory[TRISA]          = 8'b00011111;  // ---1 1111
        data_memory[TRISB]          = 8'hFF;        // 1111 1111
        //data_memory[EEDATA]                       // xxxx xxxx
        data_memory[EECON1][7:4]    = 4'b0000;      // ---0 x000
        data_memory[EECON1][2:0]    = 3'b000;
        //data_memory[EEADR]                        // xxxx xxxx
        data_memory[EECON2]         = 8'h00;        // ---- ----
        data_memory[PCLATH]         = 8'h00;        // ---0 0000
        data_memory[INTCON][7:1]    = 7'b0000000;   // 0000 000x


        // (IF nop_out = 0 "A NOP will  executed" if nop_out = 1 "The NEXT INST will  be executed")
        nop_out = 1'b0;

    end
//=================================================================

    // ADDITIONAL REGISTERS
    reg [8:0] c_out              = 9'h000;                // For addition/subtraction carry out
    reg tmp_cout                 = 1'b0;
    reg tmp_msbF                 = 1'b0;
    reg [7:0] ALU_OUT            = 8'h00;                 // register to store the result

    reg [2:0] b                  = 3'h0;                  // 3-bit bit address
    reg d                        = 1'b0;                  // destination bit 0 => W, 1 => f
    reg bit_b                    = 1'b0;                  // bit-b used for BTFSS and BTFSC

    reg [7:0] F_REG              = 8'h00;
    reg [7:0] W_REG              = 8'h00;
    reg [7:0] K_LITERAL          = 8'h00;
    reg [10:0] CALLnGOTO_LITERAL = 11'h000;
    reg [10:0] GOTO_CALL_LIT     = 11'h000;

    reg [7:0] F_ADDR             = 8'h00;                  // 7-bit file register addresS
    reg [12:0] PC                = 13'h000 ;

    reg [7:0] bank1              = 8'h00;
    reg [7:0] bank0              = 8'h00;

//======STACK OPERATIONS================
    reg [12:0] STACK [0:7] /*verilator split_var*/;        // 8-level stack with 13-bit wide entries
    reg [2:0] sp = 3'b000 ;                               // Stack pointer (3 bits to count 0 to 7)
    reg [2:0] sp_out = 3'b000;

   // Implement the module here

   always @(*) begin

      if (mclr == 1'b0) begin
         //RESET CONDITIONS
         data_memory[INDF]           = 8'h00;        // ---- ----
         data_memory[PCL]            = 8'h00;        // 0000 0000
         data_memory[STATUS][7:5]    = 3'b000;       // 000q quuu
         data_memory[PCLATH]         = 8'h00;        // ---0 0000
         data_memory[INTCON][7:1]    = 7'b0000000;   // 0000 000u
         data_memory[OPTION]         = 8'hFF;        // 1111 1111
         data_memory[TRISA]          = 8'b00011111;  // ---1 1111
         data_memory[TRISB]          = 8'hFF;        // 1111 1111
         data_memory[EECON1][7:4]    = 4'b0000;      // ---0 q000
         data_memory[EECON1][2:0]    = 3'b000;
         data_memory[EECON2]         = 8'h00;        // ---- ----
         data_memory[INTCON][7:1]    = 7'b0000000;   // 0000 000u

         nop_out                     = 1'b0;
         c_out                       = 9'h000;                // For addition/subtraction carry out
         tmp_cout                    = 1'b0;
         tmp_msbF                    = 1'b0;
         ALU_OUT                     = 8'h00;                 // register to store the result

         b                           = 3'h0;                  // 3-bit bit address
         d                           = 1'b0;                  // destination bit 0 => W, 1 => f
         bit_b                       = 1'b0;                  // bit-b used for BTFSS and BTFSC

         F_REG                       = 8'h00;
         K_LITERAL                   = 8'h00;
         CALLnGOTO_LITERAL           = 11'h000;
         GOTO_CALL_LIT               = 11'h000;

         F_ADDR                      = 8'h00;                  // 7-bit file register addresS
         PC                          = 13'h000 ;

         bank1                       = 8'h00;
         bank0                       = 8'h00;

         sp                          = 3'b000 ;                // Stack pointer (3 bits to count 0 to 7)
         sp_out                      = 3'b000;

      end
      else begin
         if ({q4,q3,q2,q1} == 4'b0001) begin

            PC = {data_memory[PCLATH][4:0], data_memory[PCL]} ;
            pc_out = PC;                                        //pc_out passes its value to the ROM

            PC = PC + 1'b1;                                     //PC INCREMENTS EVERY Q1

            // TRIS A
            port_a_tris = data_memory[TRISA];
            port_b_tris = data_memory[TRISB];

            // INPUT
            if(data_memory[TRISA][0] == 1'b1)begin
               data_memory[PORTA][0]= port_a_data_in[0];
            end
            if(data_memory[TRISA][1]  == 1'b1)begin
               data_memory[PORTA][1]= port_a_data_in[1];
            end
            if(data_memory[TRISA][2]  == 1'b1)begin
               data_memory[PORTA][2]= port_a_data_in[2];
            end
            if(data_memory[TRISA][3]  == 1'b1)begin
               data_memory[PORTA][3]= port_a_data_in[3];
            end
            if(data_memory[TRISA][4]  == 1'b1)begin
               data_memory[PORTA][4]= port_a_data_in[4];
            end

            if(data_memory[TRISB][0] == 1'b1)begin
               data_memory[PORTB][0]= port_b_data_in[0];
            end
            if(data_memory[TRISB][1] == 1'b1)begin
               data_memory[PORTB][1]= port_b_data_in[1];
            end
            if(data_memory[TRISB][2] == 1'b1)begin
               data_memory[PORTB][2]= port_b_data_in[2];
            end
            if(data_memory[TRISB][3] == 1'b1)begin
               data_memory[PORTB][3]= port_b_data_in[3];
            end
            if(data_memory[TRISB][4] == 1'b1)begin
               data_memory[PORTB][4]= port_b_data_in[4];
            end
            if(data_memory[TRISB][5] == 1'b1)begin
               data_memory[PORTB][5]= port_b_data_in[5];
            end
            if(data_memory[TRISB][6] == 1'b1)begin
               data_memory[PORTB][6]= port_b_data_in[6];
            end
            if(data_memory[TRISB][7] == 1'b1)begin
               data_memory[PORTB][7]= port_b_data_in[7];
            end

            //$display("PORTA = %h    %b", data_memory[PORTA], data_memory[PORTA]);

            //DECODE
            //BYTE-ORIENTED FILE REGISTER OPERATIONS
            ADDWF = (op_code[13:8] == 6'b000111)    ? 1'b1 : 1'b0;
            SUBWF = (op_code[13:8] == 6'b000010)    ? 1'b1 : 1'b0;
            ANDWF = (op_code[13:8] == 6'b000101)    ? 1'b1 : 1'b0;
            COMF  = (op_code[13:8] == 6'b001001)    ? 1'b1 : 1'b0;
            DECF  = (op_code[13:8] == 6'b000011)    ? 1'b1 : 1'b0;
            INCF  = (op_code[13:8] == 6'b001010)    ? 1'b1 : 1'b0;
            IORWF = (op_code[13:8] == 6'b000100)    ? 1'b1 : 1'b0;
            MOVF  = (op_code[13:8] == 6'b001000)    ? 1'b1 : 1'b0;
            MOVWF = (op_code[13:7] == 7'b0000001)   ? 1'b1 : 1'b0;
            RLF   = (op_code[13:8] == 6'b001101)    ? 1'b1 : 1'b0;
            RRF   = (op_code[13:8] == 6'b001100)    ? 1'b1 : 1'b0;
            SWAPF = (op_code[13:8] == 6'b001110)    ? 1'b1 : 1'b0;
            CLR   = (op_code[13:8] == 6'b000001)    ? 1'b1 : 1'b0;
            XORWF = (op_code[13:8] == 6'b000110)    ? 1'b1 : 1'b0;
            NOP   = (op_code[13:7] == 7'h00 && op_code[4:0] == 5'h00)  ? 1'b1 : 1'b0;
            DECFSZ = (op_code[13:8] == 6'b001011)   ? 1'b1 : 1'b0;
            INCFSZ = (op_code[13:8] == 6'b001111)   ? 1'b1 : 1'b0;

            //BIT-ORIENTED FILE REGISTER OPERATIONS
            BCF   = (op_code[13:10] == 4'b0100)    ? 1'b1 : 1'b0;
            BSF   = (op_code[13:10] == 4'b0101)    ? 1'b1 : 1'b0;
            BTFSC = (op_code[13:10] == 4'b0110)    ? 1'b1 : 1'b0;
            BTFSS = (op_code[13:10] == 4'b0111)    ? 1'b1 : 1'b0;

            //LITERAL AND CONTROL OPERATIONS
            ADDLW = (op_code[13:9] == 5'b11111)    ? 1'b1 : 1'b0;
            ANDLW = (op_code[13:8] == 6'b111001)   ? 1'b1 : 1'b0;
            IORLW = (op_code[13:8] == 6'b111000)   ? 1'b1 : 1'b0;
            MOVLW = (op_code[13:10] == 4'b1100)    ? 1'b1 : 1'b0;
            SUBLW = (op_code[13:9] == 5'b11110)    ? 1'b1 : 1'b0;
            XORLW = (op_code[13:8] == 6'b111010)   ? 1'b1 : 1'b0;
            GOTO  = (op_code[13:11] == 3'b101)     ? 1'b1 : 1'b0;
            CALL  = (op_code[13:11] == 3'b100)     ? 1'b1 : 1'b0;
            RETURN = (op_code == 14'h0008)         ? 1'b1 : 1'b0;
            CLRWDT = (op_code[13:0] == 14'h0064)   ? 1'b1 : 1'b0;
            RETFIE = (op_code[13:0] == 14'h0009)   ? 1'b1 : 1'b0;
            RETLW  = (op_code[13:10] == 4'b1101)   ? 1'b1 : 1'b0;
            SLEEP  = (op_code[13:0] == 14'h0063)   ? 1'b1 : 1'b0;

            if ((ADDWF || SUBWF || ANDWF || COMF || DECF || INCF || IORWF || MOVF || MOVWF || SWAPF || CLR || XORWF || DECFSZ || INCFSZ || RLF || RRF) == 1'b1) begin
               d = op_code[7];                     // destination bit 0 => W, 1 => f
               F_ADDR = {1'b0, op_code[6:0]};      // 7-bit file register address

            end
            else if ((BCF || BSF || BTFSC || BTFSS) == 1'b1) begin
               b = op_code[9:7];                   // 3-bit address
               F_ADDR = {1'b0, op_code[6:0]};      // 7-bit file register address

            end

            // IF THE STATUS REG BIT 5 IS 1 THEN ACCESS BANK 1 [128 - 255]
            if(data_memory[STATUS][5] == 1'b1) begin
               F_ADDR = F_ADDR + 8'h80;
               bank1 = F_ADDR;
            end

            //IF THE STATUS REG BIT 5 IS 0 THEN ACCESS BANK 0 [0 - 127]
            else if(data_memory[STATUS][5] == 1'b0) begin
               bank0 = F_ADDR;
            end

            //the value of the SFRegister at these addresses(bank 0) will be stored to the same registers at bank 1
            if (F_ADDR == 8'h00 || F_ADDR == 8'h02 || F_ADDR == 8'h03 || F_ADDR == 8'h04 || F_ADDR == 8'h0A || F_ADDR == 8'h0B ) begin
               bank1 = F_ADDR + 8'h80;
               data_memory[bank1] = data_memory[F_ADDR];
            end

            //the value of the register at these addresses(bank 1) will be stored to the same registers at bank 0
            if (F_ADDR == 8'h80 || F_ADDR == 8'h82 || F_ADDR == 8'h83 || F_ADDR == 8'h84 || F_ADDR == 8'h8A || F_ADDR == 8'h8B ) begin
               bank0 = F_ADDR - 8'h80;
               data_memory[bank0] = data_memory[F_ADDR];
            end

            //the value of the registers with addresses from 0C - 4F(bank 0) will be stored in bank 1
            if (F_ADDR >= 8'h0C && F_ADDR <= 8'h4F) begin
               bank1 = F_ADDR + 8'h80;
               data_memory[bank1] = data_memory[F_ADDR];
            end

            //the value of the registers with addresses from 8C - CF(bank 1) will be stored in bank 0
            if (F_ADDR >= 8'h8C && F_ADDR <= 8'hCF) begin
               bank0 = F_ADDR - 8'h80;
               data_memory[bank0] = data_memory[F_ADDR];
            end

         end
         else if ({q4,q3,q2,q1} == 4'b0010) begin
            {data_memory[PCLATH][4:0], data_memory[PCL]} = PC;  //updates the registers into the PC's current value

            //READ 'f' OR LITERAL
            if ((F_ADDR == 8'h05) || (F_ADDR == 8'h85) ) begin //if PORTA reg is being used
               if ((ADDWF || SUBWF || ANDWF || COMF || DECF || INCF || IORWF || MOVF || MOVWF || SWAPF || CLR || XORWF || DECFSZ || INCFSZ) == 1'b1) begin
                  F_REG = {3'b000, data_memory[F_ADDR][4:0]};
               end
               else if (RLF) begin
                  F_REG = {3'b000, data_memory[F_ADDR][4:0]};
                  tmp_cout = data_memory[STATUS][0];
                  tmp_msbF = F_REG[7];
               end
               else if (RRF) begin
                  F_REG = {3'b000, data_memory[F_ADDR][4:0]};
                  tmp_cout = data_memory[STATUS][0];
                  tmp_msbF = F_REG[0];
               end
               else if ((BCF || BSF || BTFSC || BTFSS) == 1'b1) begin
                  F_REG = data_memory[F_ADDR];
               end

            end
            else begin
               if ((ADDWF || SUBWF || ANDWF || COMF || DECF || INCF || IORWF || MOVF || MOVWF || SWAPF || CLR || XORWF || DECFSZ || INCFSZ) == 1'b1) begin
                  F_REG = data_memory[F_ADDR];
               end
               else if (RLF) begin
                  F_REG = data_memory[F_ADDR];
                  tmp_cout = data_memory[STATUS][0];
                  tmp_msbF = F_REG[7];
               end
               else if (RRF) begin
                  F_REG = data_memory[F_ADDR];
                  tmp_cout = data_memory[STATUS][0];
                  tmp_msbF = F_REG[0];
               end
               else if ((BCF || BSF || BTFSC || BTFSS) == 1'b1) begin
                  F_REG = data_memory[F_ADDR];
               end

            end
            if ((ADDLW || ANDLW || IORLW || MOVLW || SUBLW || XORLW || RETLW) == 1'b1) begin
               K_LITERAL = op_code[7:0];
            end
            else if (GOTO) begin
               CALLnGOTO_LITERAL = op_code[10:0];      // READ LITERAL K
            end
            else if (CALL) begin
               CALLnGOTO_LITERAL = op_code[10:0];      // READ LITERAL K

               STACK[sp] = PC - 1;                     // return address (PC+1) is pushed onto the stack
               sp_out = sp + 1;                        // Increment stack pointer

            end
            else if (NOP) begin
               //NO OPERATION
            end

         end
         else if ({q4,q3,q2,q1} == 4'b0100) begin
            //PROCESS DATA

            if (ADDWF) begin
               c_out = W_REG + F_REG;
               ALU_OUT = c_out[7:0];
            end
            else if (SUBWF) begin
               ALU_OUT = F_REG - W_REG; // No borrow, normal subtraction
            end
            else if (ANDWF) begin
               ALU_OUT = W_REG & F_REG;
            end
            else if (COMF) begin
               ALU_OUT = ~F_REG;
            end
            else if ((DECF || DECFSZ) == 1'b1) begin
               ALU_OUT = F_REG - 1'b1;
            end
            else if ((INCF || INCFSZ) == 1'b1) begin
               ALU_OUT = F_REG + 1'b1;
            end
            else if (IORWF) begin
               ALU_OUT = W_REG | F_REG;
            end
            else if (MOVF) begin
               ALU_OUT = F_REG;
            end
            else if (MOVWF) begin
               ALU_OUT = W_REG;
            end
            else if (RLF) begin
               ALU_OUT = F_REG << 1;
               ALU_OUT[0] = tmp_cout;
            end
            else if (RRF) begin
               ALU_OUT =  F_REG >> 1;
               ALU_OUT[7] = tmp_cout;
            end
            else if (SWAPF) begin
               ALU_OUT = {F_REG[3:0], F_REG[7:4]};
            end
            else if (CLR) begin
               ALU_OUT = 8'b00000000;
            end
            else if (XORWF) begin
               ALU_OUT = W_REG ^ F_REG;
            end
            else if (ADDLW) begin
               c_out = W_REG + K_LITERAL;
               ALU_OUT = c_out[7:0];
            end
            else if (ANDLW) begin
               ALU_OUT = W_REG & K_LITERAL;
            end
            else if (IORLW) begin
               ALU_OUT = W_REG | K_LITERAL;
            end
            else if (MOVLW) begin
               ALU_OUT = K_LITERAL;
            end
            else if (SUBLW) begin
               ALU_OUT = K_LITERAL - W_REG;
            end
            else if (XORLW) begin
               ALU_OUT = W_REG ^ K_LITERAL;
            end
            else if (BSF) begin
               ALU_OUT[b] = 1'b1;
            end
            else if (BCF) begin
               ALU_OUT[b] = 1'b0;
            end
            else if ((BTFSC || BTFSS) == 1'b1) begin
               bit_b = data_memory[F_ADDR][b];
            end
            else if (NOP) begin
               //NO OPERATION
            end
            else if (RETFIE) begin
               data_memory[INTCON][7] = 1'b1;
            end
            else if (CALL) begin
               sp = sp_out;
               // Wrap around the stack pointer when it reaches 8
               if(sp == 3'b111) begin
                  sp = 3'b000;        // Circular buffer behavior
               end
               GOTO_CALL_LIT     = CALLnGOTO_LITERAL;
            end
            else if (GOTO) begin
               GOTO_CALL_LIT     = CALLnGOTO_LITERAL;
            end

         end
         else if ({q4,q3,q2,q1} == 4'b1000) begin
            //WRITE

            if ((ADDWF || SUBWF || ANDWF || COMF || DECF || INCF || IORWF || MOVF || MOVWF || RLF || RRF || SWAPF || CLR || XORWF) == 1'b1) begin
               if (d == 1'b0) begin     // RESULT to W_REG
                  if((F_ADDR == 8'h05) || (F_ADDR == 8'h85)) begin
                     W_REG = {3'b000,ALU_OUT[4:0]};
                  end
                  else begin
                     W_REG = ALU_OUT;
                  end
               end
               else if (d == 1'b1)begin // RESULT to F

                  if((F_ADDR == 8'h05) || (F_ADDR == 8'h85)) begin
                     data_memory[F_ADDR] = {3'b000, ALU_OUT[4:0]};
                  end
                  else begin
                     data_memory[F_ADDR] = ALU_OUT;
                  end

                  if (F_ADDR == 8'h03) begin
                  // clear the upper-three bits and set the Z bit.
                  // This leaves the STATUS register as 000u u1uu (where u = unchanged).
                     data_memory[STATUS][7:5] = ALU_OUT[7:5];
                     data_memory[STATUS][2]   = 1'b1;
                  end
               end

               nop_out = 1'b1;
            end
            else if ((DECFSZ || INCFSZ) == 1'b1) begin
               if (d == 1'b0) begin     //STORE TO W REGISTER

                  if((F_ADDR == 8'h05) || (F_ADDR == 8'h85)) begin
                     W_REG = {3'b000,ALU_OUT[4:0]};
                  end
                  else begin
                     W_REG = ALU_OUT;
                  end

                  if (W_REG == 8'h00 ) begin
                     //IF RESULT IS 0 THEN SKIP  [PC + 2]
                     nop_out = 1'b0;   // NEXT OPERATION IS NOP
                  end
                  else begin//IF RESULT IS 1 THEN
                     //IF RESULT IS 1 THEN THE NEXT INTRUCTION IS EXECUTED [PC + 1]
                     nop_out = 1'b1;
                  end

               end
               else if (d == 1'b1)begin    // STORE TO F REGISTER
                  if((F_ADDR == 8'h05) || (F_ADDR == 8'h85)) begin
                     data_memory[F_ADDR] = {3'b000, ALU_OUT[4:0]};
                  end
                  else begin
                     data_memory[F_ADDR] = ALU_OUT;
                  end

                  if (data_memory[F_ADDR] == 8'h00 ) begin
                     //IF RESULT IS 0 THEN SKIP  [PC + 2]
                     nop_out = 1'b0;   // NEXT OPERATION IS NOP
                  end
                  else begin//IF RESULT IS 1 THEN
                     //IF RESULT IS 1 THEN THE NEXT INTRUCTION IS EXECUTED [PC + 1]
                     nop_out = 1'b1;
                  end

               end
            end
            else if (BCF == 1'b1) begin
               data_memory[F_ADDR][b] = ALU_OUT[b];

               nop_out = 1'b1;

            end
            else if (BSF == 1'b1) begin
               data_memory[F_ADDR][b] = ALU_OUT[b];

               nop_out = 1'b1;
            end

            else if ((ADDLW || ANDLW || MOVLW || SUBLW || IORLW || XORLW) == 1'b1) begin
               W_REG = ALU_OUT;

               nop_out = 1'b1;

            end
            else if (BTFSC) begin
               if (bit_b == 1'b1) begin
                  //If bit ’b’ in register ’f’ is ’1’ then the next instruction is executed.
                  nop_out = 1'b1;
               end
               else begin
                  //If bit ’b’, in register ’f’, is ’0’ then the next instruction is discarded,
                  //and a NOP is executed instead
                  nop_out = 1'b0;
               end
            end
            else if (BTFSS) begin
               if (bit_b == 1'b0) begin
                  // If bit ’b’ in register ’f’ is ’0’ then the next instruction is executed.
                  nop_out = 1'b1;
               end
               else begin
                  // If bit ’b’ is ’1’, then the next instruction is discarded and a NOP is executed
                  nop_out = 1'b0;       //NEXT OPERATION IS NOP
               end
            end
            else if ((GOTO || CALL) == 1'b1) begin      // WRITE TO PC
               data_memory[PCLATH][2:0] = CALLnGOTO_LITERAL[10:8];
               data_memory[PCL] = CALLnGOTO_LITERAL[7:0];

               nop_out = 1'b0;       //NEXT OPERATION IS NOP
            end
            else if ((RETURN || RETFIE) == 1'b1) begin
               // Decrement stack pointer, wrap around if needed
               if (sp == 3'b000) begin
                  sp = 3'b111;    // Wrap around to the last stack position
               end else begin
                  sp_out = sp - 1;
               end
               sp = sp_out;
               {data_memory[PCLATH][4:0], data_memory[PCL]} = STACK[sp]; // Output the top of the stack

               nop_out = 1'b0;       //NEXT OPERATION IS NOP
            end
            else if (CLRWDT) begin
               // 00h ? WDT
               // 0 ? WDT prescaler,
               data_memory[STATUS][4] = 1'b1;  // 1 ? TO
               data_memory[STATUS][3] = 1'b1;  // 1 ? PD

               nop_out = 1'b1;
            end
            else if (RETLW) begin
               W_REG = K_LITERAL;
               if (sp == 3'b000) begin
                  sp = 3'b111;
               end else begin
                  sp_out = sp - 1;
               end
               sp = sp_out;
               {data_memory[PCLATH][4:0], data_memory[PCL]} = STACK[sp];

               nop_out = 1'b0;
            end
            else if (SLEEP) begin
               // 00H -> WDT
               // 0 -> WDT PRESCALER
               // data_memory[STATUS][4] = 1'b1;  // 1 -> TO
               // data_memory[STATUS][3] = 1'b0;  // 0 -> PD
            end
            else if (NOP) begin
               nop_out = 1'b1;       //PROCEED TO NEXT INSTRUCTION
            end

   //=================CARRY FLAG BIT=============================================
            if ((ADDWF || ADDLW) == 1'b1) begin              //CARRY FLAG FOR ADDWF and ADDLW
               data_memory[STATUS] [0] = c_out[8];
            end
            else if (SUBWF == 1'b1) begin                    //CARRY FLAG FOR SUBWF
               if (W_REG > F_REG) begin
                  data_memory[STATUS][0] = 1'b0;           // Set C_OUT since no borrow occurred
               end else begin
                  data_memory[STATUS][0] = 1'b1;           // Clear C_OUT since borrow occurred
               end
            end
            else if ((RLF || RRF) == 1'b1) begin
               data_memory[STATUS][0] = tmp_msbF;
            end
            else if (SUBLW == 1'b1) begin
               if (W_REG > K_LITERAL) begin
                  data_memory[STATUS][0] = 1'b0;           // Clear C_OUT since no borrow occurred
               end else begin
                  data_memory[STATUS][0] = 1'b1;           // Set C_OUT since borrow occurred
               end
            end
   //=============================================================================

   //===================DC AND BORROW OUT BIT=====================================
            if (ADDWF == 1'b1) begin
               if ((W_REG[3:0] + F_REG[3:0]) > 4'b1111) begin
                  data_memory[STATUS] [1] = 1'b1;
               end
               else begin
                  data_memory[STATUS] [1] = 1'b0;
               end
            end
            if (SUBWF == 1'b1) begin
               if (F_REG[3:0] < W_REG[3:0]) begin
                  data_memory[STATUS] [1] = 1'b0;
               end
               else begin
                  data_memory[STATUS] [1] = 1'b1;
               end
            end
            if (ADDLW == 1'b1) begin
               if ((W_REG[3:0] + K_LITERAL[3:0]) > 4'b1111) begin
                  data_memory[STATUS] [1] = 1'b1;
               end
               else begin
                  data_memory[STATUS] [1] = 1'b0;
               end
            end
            if (SUBLW == 1'b1) begin
               if (K_LITERAL[3:0] < W_REG[3:0]) begin
                  data_memory[STATUS] [1] = 1'b0;
               end
               else begin
                  data_memory[STATUS] [1] = 1'b1;
               end
            end
//=============================================================================

//===================ZERO FLAG BIT=============================================
            if((ADDWF|| SUBWF || ANDWF || COMF || DECF || INCF || MOVF || XORWF || CLR) == 1'b1)  begin
               if (d == 1'b0 && W_REG == 8'b00000000) begin
                  data_memory[STATUS][2] = 1'b1;
               end
               else if (d == 1'b1 && data_memory[F_ADDR] == 8'b00000000) begin
                  data_memory[STATUS][2] = 1'b1;
               end
               else begin
                  data_memory[STATUS][2] = 1'b0;
               end
            end

            if ((ADDLW || ANDLW || SUBLW || XORLW) == 1'b1) begin
               if (W_REG == 8'b00000000) begin
                  data_memory[STATUS][2] = 1'b1;
               end
               else begin
                  data_memory[STATUS][2] = 1'b0;
               end
            end

            // ZERO FLAG BIT FOR IORWF
            if (IORWF == 1'b1) begin
               if (d == 1'b0 && W_REG != 8'b00000000) begin
                  data_memory[STATUS][2] = 1'b1;
               end
               else if (d == 1'b1 && data_memory[F_ADDR] != 8'b00000000) begin
                  data_memory[STATUS][2] = 1'b1;
               end
               else begin
                  data_memory[STATUS][2] = 1'b0;
               end
            end
            // ZERO FLAG BIT FOR IORLW
            if ((IORLW) == 1'b1) begin
               if (W_REG != 8'b00000000) begin
                  data_memory[STATUS][2] = 1'b1;
               end
               else begin
                  data_memory[STATUS][2] = 1'b0;
               end
            end

            z = data_memory[STATUS][2];
   //=============================================================================

            //the value of the SFRegister at these addresses(bank 0) will be stored to the same registers at bank 1
            if (F_ADDR == 8'h00 || F_ADDR == 8'h02 || F_ADDR == 8'h03 || F_ADDR == 8'h04 || F_ADDR == 8'h0A || F_ADDR == 8'h0B ) begin
               bank1 = F_ADDR + 8'h80;
               data_memory[bank1] = data_memory[F_ADDR];
            end

            //the value of the register at these addresses(bank 1) will be stored to the same registers at bank 0
            if (F_ADDR == 8'h80 || F_ADDR == 8'h82 || F_ADDR == 8'h83 || F_ADDR == 8'h84 || F_ADDR == 8'h8A || F_ADDR == 8'h8B ) begin
               bank0 = F_ADDR - 8'h80;
               data_memory[bank0] = data_memory[F_ADDR];
            end

            //the value of the registers with addresses from 0C - 4F(bank 0) will be stored in bank 1
            if (F_ADDR >= 8'h0C && F_ADDR <= 8'h4F) begin
               bank1 = F_ADDR + 8'h80;
               data_memory[bank1] = data_memory[F_ADDR];
            end

            //the value of the registers with addresses from 8C - CF(bank 1) will be stored in bank 0
            if (F_ADDR >= 8'h8C && F_ADDR <= 8'hCF) begin
               bank0 = F_ADDR - 8'h80;
               data_memory[bank0] = data_memory[F_ADDR];
            end

            // OUTPUT
            if(data_memory[TRISA][0] == 1'b0)begin
               port_a_data_out[0] = data_memory[PORTA][0];
            end
            if(data_memory[TRISA][1] == 1'b0)begin
               port_a_data_out[1] = data_memory[PORTA][1];
            end
            if(data_memory[TRISA][2] == 1'b0)begin
               port_a_data_out[2] = data_memory[PORTA][2];
            end
            if(data_memory[TRISA][3] == 1'b0)begin
               port_a_data_out[3] = data_memory[PORTA][3];
            end
            if(data_memory[TRISA][4] == 1'b0)begin
               port_a_data_out[4] = data_memory[PORTA][4];
            end

            if(data_memory[TRISB][0] == 1'b0)begin
               port_b_data_out[0] = data_memory[PORTB][0];
            end
            if(data_memory[TRISB][1] == 1'b0)begin
               port_b_data_out[1] = data_memory[PORTB][1];
            end
            if(data_memory[TRISB][2] == 1'b0)begin
               port_b_data_out[2] = data_memory[PORTB][2];
            end
            if(data_memory[TRISB][3] == 1'b0)begin
               port_b_data_out[3] = data_memory[PORTB][3];
            end
            if(data_memory[TRISB][4] == 1'b0)begin
               port_b_data_out[4] = data_memory[PORTB][4];
            end
            if(data_memory[TRISB][5] == 1'b0)begin
               port_b_data_out[5] = data_memory[PORTB][5];
            end
            if(data_memory[TRISB][6] == 1'b0)begin
               port_b_data_out[6] = data_memory[PORTB][6];
            end
            if(data_memory[TRISB][7] == 1'b0)begin
               port_b_data_out[7] = data_memory[PORTB][7];
            end

         end   //Q4 END
//=============================================================================
      end      //ELSE MCLR END

   end         //ALWAYS END



endmodule
