import Complex::*;
import ComplexMP::*;
import FixedPoint::*;
import FShow::*;
import Real::*;
import Cordic::*;
import FIFO::*;
import Vector::*;
import ClientServer::*;
import GetPut::*;

typedef Server#(
    Vector#(nbins, ComplexMP#(isize, fsize, psize)),
    Vector#(nbins, Complex#(FixedPoint#(isize, fsize)))
) FromMP#(numeric type nbins, numeric type isize, numeric type fsize, numeric type psize);


module mkFromMP(FromMP#(nbins, isize, fsize, psize) ifc)
    provisos(
        Add#(a__, 1, isize),
        Min#(TAdd#(isize, fsize), 2, 2)
    );

    FromMagnitudePhase#(isize, fsize, psize) cordic <- mkCordicFromMagnitudePhase();

    FIFO#(Vector#(nbins, ComplexMP#(isize, fsize, psize))) inputFIFO <- mkFIFO();
    FIFO#(Vector#(nbins, Complex#(FixedPoint#(isize, fsize)))) outputFIFO <- mkFIFO();

    Reg#(Vector#(nbins, ComplexMP#(isize, fsize, psize))) inputData <- mkReg(replicate(unpack(0)));
    Reg#(Vector#(nbins, Complex#(FixedPoint#(isize, fsize)))) outputData <- mkReg(replicate(unpack(0)));
    Reg#(Bit#(TLog#(TAdd#(nbins,1)))) i <- mkReg(0);

    rule processInput (i == 0);
        inputData <= inputFIFO.first();
        inputFIFO.deq();
        cordic.request.put(inputData[0]);
        i <= 1;
    endrule

    rule processConversion (i != 0);
        let result <- cordic.response.get();
        outputData[i - 1] <= result;
        
        if (i == fromInteger(valueOf(nbins))) begin
            outputFIFO.enq(outputData);
            i <= 0;
        end else begin
            cordic.request.put(inputData[i]);
            i <= i + 1;
        end
    endrule

    interface Put request = toPut(inputFIFO);
    interface Get response = toGet(outputFIFO);
endmodule