rifh
Add Status
Do Not Disturb

rifh — 5/27/2025 12:59 PM
module fib #(
    parameter IN_WIDTH  = 8,
    parameter OUT_WIDTH = 32
)(
    input  logic                  clk,
    input  logic                  rst_n,
Expand
message.txt
3 KB
rifh — 6/2/2025 8:40 AM
https://vlsiverify.com/verilog/verilog-codes/asynchronous-fifo/
VLSI Verify
vlsiverify
Asynchronous FIFO - VLSI Verify
In asynchronous FIFO, data read and write operations use different clock frequencies i.e. write and read clocks are not synchronized.
Asynchronous FIFO - VLSI Verify
rifh — 6/2/2025 10:49 AM
https://docs.google.com/presentation/d/1i_ZeYwaU4MgpgSJ7h7Vq6v5lhtZ6mfg7OdV3idGRitE/edit?usp=sharing
Google Docs
Conway’s Game of Life
Conway’s Game of Life Robert B, Robert B
Image
this is the slides so far they are glorious
rifh — 6/2/2025 1:29 PM
`timescale 1ns / 1ps

module conway_new(
input logic clk,// clock signal
input logic rst,// reset signal
input logic state,// 0 = load, 1 = run
Expand
message.txt
3 KB
rifh — 6/5/2025 1:10 PM
can you send me your current progress on conway? Ill add a bit to it later today or tmr probably, but idk
Robert B — 6/5/2025 4:46 PM
made the always_ff logic for the fsm, might be missing some increments
`timescale 1ns / 1ps

module conway_new(
input logic clk,// clock signal
input logic rst,// reset signal
input logic state,// 0 = load, 1 = run
Expand
message.txt
6 KB
thanks so much
rifh — 6/6/2025 9:02 AM
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import (
    RisingEdge, FallingEdge,
    Timer, ReadOnly
)
Expand
message.txt
3 KB
Robert B — 6/6/2025 9:03 AM
rifh — 6/6/2025 9:03 AM
Robert B — 6/6/2025 9:03 AM
rifh — 6/6/2025 9:04 AM
Robert B — 6/6/2025 9:04 AM
Robert B — 6/6/2025 9:34 AM
Image
Blackjack
APP
 — 6/6/2025 9:37 AM
Blackjack
Activity ended. Start a new one?
Robert B — 6/6/2025 9:37 AM
Blackjack
APP
 — 6/6/2025 9:41 AM
Blackjack
Activity ended. Start a new one?
Robert B — 6/6/2025 9:51 AM
have you ever played blox fruits with your life on the line, while having a BUNCH of mangoes in your mouth? well, this is called dark mango psychology. now, in dark mango psychology, you'll realize the mangoes ain't just your normal mangoes, they are DARK, and when you eat a mango, you'll realize the serotonin inside of the mangoes, go all the way to your brain, and then when it enters your brain and reaches the membrane, it activates something inside of you. you start to look at people like seeds, seeds waiting to get sprouted, seeds waiting to enter your tummy, and when that happens, you realize that you're somewhere deep, somewhere very deep, somewhere you don't want to be, wanna guess where that is? BLOX FRUITS: SECOND SEA! 😂
Image
rifh
 pinned a message to this channel. See all pinned messages. — 6/6/2025 9:51 AM
Robert B — 6/6/2025 9:51 AM
rifh — 6/6/2025 10:31 AM
Image
Robert B — Yesterday at 8:59 PM
When do you want to meet tomorrow?
rifh — Yesterday at 9:00 PM
im free after 4pm
I think we can spend like 30 mins on the README and a few hrs on the main code, and it'll probably be good
Robert B — Yesterday at 9:00 PM
ok ill probably head to cpes around noon and start the grind
sounds good
rifh — Yesterday at 9:00 PM
dawg I thought you were home-home
Robert B — Yesterday at 9:01 PM
no
i went to my roommate's cookout in sac for the weekend
rifh — Yesterday at 9:01 PM
ah
Robert B — 8:03 PM
`timescale 1ns / 1ps

module conway_new(
input logic clk,// clock signal
input logic rst,// reset signal
input logic run,// 0 = load, 1 = run
Expand
message.txt
9 KB
`timescale 1ns / 1ps

module conway_tb;

    // Signals
    logic clk;
    logic rst;

    logic state;        // 0 = load, 1 = run
    logic [8:0] addr;
    logic [7:0] data;    // data input for loading the byte at addr

    logic next_gen;
    logic INIT_DONE;

    // Unit Under Test
    conway_new #(
    ) uut (
        .clk(clk),
        .rst(rst),
        .run(state),
        .addr(addr),
        .data(data),
        .next_gen(next_gen),
        .INIT_DONE(INIT_DONE)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz clock
    end

    initial begin
    // Name as needed
    $dumpfile("tb_conway.vcd");
    $dumpvars(0);
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
        wait(INIT_DONE == 1); // Wait for initialization to complete
        #10;
        data = 'd255;
        addr = {7'b0000000, 2'b11}; // Load address
        #10;
        data = 'd255;
        addr = {7'b0000001, 2'b11}; // Load address
        #10;
        data = 'd255;
        addr = {7'b0000010, 2'b11}; // Load address
        #10;
        data = 'd255;
        addr = {7'b0000011, 2'b11}; // Load address
        #10;
        state = 1; // Start running
        #20

        // for (logic [7:0] i = 0; i <= 8'd0; i++) begin
        //     wait(next_gen == 1);        // generation 1
        //     $display("Generation %0d", i);
        //      #20;
        // end

         wait(next_gen == 1);        // generation 1
         #20;
         wait(next_gen == 1);         // generation 2
         #20;
         wait(next_gen == 1);        // generation 3
         #20;
         wait(next_gen == 1);        // generation 4
         #20;
        $finish;
    end

endmodule
﻿
`timescale 1ns / 1ps

module conway_new(	
	input logic 		clk,		// clock signal
	input logic 		rst,		// reset signal
	input logic 		run,		// 0 = load, 1 = run
	input logic [8:0]	addr,	// address for loading the grid
	input logic [7:0]   data,	// data input for loading the byte at addr

	output logic 		next_gen,	// output signal to indicate next generation
	output logic INIT_DONE

);

	typedef enum logic [2:0] {
		INIT,
		LOAD,
		MEM_ACCESS,
		CALC,
		MEM_STORE,
		MEM_TRANSFER,
		IDLE
	} state;

	state present_state, next_state;


	// STATE LOGIC
	//logic 			INIT_DONE;
	// logic			MEM_ACC_TOP = 0;
	// logic			MEM_ACC_MID = 0;
	// logic			MEM_ACC_BOT = 0;


	// RAM LOGIC
	logic 	[3:0] 	w_WE0;
	logic 			w_EN0;
	logic 	[31:0] 	w_Di0;
	logic 	[31:0] 	w_Do0;
	logic 	[6:0] 	w_A0;

	logic 	[3:0] 	h_WE0;
	logic 			h_EN0;
	logic 	[31:0] 	h_Di0;
	logic 	[31:0] 	h_Do0;
	logic 	[6:0] 	h_A0;

	// FSM Hold Variables
	logic [6:0] row;			// variable to store which row we are accessing, preserved across states
	logic [6:0] row_count;		// variable to store which row we are accessing, changes every calculation
					
	logic [63:0] top, mid, bot = 0;	// variables to store 64 bits of each row
	logic [63:0] next_hold;

	logic row_offset; // which segment of the 64 bits to write to memory
	logic [63:0] next;			// variable to store next generation of cells


	int fd = $fopen("mem.txt", "w");	// file descriptor for writing memory to file


	always_ff @ (posedge clk) begin					// LOGIC
		present_state <= next_state;						// state to next state
		next_gen <= 0;									// reset next_gen at the start of each clock cycle

		if (rst) begin								// rst active HIGH
			present_state <= INIT;
			w_A0 <= 7'b0;
		end 

		else begin

			case (present_state)
				INIT: begin
					if (!INIT_DONE) begin			// if still initializing MEM -> 0s
						w_WE0 <= 4'b1111;			// write all 4 bytes
						w_EN0 <= 1;			// write enable HIGH
						w_Di0 <= 32'h00000000;		// data is all 0s
						w_A0 <= w_A0 + 4;			// increment address
					end 
				end 

				LOAD: begin
					if (!run) begin
						case(addr[1:0])		// check which byte to write
							2'b00: begin 
								w_WE0 <= 4'b0001;	// write first byte
								w_Di0 <= {24'h000000, data};
							end
							2'b01: begin 
								w_WE0 <= 4'b0010;	// write second byte
								w_Di0 <= {16'h0000, data, 8'h00};
							end
							2'b10: begin
								w_WE0 <= 4'b0100;	// write third byte
								w_Di0 <= {8'h00, data, 16'h0000};
							end
							2'b11: begin
								w_WE0 <= 4'b1000;	// write fourth byte
								w_Di0 <= {data, 24'h000000};
							end
							default: begin
								w_WE0 <= 4'b0000;	// no write
								w_Di0 <= 32'h00000000;
							end
						endcase
						w_EN0 <= 1;					// write enable HIGH
						$fdisplay(fd, "%b\n", w_Di0);
						w_A0 <= addr[8:2];			// address is addr[8:2] (8 bits, 6 bits for address, 2 bits for byte)
					end
				end 

				MEM_ACCESS: begin

					w_WE0 <= 4'b0000;			// disable write to wRAM
					w_EN0 <= 1;
					w_A0 <= row + row_count;				// address is row
					w_Di0 <= 32'h00000000;		// data is all 0s

					if (row_count == 0) top <= top | {32'h00000000, w_Do0};		// if row_count = 0, store top row
					else if (row_count == 1) top <= top | {w_Do0, 32'h00000000};	// if row_count = 1, store top row
					else if (row_count == 2) mid <= mid | {32'h00000000, w_Do0};	// if row_count = 2, store mid row
					else if (row_count == 3) mid <= mid | {w_Do0, 32'h00000000};	// if row_count = 3, store mid row
					else if (row_count == 4) bot <= bot | {32'h00000000, w_Do0};	// if row_count = 2, store bot row
					else if (row_count == 5) bot <= bot | {w_Do0, 32'h00000000};	// if row_count = 3, store bot row
					else begin
						top <= 0;
						mid <= 0;
						bot <= 0;
						row_count <= 0;		// reset row_count
						row <= row + 2;
						next_hold <= next;
						$fdisplay(fd, "%b", next);
					end
					if (row_count <= 5) row_count <= row_count + 1;			// increment row_count
				end

				CALC: begin
					// assign pixels from bits of access variables
					// enable calculators
				end 

				MEM_STORE: begin

					w_WE0 <= 4'b1111;			// write all 4 bytes
					w_EN0 <= 1;					// write enable HIGH

					if (!row_offset) w_Di0 <= next_hold[31:0];	// if segment = 0, write first 32 bits
					else w_Di0 <= next_hold[63:32];	// if segment = 1, write last 32 bits

					w_A0 <= row + {6'b0, row_offset};		// address depends on row_offset
					row_offset <= row_offset + 1;			// increment segment
					if (row >= 126) row <= 0;
					end

				MEM_TRANSFER: begin
					// when finished with wRam: take 32bits from hRam and write it to wRam
					logic wrre; 	//read from old RAM = 0, write to new RAM = 1

					if (wrre) begin
						h_WE0 <= 4'b0000;			// disable write to hRAM
						h_EN0 <= 1;
						h_A0 <= row;
					end 
					else begin
						w_WE0 <= 4'b1111;
						w_EN0 <= 1;
						w_Di0 <= h_Do0;				// data is from hRAM
						w_A0 <= row;				// address is row
						row <= row + 1;			// increment row
					end
					wrre <= !wrre;				// toggle wrre

					if (row >= 127) begin
						row <= 0;					// reset row if it exceeds 127
						next_gen <= 1;				// signal to indicate next generation
						$fdisplay(fd, "\n");	// write next generation to file
					end 

				end 

				IDLE: begin
					next_gen <= 1;			// signal to indicate next generation
					w_WE0 <= 4'b0000;		// disable write to wRAM
					w_EN0 <= 0;				// disable write enable
					h_WE0 <= 4'b0000;		// disable write to hRAM
				end 

				default: begin
					present_state <= INIT;		// default state is INIT
					w_A0 <= 7'b0;				// reset address
				end

			endcase 
		end 

	end 


	always_comb begin								// FLAGS
		next_state = present_state;
		INIT_DONE = 0;


		case(present_state)
				INIT: begin
					// if at the end of writing memory, INIT_DONE = 1, next_state = LOAD
					// else, next_state = INIT
					if (w_A0 == 7'h7C) begin // 128
						INIT_DONE = 1;			// initialization done
						next_state = LOAD;		// next state is LOAD
					end 
					else begin
						next_state = INIT;		// keep initializing
					end

				end 

				LOAD: begin
					// if state = 0, keep loading values, 
					// if state = 1, stop loading, next_state = access memory
					if (!run) begin
						next_state = LOAD;		// keep loading values
					end 
					else begin
						next_state = MEM_ACCESS;	// next state is MEM_ACCESS
					end
				end 

				MEM_ACCESS: begin
					if (row_count < 5) begin
						next_state = MEM_ACCESS;	// keep accessing memory
					end 
					else begin
						next_state = CALC;			// next state is CALC
					end
					// if MEM_ACC_TOP & MEM_ACC_TOP & MEM_ACC_TOP == 0: read next row, store value in var
					// if MEM_ACC_TOP & MEM_ACC_TOP & MEM_ACC_TOP == 1: next_state = CALC
				end 

				CALC: begin
						next_state = MEM_STORE;		// if all rows are calculated, next state is MEM_STORE
				end 

				MEM_STORE: begin
					if (row < 126) begin
						next_state = MEM_ACCESS;		// keep storing values
					end 
					else begin
						next_state = MEM_TRANSFER;	// next state is MEM_TRANSFER
					end
				end 

				MEM_TRANSFER: begin
					if (row < 127) begin
						next_state = MEM_TRANSFER;	// keep transferring values
					end 
					else begin
						next_state = MEM_ACCESS;			// next state is MEM_ACCESS
					end
				end 

				IDLE: begin
					next_state = MEM_ACCESS;		// next state is MEM_ACCESS
				end 

				default: begin
					next_state = INIT;				// default state is INIT
				end

		endcase
	end 




	DFFRAM128x32 wRAM (					// Working RAM - check these values for next state's calculations
		.CLK(clk),
		.WE0(w_WE0),
		.EN0(w_EN0),
		.Di0(w_Di0),
		.Do0(w_Do0),
		.A0(w_A0)
	);

	DFFRAM128x32 hRAM (					// Holding Ram - storing values for next cycle
		.CLK(clk),
		.WE0(h_WE0),
		.EN0(h_EN0),
		.Di0(h_Di0),
		.Do0(h_Do0),
		.A0(h_A0)
	);


// Calculator module to compute the next state of each cell
genvar i;
generate
    for (i = 0; i < 64; i = i + 1) begin
        calculator calc(
            .target(mid[i]),
            .top(top[i]),
            .top_right(top[(i+1)]),
            .right(mid[(i+1)]),
            .bottom_right(bot[(i+1)]),
            .bottom(bot[i]),
            .bottom_left(bot[(i+63)]),
            .left(mid[(i+63)]),
            .top_left(top[(i+63)]),
            .target_next(next[i])
        );
    end
endgenerate


endmodule
