// Reference functions that use Bluespec's '*' operator
function Bit#(TAdd#(n,n)) multiply_unsigned( Bit#(n) a, Bit#(n) b );
    UInt#(n) a_uint = unpack(a);
    UInt#(n) b_uint = unpack(b);
    UInt#(TAdd#(n,n)) product_uint = zeroExtend(a_uint) * zeroExtend(b_uint);
    return pack( product_uint );
endfunction

function Bit#(TAdd#(n,n)) multiply_signed( Bit#(n) a, Bit#(n) b );
    Int#(n) a_int = unpack(a);
    Int#(n) b_int = unpack(b);
    Int#(TAdd#(n,n)) product_int = signExtend(a_int) * signExtend(b_int);
    return pack( product_int );
endfunction

function Bit#(TAdd#(n, 1)) adder_comb ( Bit#(n) a, Bit#(n) b, Bit#(1) c_in);
    UInt#(n) a_uint = unpack(a);
    UInt#(n) b_uint = unpack(b);
    UInt#(1) c_uint = unpack(c_in);
    UInt#(TAdd#(n, 1)) sum_uint = zeroExtend(a_uint) + zeroExtend(b_uint) + zeroExtend(c_uint);
    return pack( sum_uint);
endfunction

// Multiplication by repeated addition
function Bit#(TAdd#(n,n)) multiply_by_adding( Bit#(n) a, Bit#(n) b );
    Bit#(n) tp = 0;
    Bit#(n) prod = 0;
    for (Integer i = 0; i < valueOf(n); i = i + 1) begin
        let mi = (a[i] == 0) ? 0 : b;
        Bit#(TAdd#(n, 1)) sum = adder_comb(tp, mi, 0);
        prod[i] = sum[0];   // prod -> the low n bits of result
        tp = sum[valueOf(n):1]; // tp -> the high n bits of result 
    end
    return {tp, prod};
endfunction



