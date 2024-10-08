import FIFO::*;
import FixedPoint::*;
import Vector::*;

import AudioProcessorTypes::*;
// import FilterCoefficients::*;
import Multiplier::*;

module mkFIRFilter (Vector#(tnp1, FixedPoint#(16,16)) coeffs, AudioProcessor ifc);
    FIFO#(Sample) infifo <- mkFIFO();
    FIFO#(Sample) outfifo <- mkFIFO();
    
    // Reg#(Sample) r0 <- mkReg(0);
    // Reg#(Sample) r1 <- mkReg(0);
    // Reg#(Sample) r2 <- mkReg(0);
    // Reg#(Sample) r3 <- mkReg(0);
    // Reg#(Sample) r4 <- mkReg(0);
    // Reg#(Sample) r5 <- mkReg(0);
    // Reg#(Sample) r6 <- mkReg(0);
    // Reg#(Sample) r7 <- mkReg(0);
    Integer numtaps = valueOf(TSub#(tnp1, 1));
    Vector#(TSub#(tnp1, 1), Reg#(Sample)) r <- replicateM(mkReg(0));

    Vector#(tnp1, Multiplier) multiplier <- replicateM(mkMultiplier);
    
    rule process (True);
        Sample sample = infifo.first();
        infifo.deq();
        for (Integer i = 0; i < numtaps - 1; i = i + 1) begin
            r[i+1] <= r[i];
        end
        multiplier[0].putOperands(coeffs[0], sample);
        // FixedPoint#(16, 16) accumulate = 
        //       c[0] * fromInt(sample)
        //     + c[1] * fromInt(r0)
        //     + c[2] * fromInt(r1)
        //     + c[3] * fromInt(r2)
        //     + c[4] * fromInt(r3)
        //     + c[5] * fromInt(r4)
        //     + c[6] * fromInt(r5)
        //     + c[7] * fromInt(r6)
        //     + c[8] * fromInt(r7);
        for (Integer i = 1; i < valueOf(tnp1); i = i + 1) begin
            multiplier[i].putOperands(coeffs[i], r[i-1]);    
        end
    endrule

    rule get_multiplier_res;
        FixedPoint#(16, 16) accumulate <- multiplier[0].getResult();
        for (Integer i = 1; i < valueOf(tnp1); i = i + 1) begin
            let x <- multiplier[i].getResult();
            accumulate = accumulate + x;
        end
        outfifo.enq(fxptGetInt(accumulate));
    endrule

    method Action putSampleInput(Sample in);
        infifo.enq(in);
    endmethod

    method ActionValue#(Sample) getSampleOutput();
        outfifo.deq();
        return outfifo.first();
    endmethod
endmodule
