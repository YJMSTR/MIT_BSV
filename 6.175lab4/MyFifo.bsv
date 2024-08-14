import Ehr::*;
import Vector::*;

//////////////////
// Fifo interface 

interface Fifo#(numeric type n, type t);
    method Bool notFull;
    method Action enq(t x);
    method Bool notEmpty;
    method Action deq;
    method t first;
    method Action clear;
endinterface

/////////////////
// Conflict FIFO

module mkMyConflictFifo( Fifo#(n, t) ) provisos (Bits#(t,tSz));
    // n is size of fifo
    // t is data type of fifo
    Vector#(n, Reg#(t))     data     <- replicateM(mkRegU());
    Reg#(Bit#(TLog#(n)))    enqP     <- mkReg(0);
    Reg#(Bit#(TLog#(n)))    deqP     <- mkReg(0);
    Reg#(Bool)              empty    <- mkReg(True);
    Reg#(Bool)              full     <- mkReg(False);

    // useful value
    Bit#(TLog#(n))          max_index = fromInteger(valueOf(n)-1);

    method Bool notFull;
        return full == False;
    endmethod

    method Bool notEmpty;
        return empty == False;
    endmethod

    method Action enq(t x) if (!full);
        if (enqP == max_index) begin
            enqP <= 0;
            data[enqP] <= x;
            empty <= False;
            if (0 == deqP) full <= True;
        end else begin
            enqP <= enqP + 1;
            data[enqP] <= x;
            empty <= False;
            if (enqP + 1 == deqP) full <= True;
        end
    endmethod

    method Action deq if (!empty);
        if (deqP == max_index) begin
            deqP <= 0;
            full <= False;
            if (deqP + 1 == enqP) empty <= True;
        end else begin
            deqP <= deqP + 1;
            full <= False;
            if (deqP + 1 == enqP) empty <= True;
        end
    endmethod

    method t first if (!empty);
        return data[deqP];
    endmethod

    method Action clear ;
        empty <= True;
        full <= False;
        enqP <= 0;
        deqP <= 0;
    endmethod
endmodule

/////////////////
// Pipeline FIFO

// Intended schedule:
//      {notEmpty, first, deq} < {notFull, enq} < clear
module mkMyPipelineFifo( Fifo#(n, t) ) provisos (Bits#(t,tSz));
    // n is size of fifo
    // t is data type of fifo
    Vector#(n, Reg#(t))     data     <- replicateM(mkRegU());
    Reg#(Bit#(TLog#(n)))    enqP     <- mkReg(0);
    Reg#(Bit#(TLog#(n)))    deqP     <- mkReg(0);
    Reg#(Bool)              empty    <- mkReg(True);
    Reg#(Bool)              full     <- mkReg(False);
    method Bool notFull;
        return full == False;
    endmethod
    method Action enq(t x);
    endmethod
    method Bool notEmpty;
        return empty == False;
    endmethod
    method Action deq;
    endmethod
    method t first;
        return data[deqP];
    endmethod
    method Action clear;
    endmethod
endmodule

/////////////////////////////
// Bypass FIFO without clear

// Intended schedule:
//      {notFull, enq} < {notEmpty, first, deq} < clear
module mkMyBypassFifo( Fifo#(n, t) ) provisos (Bits#(t,tSz));
    // n is size of fifo
    // t is data type of fifo
    Vector#(n, Reg#(t))     data     <- replicateM(mkRegU());
    Reg#(Bit#(TLog#(n)))    enqP     <- mkReg(0);
    Reg#(Bit#(TLog#(n)))    deqP     <- mkReg(0);
    Reg#(Bool)              empty    <- mkReg(True);
    Reg#(Bool)              full     <- mkReg(False);
    method Bool notFull;
        return full == False;
    endmethod
    method Action enq(t x);
    endmethod
    method Bool notEmpty;
        return empty == False;
    endmethod
    method Action deq;
    endmethod
    method t first;
        return data[deqP];
    endmethod
    method Action clear;
    endmethod
endmodule

//////////////////////
// Conflict free fifo

// Intended schedule:
//      {notFull, enq} CF {notEmpty, first, deq}
//      {notFull, enq, notEmpty, first, deq} < clear
module mkMyCFFifo( Fifo#(n, t) ) provisos (Bits#(t,tSz));
    // n is size of fifo
    // t is data type of fifo
    Vector#(n, Reg#(t))     data     <- replicateM(mkRegU());
    Reg#(Bit#(TLog#(n)))    enqP     <- mkReg(0);
    Reg#(Bit#(TLog#(n)))    deqP     <- mkReg(0);
    Reg#(Bool)              empty    <- mkReg(True);
    Reg#(Bool)              full     <- mkReg(False);
    method Bool notFull;
        return full == False;
    endmethod
    method Action enq(t x);
    endmethod
    method Bool notEmpty;
        return empty == False;
    endmethod
    method Action deq;
    endmethod
    method t first;
        return data[deqP];
    endmethod
    method Action clear;
    endmethod
endmodule

