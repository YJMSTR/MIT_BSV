import TestBenchTemplates::*;
import Multipliers::*;

// Example testbenches
(* synthesize *)
module mkTbDumb();
    function Bit#(16) test_function( Bit#(8) a, Bit#(8) b ) = multiply_unsigned( a, b );
    Empty tb <- mkTbMulFunction(test_function, multiply_unsigned, True);
    // Empty tb <- mkTbMulFunction(multiply_unsigned, multiply_unsigned, True);
    return tb;
endmodule

(* synthesize *)
module mkTbFoldedMultiplier();
    Multiplier#(8) dut <- mkFoldedMultiplier();
    Empty tb <- mkTbMulModule(dut, multiply_signed, True);
    return tb;
endmodule

(* synthesize *)
module mkTbSignedVsUnsigned();
    // TODO: Implement test bench for Exercise 1
    // function Bit#(TAdd#(n, n)) test_signed ( Bit#(n) a, Bit#(n) b) = multiply_signed(a, b);
    function Bit#(16) test_signed ( Bit#(8) a, Bit#(8) b) = multiply_signed(a, b);
    Empty tb <- mkTbMulFunction(test_signed, multiply_unsigned, True);
    return tb;
endmodule

(* synthesize *)
module mkTbEx3();
    // TODO: Implement test bench for Exercise 3
    function Bit#(16) test_unsigned ( Bit#(8) a, Bit#(8) b) = multiply_unsigned(a, b);
    Empty tb <- mkTbMulFunction(test_unsigned, multiply_by_adding, True);
    return tb;
endmodule

(* synthesize *)
module mkTbEx5();
    Multiplier#(8) test_folded <- mkFoldedMultiplier();
    Empty tb <- mkTbMulModule(test_folded, multiply_by_adding, True);
    return tb;
endmodule

(* synthesize *)
module mkTbEx7a();
    Multiplier#(2) test_folded <- mkBoothMultiplier();
    Empty tb <- mkTbMulModule(test_folded, multiply_signed, True);
    return tb;
endmodule

(* synthesize *)
module mkTbEx7b();
    Multiplier#(8) test_folded <- mkBoothMultiplier();
    Empty tb <- mkTbMulModule(test_folded, multiply_signed, True);
    return tb;
endmodule

(* synthesize *)
module mkTbEx9a();
    Multiplier#(4) test_folded <- mkBoothMultiplierRadix4();
    Empty tb <- mkTbMulModule(test_folded, multiply_signed, True);
    return tb;
endmodule

(* synthesize *)
module mkTbEx9b();
    Multiplier#(8) test_folded <- mkBoothMultiplierRadix4();
    Empty tb <- mkTbMulModule(test_folded, multiply_signed, True);
    return tb;
endmodule

