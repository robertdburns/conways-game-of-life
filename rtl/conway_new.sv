`timescale 1ns / 1ps

module conway_new(	
	input logic 		clk,		// clock signal
	input logic 		rst,		// reset signal
	input logic 		state,		// 0 = load, 1 = run
	input logic [8:0]	addr,	// address for loading the grid
	input logic [7:0]   data,	// data input for loading the byte at addr

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
				
				if (!state) begin
					w_WE0 <= addr[1:0];			// write selected byte
					w_EN0 <= 1;					// write enable HIGH
					w_
					w_Di0 <= {24'h000000, data};	// write data to wRAM
					w_A0 <= addr[8:2];			// address is addr[8:2] (8 bits, 6 bits for address, 2 bits for byte)
				end
					

				end 

				MEM_ACCESS: begin

				logic [6:0] row;			// variable to store which row we are accessing, preserved across states
				logic [2:0] row_count;		// variable to store which row we are accessing, changes every calculation
				
				logic [63:0] top, mid, bot;	// variables to store 32 bits of each row

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
				row_count <= row_count + 1;			// increment row_count

				end

				CALC: begin
					// assign pixels from bits of access variables
					// enable calculators
				end 

				MEM_STORE: begin

				logic segment; // which segment of the 64 bits to write to memory
				logic [63:0] next;			// variable to store next generation of cells
				w_WE0 <= 4'b1111;			// write all 4 bytes
				w_EN0 <= 1;					// write enable HIGH

				if (!segment) w_Di0 <= {next[31:0], 32'h00000000};	// if segment = 0, write first 32 bits
				else w_Di0 <= {32'h00000000, next[63:32]};	// if segment = 1, write last 32 bits

				w_A0 <= row_count + segment;				// address is addr
				segment <= segment + 1;			// increment segment
				end 

				MEM_TRANSFER: begin
					// when finished with wRam: take 32bits from hRam and write it to wRam
					logic wrre; 	//read from old RAM = 0, write to new RAM = 1

					if (wrre) begin
						h_WE0 <= 4'b1111;			// disable write to hRAM
						h_EN0 <= 1;
						h_A0 <= row;
						h_Di0 <= data;		
					end 
					else begin
						w_WE0 <= 4'b0000;
						w_EN0 <= 1;
						w_Di0 <= h_Do0;				// data is from hRAM
						w_A0 <= row;				// address is row
					end
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


// Calculator module to compute the next state of each cell
genvar i;
generate
    for (i = 0; i < 64; i = i + 1) begin : calc_gen
        calculator calc(
            .target(mid[i]),
            .top(top[i]),
            .top_right(top[(i+1)%64]),
            .right(mid[(i+1)%64]),
            .bottom_right(bot[(i+1)%64]),
            .bottom(bot[i]),
            .bottom_left(bot[(i+63)%64]),
            .left(mid[(i+63)%64]),
            .top_left(top[(i+63)%64]),
            .target_next(next[i])
        );
    end
endgenerate


endmodule