// Multiplier Interface
interface Multiplier#( numeric type n );
    method Bool start_ready();
    method Action start( Bit#(n) a, Bit#(n) b );
    method Bool result_ready();
    method ActionValue#(Bit#(TAdd#(n,n))) result();
endinterface

function Bit#(1) fa_sum( Bit#(1) a, Bit#(1) b, Bit#(1) c_in );
    return (a^b)^c_in;
endfunction

function Bit#(1) fa_carry( Bit#(1) a, Bit#(1) b, Bit#(1) c_in );
    return (a&b)|((a^b)&c_in);
endfunction

function Bit#(2) fa(Bit#(1) a, Bit#(1) b, Bit#(1) c_in);
    return {fa_carry(a,b,c_in), fa_sum(a, b, c_in)};
endfunction

function Bit#(TAdd#(n, 1)) addN(Bit#(n) a, Bit#(n) b, Bit#(1) c_in);
    Bit#(TAdd#(n, 1)) res = 0;
    Bit#(TAdd#(n, 1)) c = 0;
    c[0] = c_in;
    for (Integer i = 0; i < valueOf(n); i = i + 1) begin
        res[i] = fa_sum(a[i], b[i], c[i]);
        c[i+1] = fa_carry(a[i], b[i], c[i]);
    end
    res[valueOf(n)] = c[valueOf(n)];
    return res;
endfunction
// Folded multiplier by repeated addition
module mkFoldedMultiplier( Multiplier#(n) ) provisos(Add#(1, a__, n));
    // You can use these registers or create your own if you want
    Reg#(Bit#(n)) a <- mkRegU();
    Reg#(Bit#(n)) b <- mkRegU();
    Reg#(Bit#(n)) prod <- mkRegU();
    Reg#(Bit#(n)) tp <- mkRegU();
    Reg#(Bit#(TAdd#(TLog#(n),1))) i <- mkReg( fromInteger(valueOf(n)+1) );

    /*
    Can you implement it without using a variable-shift 
    bit shifter? Without using dynamic bit selection? 
    (In other words, can you avoid shifting or bit selection by a value stored in a register?)
    */

    rule mulStep( i < fromInteger(valueOf(n)) );
        Bit#(n) m = (a[0] == 0) ? 0 : b;
        a <= a >> 1;
        let sum = addN(m, tp, 0);
        prod <= {sum[0], prod[valueOf(n)-1:1]};
        tp <= sum[valueOf(n):1];
        i <= i+1;
    endrule

    method Bool start_ready();
        return i == fromInteger(valueOf(n)+1);
    endmethod

    method Action start( Bit#(n) aIn, Bit#(n) bIn );
        if (i == fromInteger(valueOf(n)+1)) begin
            a <= aIn;
            b <= bIn;
            i <= 0;
            tp <= 0;
            prod <= 0;
        end
    endmethod

    method Bool result_ready();
        return i == fromInteger(valueOf(n));
    endmethod

    method ActionValue#(Bit#(TAdd#(n,n))) result();
        if (i == fromInteger(valueOf(n))) begin
            i <= i + 1;
            return {tp, prod};
        end else begin
            return 0;
        end
    endmethod
endmodule



// Booth Multiplier

// The repeated addition algorithm works well multiplying unsigned inputs, 
// but it is not able to multiply (negative) numbers in two's complement encoding. 
// To multiply signed numbers, you need a different multiplication algorithm.

// Booth's Multiplication Algorithm is an algorithm that works with signed two's complement numbers

// Booth's encoding: A '+' in the i-th bit represents (+1) · 2i, but a '-' in the i-th bit correspond to (-1) · 2i.
function Bit#(n) sra(Bit#(n) a, Integer n);
    Int#(n) signed_a = unpack(a);
    return pack(signed_a >> n);
endfunction

module mkBoothMultiplier( Multiplier#(n) );
    Reg#(Bit#(TAdd#(TAdd#(n,n),1))) m_neg <- mkRegU;
    Reg#(Bit#(TAdd#(TAdd#(n,n),1))) m_pos <- mkRegU;
    Reg#(Bit#(TAdd#(TAdd#(n,n),1))) p <- mkRegU;
    Reg#(Bit#(TAdd#(TLog#(n),1))) i <- mkReg( fromInteger(valueOf(n)+1) );

    rule mul_step( i < fromInteger(valueOf(n)) );
        let pr = p[1:0];
        Bit#(TAdd#(TAdd#(n, n), 1)) cur_p = p;
        if (pr == 2'b01) begin
            cur_p = cur_p + m_pos;
        end else if (pr == 2'b10) begin
            cur_p = cur_p + m_neg;
        end 
        p <= sra(cur_p, 1);
        i <= i + 1;
    endrule

    method Bool start_ready();
        return i == fromInteger(valueOf(n) + 1);
    endmethod

    method Action start( Bit#(n) m, Bit#(n) r );
        if (i == fromInteger(valueOf(n) + 1)) begin
            p <= {0, r, 1'b0};   // add a '0' bit at pos -1
            m_pos <= {m, 0};
            m_neg <= {(-m), 0};
            i <= 0;
        end
    endmethod

    method Bool result_ready();
        return i == fromInteger(valueOf(n));
    endmethod

    method ActionValue#(Bit#(TAdd#(n,n))) result();
        if (i == fromInteger(valueOf(n)) ) begin
            i <= i + 1;
            return p[valueOf(n)*2:1];
        end else begin 
            return 0;
        end
    endmethod
endmodule



// Radix-4 Booth Multiplier
module mkBoothMultiplierRadix4( Multiplier#(n) );
    Reg#(Bit#(TAdd#(TAdd#(n,n),2))) m_neg <- mkRegU;
    Reg#(Bit#(TAdd#(TAdd#(n,n),2))) m_pos <- mkRegU;
    Reg#(Bit#(TAdd#(TAdd#(n,n),2))) p <- mkRegU;
    Reg#(Bit#(TAdd#(TLog#(n),1))) i <- mkReg( fromInteger(valueOf(n)/2+1) );

    // rule mul_step( /* guard goes here */ );
    //     // TODO: Implement this in Exercise 8
    // endrule

    method Bool start_ready();
        // TODO: Implement this in Exercise 8
        return False;
    endmethod

    method Action start( Bit#(n) m, Bit#(n) r );
        // TODO: Implement this in Exercise 8
    endmethod

    method Bool result_ready();
        // TODO: Implement this in Exercise 8
        return False;
    endmethod

    method ActionValue#(Bit#(TAdd#(n,n))) result();
        // TODO: Implement this in Exercise 8
        return 0;
    endmethod
endmodule

