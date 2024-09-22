package ConnectalProcIndication;

import FIFO::*;
import FIFOF::*;
import GetPut::*;
import Connectable::*;
import Clocks::*;
import FloatingPoint::*;
import Adapter::*;
import Leds::*;
import Vector::*;
import SpecialFIFOs::*;
import ConnectalConfig::*;
import ConnectalMemory::*;
import Portal::*;
import CtrlMux::*;
import ConnectalMemTypes::*;
import Pipe::*;
import HostInterface::*;
import LinkerLib::*;
import Ifc::*;
import GetPut::*;
import Vector::*;




typedef struct {
    Bit#(18) mess;
} SendMessage_Message deriving (Bits);

// exposed wrapper portal interface
interface ConnectalProcIndicationInputPipes;
    interface PipeOut#(SendMessage_Message) sendMessage_PipeOut;

endinterface
typedef PipePortal#(1, 0, SlaveDataBusWidth) ConnectalProcIndicationPortalInput;
interface ConnectalProcIndicationInput;
    interface ConnectalProcIndicationPortalInput portalIfc;
    interface ConnectalProcIndicationInputPipes pipes;
endinterface
interface ConnectalProcIndicationWrapperPortal;
    interface ConnectalProcIndicationPortalInput portalIfc;
endinterface
// exposed wrapper MemPortal interface
interface ConnectalProcIndicationWrapper;
    interface StdPortal portalIfc;
endinterface

instance Connectable#(ConnectalProcIndicationInputPipes,ConnectalProcIndication);
   module mkConnection#(ConnectalProcIndicationInputPipes pipes, ConnectalProcIndication ifc)(Empty);

    rule handle_sendMessage_request;
        let request <- toGet(pipes.sendMessage_PipeOut).get();
        ifc.sendMessage(request.mess);
    endrule

   endmodule
endinstance

