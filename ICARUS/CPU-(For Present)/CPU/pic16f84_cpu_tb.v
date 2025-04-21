`include "pic16f84_cpu.v"

module pic16f84_cpu_tb;

    // Inputs
    reg q1;
    reg q2;
    reg q3;
    reg q4;
    reg mclr;
    reg [13:0] op_code;
    reg [4:0] port_a_data_in;
    reg [7:0] port_b_data_in;

    // Outputs
    wire [12:0] pc_out;
    wire nop_out;
    wire [4:0] port_a_tris;
    wire [4:0] port_a_data_out;
    wire [7:0] port_b_tris;
    wire [7:0] port_b_data_out;

    // Instantiate the CPU module
    pic16f84_cpu uut (
        .q1(q1),
        .q2(q2),
        .q3(q3),
        .q4(q4),
        .mclr(mclr),
        .op_code(op_code),
        .port_a_data_in(port_a_data_in),
        .port_a_data_out(port_a_data_out),
        .port_a_tris(port_a_tris),
        .port_b_data_in(port_b_data_in),
        .port_b_data_out(port_b_data_out),
        .port_b_tris(port_b_tris),
        .pc_out(pc_out),
        .nop_out(nop_out)
    );

    initial begin
        $dumpfile("pic16f84_cpu.vcd");
        $dumpvars(0, pic16f84_cpu_tb);

        // Initialize inputs
        q1 = 0;
        q2 = 0;
        q3 = 0;
        q4 = 0;
        //mclr = 0;
        op_code = 14'b0;
        port_a_data_in = 5'b0;
        port_b_data_in = 8'b0;

        #10;
        // Apply reset
        mclr = 1;
        //#10;
        //mclr = 0;

        port_a_data_in = 5'b00000; // 0x00
        port_b_data_in = 8'b00000000; // 0x00

        // Test opcode and port inputs
        #20; //Example opcode
        op_code = 14'h23D5;		//CALL 0x3D5

        // Cycle through Q1 to Q4

    $display("op_code = %h", op_code);

    q1 = 1'b1;
    q2 = 0;
    q3 = 0;
    q4 = 0;
    #10;

    q1 = 0;
    q2 = 1'b1;
    q3 = 0;
    q4 = 0;
    #10;

    q1 = 0;
    q2 = 0;
    q3 = 1'b1;
    q4 = 0;
    #10;

    q1 = 0;
    q2 = 0;
    q3 = 0;
    q4 = 1'b1;
    #10;

    //END
    q1 = 0;
    q2 = 0;
    q3 = 0;
    q4 = 0;
    #10;

    #50;

    $finish;
    end

endmodule
