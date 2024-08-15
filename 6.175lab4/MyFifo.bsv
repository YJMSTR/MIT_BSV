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
        // if (enqP == max_index) begin
        //     enqP <= 0;
        //     data[enqP] <= x;
        //     empty <= False;
        //     if (0 == deqP) full <= True;
        // end else begin
        //     enqP <= enqP + 1;
        //     data[enqP] <= x;
        //     empty <= False;
        //     if (enqP + 1 == deqP) full <= True;
        // end
        
        let enqP_next = enqP == max_index ? 0 : enqP + 1;
        enqP <= enqP_next;
        data[enqP] <= x;
        empty <= False;
        if (deqP == enqP_next) begin
            full <= True;
        end
    endmethod

    method Action deq if (!empty);
        let deqP_next = deqP == max_index ? 0 : deqP + 1;
        deqP <= deqP_next;
        full <= False;
        if (deqP_next == enqP) begin
            empty <= True;
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
    Vector#(n, Reg#(t))         data     <- replicateM(mkRegU());
    Ehr#(3, Bit#(TLog#(n)))     enqP     <- mkEhr(0);
    Ehr#(3, Bit#(TLog#(n)))     deqP     <- mkEhr(0);
    Ehr#(3, Bool)               empty    <- mkEhr(True);
    Ehr#(3, Bool)               full     <- mkEhr(False);
    
    // useful value
    Bit#(TLog#(n))              max_index = fromInteger(valueOf(n)-1);

    method Bool notFull;
        return !full[1];
    endmethod

    method Action enq(t x) if(!full[1]);
        data[enqP[1]] <= x;   // Ehr[1] 是 Ehr[0] 本周期要写入的值，bypass
        empty[1] <= False;
        let enqP_next = enqP[1] == max_index ? 0 : enqP[1] + 1;
        if (enqP_next == deqP[1]) begin
            full[1] <= True;
        end
        enqP[1] <= enqP_next; 
    endmethod

    method Bool notEmpty;
        return !empty[0];
    endmethod

    method Action deq if (!empty[0]);
        full[0] <= False;
        let deqP_next = deqP[0] == max_index ? 0 : deqP[0] + 1;
        if (deqP_next == enqP[0]) begin
            empty[0] <= True;
        end
        deqP[0] <= deqP_next;
    endmethod

    method t first if(!empty[0]);
        return data[deqP[0]];
    endmethod

    method Action clear;
        deqP[2]     <= 0;
        enqP[2]     <= 0;
        full[2]     <= False;
        empty[2]    <= True;
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