// exposed wrapper Portal implementation
(* synthesize *)
module mkConnectalProcIndicationInput(ConnectalProcIndicationInput);
    Vector#(1, PipeIn#(Bit#(SlaveDataBusWidth))) requestPipeIn;

    AdapterFromBus#(SlaveDataBusWidth,SendMessage_Message) sendMessage_requestAdapter <- mkAdapterFromBus();
    requestPipeIn[0] = sendMessage_requestAdapter.in;

    interface PipePortal portalIfc;
        interface PortalSize messageSize;
        method Bit#(16) size(Bit#(16) methodNumber);
            case (methodNumber)
            0: return fromInteger(valueOf(SizeOf#(SendMessage_Message)));
            endcase
        endmethod
        endinterface
        interface Vector requests = requestPipeIn;
        interface Vector indications = nil;
        interface PortalInterrupt intr;
           method Bool status();
              return False;
           endmethod
           method Bit#(dataWidth) channel();
              return -1;
           endmethod
        endinterface
    endinterface
    interface ConnectalProcIndicationInputPipes pipes;
        interface sendMessage_PipeOut = sendMessage_requestAdapter.out;
    endinterface
endmodule

module mkConnectalProcIndicationWrapperPortal#(ConnectalProcIndication ifc)(ConnectalProcIndicationWrapperPortal);
    let dut <- mkConnectalProcIndicationInput;
    mkConnection(dut.pipes, ifc);
    interface PipePortal portalIfc = dut.portalIfc;
endmodule

interface ConnectalProcIndicationWrapperMemPortalPipes;
    interface ConnectalProcIndicationInputPipes pipes;
    interface MemPortal#(12,32) portalIfc;
endinterface

(* synthesize *)
module mkConnectalProcIndicationWrapperMemPortalPipes#(Bit#(SlaveDataBusWidth) id)(ConnectalProcIndicationWrapperMemPortalPipes);

  let dut <- mkConnectalProcIndicationInput;
  PortalCtrlMemSlave#(SlaveControlAddrWidth,SlaveDataBusWidth) ctrlPort <- mkPortalCtrlMemSlave(id, dut.portalIfc.intr);
  let memslave  <- mkMemMethodMuxIn(ctrlPort.memSlave,dut.portalIfc.requests);
  interface ConnectalProcIndicationInputPipes pipes = dut.pipes;
  interface MemPortal portalIfc = (interface MemPortal;
      interface PhysMemSlave slave = memslave;
      interface ReadOnly interrupt = ctrlPort.interrupt;
      interface WriteOnly num_portals = ctrlPort.num_portals;
    endinterface);
endmodule

// exposed wrapper MemPortal implementation
module mkConnectalProcIndicationWrapper#(idType id, ConnectalProcIndication ifc)(ConnectalProcIndicationWrapper)
   provisos (Bits#(idType, a__),
	     Add#(b__, a__, SlaveDataBusWidth));
  let dut <- mkConnectalProcIndicationWrapperMemPortalPipes(zeroExtend(pack(id)));
  mkConnection(dut.pipes, ifc);
  interface MemPortal portalIfc = dut.portalIfc;
endmodule

// exposed proxy interface
typedef PipePortal#(0, 1, SlaveDataBusWidth) ConnectalProcIndicationPortalOutput;
interface ConnectalProcIndicationOutput;
    interface ConnectalProcIndicationPortalOutput portalIfc;
    interface Ifc::ConnectalProcIndication ifc;
endinterface
interface ConnectalProcIndicationProxy;
    interface StdPortal portalIfc;
    interface Ifc::ConnectalProcIndication ifc;
endinterface

interface ConnectalProcIndicationOutputPipeMethods;
    interface PipeIn#(SendMessage_Message) sendMessage;

endinterface

interface ConnectalProcIndicationOutputPipes;
    interface ConnectalProcIndicationOutputPipeMethods methods;
    interface ConnectalProcIndicationPortalOutput portalIfc;
endinterface

function Bit#(16) getConnectalProcIndicationMessageSize(Bit#(16) methodNumber);
    case (methodNumber)
            0: return fromInteger(valueOf(SizeOf#(SendMessage_Message)));
    endcase
endfunction

(* synthesize *)
module mkConnectalProcIndicationOutputPipes(ConnectalProcIndicationOutputPipes);
    Vector#(1, PipeOut#(Bit#(SlaveDataBusWidth))) indicationPipes;

    AdapterToBus#(SlaveDataBusWidth,SendMessage_Message) sendMessage_responseAdapter <- mkAdapterToBus();
    indicationPipes[0] = sendMessage_responseAdapter.out;

    PortalInterrupt#(SlaveDataBusWidth) intrInst <- mkPortalInterrupt(indicationPipes);
    interface ConnectalProcIndicationOutputPipeMethods methods;
    interface sendMessage = sendMessage_responseAdapter.in;

    endinterface
    interface PipePortal portalIfc;
        interface PortalSize messageSize;
            method size = getConnectalProcIndicationMessageSize;
        endinterface
        interface Vector requests = nil;
        interface Vector indications = indicationPipes;
        interface PortalInterrupt intr = intrInst;
    endinterface
endmodule

(* synthesize *)
module mkConnectalProcIndicationOutput(ConnectalProcIndicationOutput);
    let indicationPipes <- mkConnectalProcIndicationOutputPipes;
    interface Ifc::ConnectalProcIndication ifc;

    method Action sendMessage(Bit#(18) mess);
        indicationPipes.methods.sendMessage.enq(SendMessage_Message {mess: mess});
        //$display("indicationMethod 'sendMessage' invoked");
    endmethod
    endinterface
    interface PipePortal portalIfc = indicationPipes.portalIfc;
endmodule
instance PortalMessageSize#(ConnectalProcIndicationOutput);
   function Bit#(16) portalMessageSize(ConnectalProcIndicationOutput p, Bit#(16) methodNumber);
      return getConnectalProcIndicationMessageSize(methodNumber);
   endfunction
endinstance


interface ConnectalProcIndicationInverse;
    method ActionValue#(SendMessage_Message) sendMessage;

endinterface

interface ConnectalProcIndicationInverter;
    interface Ifc::ConnectalProcIndication ifc;
    interface ConnectalProcIndicationInverse inverseIfc;
endinterface

instance Connectable#(ConnectalProcIndicationInverse, ConnectalProcIndicationOutputPipeMethods);
   module mkConnection#(ConnectalProcIndicationInverse in, ConnectalProcIndicationOutputPipeMethods out)(Empty);
    mkConnection(in.sendMessage, out.sendMessage);

   endmodule
endinstance

(* synthesize *)
module mkConnectalProcIndicationInverter(ConnectalProcIndicationInverter);
    FIFOF#(SendMessage_Message) fifo_sendMessage <- mkFIFOF();

    interface Ifc::ConnectalProcIndication ifc;

    method Action sendMessage(Bit#(18) mess);
        fifo_sendMessage.enq(SendMessage_Message {mess: mess});
    endmethod
    endinterface
    interface ConnectalProcIndicationInverse inverseIfc;

    method ActionValue#(SendMessage_Message) sendMessage;
        fifo_sendMessage.deq;
        return fifo_sendMessage.first;
    endmethod
    endinterface
endmodule

(* synthesize *)
module mkConnectalProcIndicationInverterV(ConnectalProcIndicationInverter);
    PutInverter#(SendMessage_Message) inv_sendMessage <- mkPutInverter();

    interface Ifc::ConnectalProcIndication ifc;

    method Action sendMessage(Bit#(18) mess);
        inv_sendMessage.mod.put(SendMessage_Message {mess: mess});
    endmethod
    endinterface
    interface ConnectalProcIndicationInverse inverseIfc;

    method ActionValue#(SendMessage_Message) sendMessage;
        let v <- inv_sendMessage.inverse.get;
        return v;
    endmethod
    endinterface
endmodule

// synthesizeable proxy MemPortal
(* synthesize *)
module mkConnectalProcIndicationProxySynth#(Bit#(SlaveDataBusWidth) id)(ConnectalProcIndicationProxy);
  let dut <- mkConnectalProcIndicationOutput();
  PortalCtrlMemSlave#(SlaveControlAddrWidth,SlaveDataBusWidth) ctrlPort <- mkPortalCtrlMemSlave(id, dut.portalIfc.intr);
  let memslave  <- mkMemMethodMuxOut(ctrlPort.memSlave,dut.portalIfc.indications);
  interface MemPortal portalIfc = (interface MemPortal;
      interface PhysMemSlave slave = memslave;
      interface ReadOnly interrupt = ctrlPort.interrupt;
      interface WriteOnly num_portals = ctrlPort.num_portals;
    endinterface);
  interface Ifc::ConnectalProcIndication ifc = dut.ifc;
endmodule

// exposed proxy MemPortal
module mkConnectalProcIndicationProxy#(idType id)(ConnectalProcIndicationProxy)
   provisos (Bits#(idType, a__),
	     Add#(b__, a__, SlaveDataBusWidth));
   let rv <- mkConnectalProcIndicationProxySynth(extend(pack(id)));
   return rv;
endmodule
endpackage: ConnectalProcIndication
