/*
    To those of you who have the ungrace to read this code, I am truly sorry. 
    No one should have to bear witness to this atrocity, and I hope you can forgive me.
    Shoutout to copilot for making this not take seven years to write.
*/

module mega_calculator(
    input [63:0] top,
    input [63:0] mid,
    input [63:0] bot,

    output logic [63:0] next
)

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

calculator calc2(
        .target(mid[1]),
        .top(top[1]),
        .top_right(top[2]),
        .right(mid[2]),
        .bottom_right(bot[2]),
        .bottom(bot[1]),
        .bottom_left(bot[0]),
        .left(mid[0]),
        .top_left(top[0]),
        .target_next(next[1])
    );

endmodule