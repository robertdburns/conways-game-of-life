`timescale 1ns / 1ps

module conway_new(	
	input logic 		clk,		// clock signal
	input logic 		rst,		// reset signal
	input logic 		state,		// 0 = load, 1 = run
	input logic [15:0]	addr,	// address for loading the grid

	output logic 		next_gen	// output signal to indicate next generation

);

	typedef enum logic [2:0] {
		INIT,
		LOAD,
		MEM_ACCESS,
		CALC,
		MEM_STORE,
		MEMT_RANSFER
		IDLE
	} state;

	state state, next_state;


	// STATE LOGIC
	logic 			INIT_DONE = 0;
	logic			MEM_ACC_TOP = 0;
	logic			MEM_ACC_MID = 0;
	logic			MEM_ACC_BOT = 0;


	// RAM LOGIC
	logic 	[3:0] 	w_WE0;
	logic 			w_EN0;
	logic 	[31:0] 	w_Di0;
	logic 	[31:0] 	w_Do0;
	logic 	[7:0] 	w_A0;

	logic 	[3:0] 	h_WE0;
	logic 			h_EN0;
	logic 	[31:0] 	h_Di0;
	logic 	[31:0] 	h_Do0;
	logic 	[7:0] 	h_A0;





	always_ff @ (posedge clk) begin					// LOGIC
		state <= next_state;						// state to next state

		if (rst) begin								// rst active HIGH
			state <= INIT;
			w_A0 <= 8'h00;
		end 

		else begin

			case (state)

				INIT: begin
					if (!INIT_DONE) begin			// if still initializing MEM -> 0s
						w_WE0 <= 4'b1111;			// write all 4 bytes
								w_EN0 <= 1;			// write enable HIGH
						w_Di0 <= 32'h00000000;		// data is all 0s
						w_A0 <= w_A0 + 32;			// increment address
					end 
				end 

				LOAD: begin

				end 

				MEM_ACCESS: begin
					// access top row 32bits - store in var
					// access middle row 32bits - store in var
					// access bottom row 32bits - store in var
				end 

				CALC: begin
					// assign pixels from bits of access variables
					// enable calculators
				end 

				MEM_STORE: begin
					// combine outputs
					// store in memory
					// go back to MEM_ACCESS for next x-many calcs data
				end 

				MEM_TRANSFER: begin
					// when finished with wRam: take 32bits from hRam and write it to wRam  
				end 

				IDLE: begin

				end 

			endcase 
		end 

	end 


	always_comb begin								// FLAGS
		next_state = state;
		INIT_DONE = 0;


		case(state)
				INIT: begin
					// if at the end of writing memory, INIT_DONE = 1, next_state = LOAD
					// else, next_state = INIT

				end 

				LOAD: begin
					// if state = 0, keep loading values, 
					// if state = 1, stop loading, next_state = CALC
				end 

				MEM_ACCESS: begin
					// if MEM_ACC_TOP & MEM_ACC_TOP & MEM_ACC_TOP == 0: read next row, store value in var
					// if MEM_ACC_TOP & MEM_ACC_TOP & MEM_ACC_TOP == 1: next_state = CALC
				end 

				CALC: begin

				end 

				MEM_STORE: begin

				end 

				MEM_TRANSFER: begin

				end 

				IDLE: begin

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




endmodule