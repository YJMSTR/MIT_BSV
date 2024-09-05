
import ClientServer::*;
import FIFO::*;
import GetPut::*;

import FixedPoint::*;
import Vector::*;

import ComplexMP::*;


typedef Server#(
    Vector#(nbins, ComplexMP#(isize, fsize, psize)),
    Vector#(nbins, ComplexMP#(isize, fsize, psize))
) PitchAdjust#(numeric type nbins, numeric type isize, numeric type fsize, numeric type psize);


// s - the amount each window is shifted from the previous window.
//
// factor - the amount to adjust the pitch.
//  1.0 makes no change. 2.0 goes up an octave, 0.5 goes down an octave, etc...
module mkPitchAdjust(Integer s, FixedPoint#(isize, fsize) factor, PitchAdjust#(nbins, isize, fsize, psize) ifc) provisos(RealLiteral#(FixedPoint#(isize, fsize)), Add#(psize, a__, isize), Min#(TAdd#(isize, fsize), 2, 2), Add#(b__, psize, TAdd#(isize, isize)));
    FIFO#(Vector#(nbins, ComplexMP#(isize, fsize, psize))) inputFIFO <- mkFIFO();
    FIFO#(Vector#(nbins, ComplexMP#(isize, fsize, psize))) outputFIFO <- mkFIFO();

    Reg#(Vector#(nbins, ComplexMP#(isize, fsize, psize))) inputData <- mkReg(replicate(unpack(0)));
    Reg#(Vector#(nbins, ComplexMP#(isize, fsize, psize))) outputData <- mkReg(replicate(unpack(0)));

    Vector#(nbins, Reg#(Phase#(psize))) inphases <- replicateM(mkReg(unpack(0)));
    Vector#(nbins, Reg#(Phase#(psize))) outphases <- replicateM(mkReg(unpack(0)));

    Reg#(Bit#(TLog#(TAdd#(nbins, 1)))) i <- mkReg(0);
    Reg#(FixedPoint#(isize, fsize)) bin <- mkReg(0);
    // 根据 Testbench 代码，可能存在同一个周期 feed 和 check 的情况，需要在同一个周期内完成 Put 和 Get
    Reg#(Bool) init_flag <- mkReg(True);

    rule inputRule(i == fromInteger(valueOf(nbins)) || init_flag);
        let x = inputFIFO.first();
        inputFIFO.deq();
        i <= 0;
        bin <= 0;   // bin = i * factor
        inputData <= x;
        outputData <= replicate(unpack(0));
        init_flag <= False;
    endrule

    rule processDataRule(i < fromInteger(valueOf(nbins)) && !init_flag);
        i <= i + 1;
        let x = inputData[i];
        let phase = x.phase;
        let mag = x.magnitude;

        let dphase = phase - inphases[i];
        inphases[i] <= phase;
        // Min#(TAdd#(isize, fsize), 2, 2)
        let nbin = bin + factor;
        bin <= nbin;
        // 避免了乘法

        // Int 是固定精度的，Integer 是任意精度的
        // 这里转换需要保证 psize 小于 isize，否则会丢失精度
        // Add#(psize, a__, isize)
        FixedPoint#(isize, fsize) dphase_fp = fromInt(dphase);
        // bin 是 FixedPoint 无法作为下标使用，需要转换一下
        // 注意到 C 代码里 bin 和 nbin 都是 int
        let bin_int = fxptGetInt(bin);
        let nbin_int = fxptGetInt(nbin);
        if (nbin_int != bin_int && bin_int >= 0 && bin_int < fromInteger(valueOf(nbins))) begin
            let shifted_fp = fxptMult(dphase_fp, factor);    // 做全精度乘法，然后保留整数部分
            Phase#(psize) shifted_int = truncate(fxptGetInt(shifted_fp));
            let outputRes = outphases[bin_int] + shifted_int;
            outphases[bin_int] <= outputRes;
            outputData[bin_int] <= cmplxmp(mag, outputRes);
        end
    endrule


    rule outputRule(i == fromInteger(valueOf(nbins)) && !init_flag);
        outputFIFO.enq(outputData);
    endrule

    interface Put request;
        method Action put(Vector#(nbins, ComplexMP#(isize, fsize, psize)) x);
            inputFIFO.enq(x);
        endmethod
    endinterface

    interface Get response = toGet(outputFIFO);

endmodule

