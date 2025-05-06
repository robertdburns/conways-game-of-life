`timescale 1ns / 1ps

module conway_tb;

    // Signals
    logic clk;
    logic rst;

    logic state;		// 0 = load, 1 = run
    logic [15:0] addr;

    // Unit Under Test
    conway #(
    ) uut (
        .clk(clk),
        .rst(rst),
        .state(state),
        .addr(addr)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz clock
    end

    // Testbench logic
    initial begin
        // Initialize signals
        rst = 1;
        state = 0;

        // Reset the UUT
        #10 rst = 0;

        // Add stimulus here
        // simple glider design found on google
        addr = 16'h0200; // Load address
        #10;
        addr = 16'h0102; // Load address
        #10;
        addr = 16'h0202; // Load address
        #10;
        addr = 16'h0302; // Load address
        #10;
        addr = 16'h0301; // Load address
        #10;
        state = 1; // Start running


        #100 $finish;
    end

endmodule