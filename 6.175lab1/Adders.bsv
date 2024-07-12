import Multiplexer::*;

// Full adder functions

function Bit#(1) fa_sum( Bit#(1) a, Bit#(1) b, Bit#(1) c_in );
    return xor1( xor1( a, b ), c_in );
endfunction

function Bit#(1) fa_carry( Bit#(1) a, Bit#(1) b, Bit#(1) c_in );
    return or1( and1( a, b ), and1( xor1( a, b ), c_in ) );
endfunction

// 4 Bit full adder

function Bit#(5) add4( Bit#(4) a, Bit#(4) b, Bit#(1) c_in );
    
    Bit#(5) res = 0;
    Bit#(5) c = 0;
    c[0] = c_in;
    for (Integer i = 0; i < 4; i = i + 1) begin
        res[i] = fa_sum(a[i], b[i], c[i]);
        c[i+1] = fa_carry(a[i], b[i], c[i]);
    end
    res[4] = c[4];
    return res;
endfunction

// Adder interface

interface Adder8;
    method ActionValue#( Bit#(9) ) sum( Bit#(8) a, Bit#(8) b, Bit#(1) c_in );
endinterface

// Adder modules

// RC = Ripple Carry
module mkRCAdder( Adder8 );
    method ActionValue#( Bit#(9) ) sum( Bit#(8) a, Bit#(8) b, Bit#(1) c_in );
        Bit#(5) lower_result = add4( a[3:0], b[3:0], c_in );
        Bit#(5) upper_result = add4( a[7:4], b[7:4], lower_result[4] );
        return { upper_result , lower_result[3:0] };
    endmethod
endmodule

// CS = Carry Select
module mkCSAdder( Adder8 );
    method ActionValue#( Bit#(9) ) sum( Bit#(8) a, Bit#(8) b, Bit#(1) c_in );
        Bit#(5) lowres = add4(a[3:0], b[3:0], c_in);
        Bit#(5) highres_0 = add4(a[7:4], b[7:4], 0);
        Bit#(5) highres_1 = add4(a[7:4], b[7:4], 1);

        return {multiplexer_n(lowres[4], highres_0, highres_1), lowres[3:0]};
    endmethod
endmodule

