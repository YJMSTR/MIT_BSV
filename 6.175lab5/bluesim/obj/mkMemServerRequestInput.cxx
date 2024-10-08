/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Mon Sep 23 14:43:33 UTC 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkMemServerRequestInput.h"


/* Constructor */
MOD_mkMemServerRequestInput::MOD_mkMemServerRequestInput(tSimStateHdl simHdl,
							 char const *name,
							 Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_addrTrans_requestAdapter_count(simHdl,
					"addrTrans_requestAdapter_count",
					this,
					1u,
					(tUInt8)0u,
					(tUInt8)0u),
    INST_addrTrans_requestAdapter_fbnbuff(simHdl,
					  "addrTrans_requestAdapter_fbnbuff",
					  this,
					  64u,
					  0llu,
					  (tUInt8)0u),
    INST_addrTrans_requestAdapter_fifo(simHdl,
				       "addrTrans_requestAdapter_fifo",
				       this,
				       64u,
				       1u,
				       (tUInt8)1u,
				       0u),
    INST_memoryTraffic_requestAdapter_fbnbuff(simHdl,
					      "memoryTraffic_requestAdapter_fbnbuff",
					      this,
					      32u,
					      0u,
					      (tUInt8)0u),
    INST_memoryTraffic_requestAdapter_fifo(simHdl,
					   "memoryTraffic_requestAdapter_fifo",
					   this,
					   1u,
					   1u,
					   (tUInt8)1u,
					   0u),
    INST_setTileState_requestAdapter_fbnbuff(simHdl,
					     "setTileState_requestAdapter_fbnbuff",
					     this,
					     32u,
					     0u,
					     (tUInt8)0u),
    INST_setTileState_requestAdapter_fifo(simHdl,
					  "setTileState_requestAdapter_fifo",
					  this,
					  4u,
					  1u,
					  (tUInt8)1u,
					  0u),
    INST_stateDbg_requestAdapter_fbnbuff(simHdl,
					 "stateDbg_requestAdapter_fbnbuff",
					 this,
					 32u,
					 0u,
					 (tUInt8)0u),
    INST_stateDbg_requestAdapter_fifo(simHdl,
				      "stateDbg_requestAdapter_fifo",
				      this,
				      1u,
				      1u,
				      (tUInt8)1u,
				      0u),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 10u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkMemServerRequestInput::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "addrTrans_requestAdapter_count",
	      SYM_MODULE,
	      &INST_addrTrans_requestAdapter_count);
  init_symbol(&symbols[1u],
	      "addrTrans_requestAdapter_count__h992",
	      SYM_DEF,
	      &DEF_addrTrans_requestAdapter_count__h992,
	      1u);
  init_symbol(&symbols[2u],
	      "addrTrans_requestAdapter_fbnbuff",
	      SYM_MODULE,
	      &INST_addrTrans_requestAdapter_fbnbuff);
  init_symbol(&symbols[3u],
	      "addrTrans_requestAdapter_fifo",
	      SYM_MODULE,
	      &INST_addrTrans_requestAdapter_fifo);
  init_symbol(&symbols[4u],
	      "memoryTraffic_requestAdapter_fbnbuff",
	      SYM_MODULE,
	      &INST_memoryTraffic_requestAdapter_fbnbuff);
  init_symbol(&symbols[5u],
	      "memoryTraffic_requestAdapter_fifo",
	      SYM_MODULE,
	      &INST_memoryTraffic_requestAdapter_fifo);
  init_symbol(&symbols[6u],
	      "setTileState_requestAdapter_fbnbuff",
	      SYM_MODULE,
	      &INST_setTileState_requestAdapter_fbnbuff);
  init_symbol(&symbols[7u],
	      "setTileState_requestAdapter_fifo",
	      SYM_MODULE,
	      &INST_setTileState_requestAdapter_fifo);
  init_symbol(&symbols[8u],
	      "stateDbg_requestAdapter_fbnbuff",
	      SYM_MODULE,
	      &INST_stateDbg_requestAdapter_fbnbuff);
  init_symbol(&symbols[9u],
	      "stateDbg_requestAdapter_fifo",
	      SYM_MODULE,
	      &INST_stateDbg_requestAdapter_fifo);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_mkMemServerRequestInput::METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber)
{
  tUInt32 DEF_IF_portalIfc_messageSize_size_methodNumber_EQ__ETC___d6;
  tUInt32 PORT_portalIfc_messageSize_size;
  DEF_IF_portalIfc_messageSize_size_methodNumber_EQ__ETC___d6 = 1u;
  switch (ARG_portalIfc_messageSize_size_methodNumber) {
  case 0u:
    PORT_portalIfc_messageSize_size = 64u;
    break;
  case 1u:
    PORT_portalIfc_messageSize_size = 4u;
    break;
  default:
    PORT_portalIfc_messageSize_size = DEF_IF_portalIfc_messageSize_size_methodNumber_EQ__ETC___d6;
  }
  return PORT_portalIfc_messageSize_size;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_messageSize_size()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_messageSize_size;
  tUInt8 PORT_RDY_portalIfc_messageSize_size;
  DEF_CAN_FIRE_portalIfc_messageSize_size = (tUInt8)1u;
  PORT_RDY_portalIfc_messageSize_size = DEF_CAN_FIRE_portalIfc_messageSize_size;
  return PORT_RDY_portalIfc_messageSize_size;
}

tUInt8 MOD_mkMemServerRequestInput::METH_portalIfc_intr_status()
{
  tUInt8 PORT_portalIfc_intr_status;
  PORT_portalIfc_intr_status = (tUInt8)0u;
  return PORT_portalIfc_intr_status;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_intr_status()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_status;
  tUInt8 PORT_RDY_portalIfc_intr_status;
  DEF_CAN_FIRE_portalIfc_intr_status = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_status = DEF_CAN_FIRE_portalIfc_intr_status;
  return PORT_RDY_portalIfc_intr_status;
}

tUInt32 MOD_mkMemServerRequestInput::METH_portalIfc_intr_channel()
{
  tUInt32 PORT_portalIfc_intr_channel;
  PORT_portalIfc_intr_channel = 4294967295u;
  return PORT_portalIfc_intr_channel;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_intr_channel()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_channel;
  tUInt8 PORT_RDY_portalIfc_intr_channel;
  DEF_CAN_FIRE_portalIfc_intr_channel = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_channel = DEF_CAN_FIRE_portalIfc_intr_channel;
  return PORT_RDY_portalIfc_intr_channel;
}

void MOD_mkMemServerRequestInput::METH_portalIfc_requests_0_enq(tUInt32 ARG_portalIfc_requests_0_enq_v)
{
  tUInt8 DEF_x__h997;
  tUInt8 DEF_NOT_addrTrans_requestAdapter_count_1_2_AND_add_ETC___d14;
  tUInt64 DEF_newbuff__h951;
  tUInt32 DEF__read_BITS_31_TO_0___h987;
  tUInt64 DEF__read__h65;
  DEF__read__h65 = INST_addrTrans_requestAdapter_fbnbuff.METH_read();
  DEF_addrTrans_requestAdapter_count__h992 = INST_addrTrans_requestAdapter_count.METH_read();
  DEF__read_BITS_31_TO_0___h987 = (tUInt32)(DEF__read__h65);
  DEF_newbuff__h951 = (((tUInt64)(DEF__read_BITS_31_TO_0___h987)) << 32u) | (tUInt64)(ARG_portalIfc_requests_0_enq_v);
  DEF_NOT_addrTrans_requestAdapter_count_1___d12 = !DEF_addrTrans_requestAdapter_count__h992;
  DEF_x__h997 = (tUInt8)1u & (DEF_addrTrans_requestAdapter_count__h992 + (tUInt8)1u);
  DEF_NOT_addrTrans_requestAdapter_count_1_2_AND_add_ETC___d14 = DEF_NOT_addrTrans_requestAdapter_count_1___d12 && DEF_x__h997;
  INST_addrTrans_requestAdapter_fbnbuff.METH_write(DEF_newbuff__h951);
  INST_addrTrans_requestAdapter_count.METH_write(DEF_NOT_addrTrans_requestAdapter_count_1_2_AND_add_ETC___d14);
  if (DEF_addrTrans_requestAdapter_count__h992)
    INST_addrTrans_requestAdapter_fifo.METH_enq(DEF_newbuff__h951);
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_0_enq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_0_enq;
  tUInt8 PORT_RDY_portalIfc_requests_0_enq;
  DEF_addrTrans_requestAdapter_fifo_notFull____d15 = INST_addrTrans_requestAdapter_fifo.METH_notFull();
  DEF_addrTrans_requestAdapter_count__h992 = INST_addrTrans_requestAdapter_count.METH_read();
  DEF_NOT_addrTrans_requestAdapter_count_1___d12 = !DEF_addrTrans_requestAdapter_count__h992;
  DEF_CAN_FIRE_portalIfc_requests_0_enq = (DEF_NOT_addrTrans_requestAdapter_count_1___d12 || DEF_addrTrans_requestAdapter_fifo_notFull____d15) && (DEF_NOT_addrTrans_requestAdapter_count_1___d12 || INST_addrTrans_requestAdapter_fifo.METH_i_notFull());
  PORT_RDY_portalIfc_requests_0_enq = DEF_CAN_FIRE_portalIfc_requests_0_enq;
  return PORT_RDY_portalIfc_requests_0_enq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_portalIfc_requests_0_notFull()
{
  tUInt8 PORT_portalIfc_requests_0_notFull;
  DEF_addrTrans_requestAdapter_fifo_notFull____d15 = INST_addrTrans_requestAdapter_fifo.METH_notFull();
  PORT_portalIfc_requests_0_notFull = DEF_addrTrans_requestAdapter_fifo_notFull____d15;
  return PORT_portalIfc_requests_0_notFull;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_0_notFull()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_0_notFull;
  tUInt8 PORT_RDY_portalIfc_requests_0_notFull;
  DEF_CAN_FIRE_portalIfc_requests_0_notFull = (tUInt8)1u;
  PORT_RDY_portalIfc_requests_0_notFull = DEF_CAN_FIRE_portalIfc_requests_0_notFull;
  return PORT_RDY_portalIfc_requests_0_notFull;
}

void MOD_mkMemServerRequestInput::METH_portalIfc_requests_1_enq(tUInt32 ARG_portalIfc_requests_1_enq_v)
{
  tUInt8 DEF_x__h1137;
  DEF_x__h1137 = (tUInt8)((tUInt8)15u & ARG_portalIfc_requests_1_enq_v);
  INST_setTileState_requestAdapter_fbnbuff.METH_write(ARG_portalIfc_requests_1_enq_v);
  INST_setTileState_requestAdapter_fifo.METH_enq(DEF_x__h1137);
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_1_enq()
{
  tUInt8 PORT_RDY_portalIfc_requests_1_enq;
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_1_enq;
  DEF_setTileState_requestAdapter_fifo_notFull____d20 = INST_setTileState_requestAdapter_fifo.METH_notFull();
  DEF_CAN_FIRE_portalIfc_requests_1_enq = DEF_setTileState_requestAdapter_fifo_notFull____d20 && INST_setTileState_requestAdapter_fifo.METH_i_notFull();
  PORT_RDY_portalIfc_requests_1_enq = DEF_CAN_FIRE_portalIfc_requests_1_enq;
  return PORT_RDY_portalIfc_requests_1_enq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_portalIfc_requests_1_notFull()
{
  tUInt8 PORT_portalIfc_requests_1_notFull;
  DEF_setTileState_requestAdapter_fifo_notFull____d20 = INST_setTileState_requestAdapter_fifo.METH_notFull();
  PORT_portalIfc_requests_1_notFull = DEF_setTileState_requestAdapter_fifo_notFull____d20;
  return PORT_portalIfc_requests_1_notFull;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_1_notFull()
{
  tUInt8 PORT_RDY_portalIfc_requests_1_notFull;
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_1_notFull;
  DEF_CAN_FIRE_portalIfc_requests_1_notFull = (tUInt8)1u;
  PORT_RDY_portalIfc_requests_1_notFull = DEF_CAN_FIRE_portalIfc_requests_1_notFull;
  return PORT_RDY_portalIfc_requests_1_notFull;
}

void MOD_mkMemServerRequestInput::METH_portalIfc_requests_2_enq(tUInt32 ARG_portalIfc_requests_2_enq_v)
{
  tUInt8 DEF_x__h1234;
  DEF_x__h1234 = (tUInt8)((tUInt8)1u & ARG_portalIfc_requests_2_enq_v);
  INST_stateDbg_requestAdapter_fbnbuff.METH_write(ARG_portalIfc_requests_2_enq_v);
  INST_stateDbg_requestAdapter_fifo.METH_enq(DEF_x__h1234);
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_2_enq()
{
  tUInt8 PORT_RDY_portalIfc_requests_2_enq;
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_2_enq;
  DEF_stateDbg_requestAdapter_fifo_notFull____d23 = INST_stateDbg_requestAdapter_fifo.METH_notFull();
  DEF_CAN_FIRE_portalIfc_requests_2_enq = DEF_stateDbg_requestAdapter_fifo_notFull____d23 && INST_stateDbg_requestAdapter_fifo.METH_i_notFull();
  PORT_RDY_portalIfc_requests_2_enq = DEF_CAN_FIRE_portalIfc_requests_2_enq;
  return PORT_RDY_portalIfc_requests_2_enq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_portalIfc_requests_2_notFull()
{
  tUInt8 PORT_portalIfc_requests_2_notFull;
  DEF_stateDbg_requestAdapter_fifo_notFull____d23 = INST_stateDbg_requestAdapter_fifo.METH_notFull();
  PORT_portalIfc_requests_2_notFull = DEF_stateDbg_requestAdapter_fifo_notFull____d23;
  return PORT_portalIfc_requests_2_notFull;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_2_notFull()
{
  tUInt8 PORT_RDY_portalIfc_requests_2_notFull;
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_2_notFull;
  DEF_CAN_FIRE_portalIfc_requests_2_notFull = (tUInt8)1u;
  PORT_RDY_portalIfc_requests_2_notFull = DEF_CAN_FIRE_portalIfc_requests_2_notFull;
  return PORT_RDY_portalIfc_requests_2_notFull;
}

void MOD_mkMemServerRequestInput::METH_portalIfc_requests_3_enq(tUInt32 ARG_portalIfc_requests_3_enq_v)
{
  tUInt8 DEF_x__h1331;
  DEF_x__h1331 = (tUInt8)((tUInt8)1u & ARG_portalIfc_requests_3_enq_v);
  INST_memoryTraffic_requestAdapter_fbnbuff.METH_write(ARG_portalIfc_requests_3_enq_v);
  INST_memoryTraffic_requestAdapter_fifo.METH_enq(DEF_x__h1331);
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_3_enq()
{
  tUInt8 PORT_RDY_portalIfc_requests_3_enq;
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_3_enq;
  DEF_memoryTraffic_requestAdapter_fifo_notFull____d26 = INST_memoryTraffic_requestAdapter_fifo.METH_notFull();
  DEF_CAN_FIRE_portalIfc_requests_3_enq = DEF_memoryTraffic_requestAdapter_fifo_notFull____d26 && INST_memoryTraffic_requestAdapter_fifo.METH_i_notFull();
  PORT_RDY_portalIfc_requests_3_enq = DEF_CAN_FIRE_portalIfc_requests_3_enq;
  return PORT_RDY_portalIfc_requests_3_enq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_portalIfc_requests_3_notFull()
{
  tUInt8 PORT_portalIfc_requests_3_notFull;
  DEF_memoryTraffic_requestAdapter_fifo_notFull____d26 = INST_memoryTraffic_requestAdapter_fifo.METH_notFull();
  PORT_portalIfc_requests_3_notFull = DEF_memoryTraffic_requestAdapter_fifo_notFull____d26;
  return PORT_portalIfc_requests_3_notFull;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_portalIfc_requests_3_notFull()
{
  tUInt8 PORT_RDY_portalIfc_requests_3_notFull;
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_3_notFull;
  DEF_CAN_FIRE_portalIfc_requests_3_notFull = (tUInt8)1u;
  PORT_RDY_portalIfc_requests_3_notFull = DEF_CAN_FIRE_portalIfc_requests_3_notFull;
  return PORT_RDY_portalIfc_requests_3_notFull;
}

tUInt64 MOD_mkMemServerRequestInput::METH_pipes_addrTrans_PipeOut_first()
{
  tUInt64 PORT_pipes_addrTrans_PipeOut_first;
  PORT_pipes_addrTrans_PipeOut_first = INST_addrTrans_requestAdapter_fifo.METH_first();
  return PORT_pipes_addrTrans_PipeOut_first;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_addrTrans_PipeOut_first()
{
  tUInt8 PORT_RDY_pipes_addrTrans_PipeOut_first;
  tUInt8 DEF_CAN_FIRE_pipes_addrTrans_PipeOut_first;
  DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28 = INST_addrTrans_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_addrTrans_PipeOut_first = DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28;
  PORT_RDY_pipes_addrTrans_PipeOut_first = DEF_CAN_FIRE_pipes_addrTrans_PipeOut_first;
  return PORT_RDY_pipes_addrTrans_PipeOut_first;
}

void MOD_mkMemServerRequestInput::METH_pipes_addrTrans_PipeOut_deq()
{
  INST_addrTrans_requestAdapter_fifo.METH_deq();
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_addrTrans_PipeOut_deq()
{
  tUInt8 PORT_RDY_pipes_addrTrans_PipeOut_deq;
  tUInt8 DEF_CAN_FIRE_pipes_addrTrans_PipeOut_deq;
  DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28 = INST_addrTrans_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_addrTrans_PipeOut_deq = DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28;
  PORT_RDY_pipes_addrTrans_PipeOut_deq = DEF_CAN_FIRE_pipes_addrTrans_PipeOut_deq;
  return PORT_RDY_pipes_addrTrans_PipeOut_deq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_addrTrans_PipeOut_notEmpty()
{
  tUInt8 PORT_pipes_addrTrans_PipeOut_notEmpty;
  PORT_pipes_addrTrans_PipeOut_notEmpty = INST_addrTrans_requestAdapter_fifo.METH_notEmpty();
  return PORT_pipes_addrTrans_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_addrTrans_PipeOut_notEmpty()
{
  tUInt8 PORT_RDY_pipes_addrTrans_PipeOut_notEmpty;
  tUInt8 DEF_CAN_FIRE_pipes_addrTrans_PipeOut_notEmpty;
  DEF_CAN_FIRE_pipes_addrTrans_PipeOut_notEmpty = (tUInt8)1u;
  PORT_RDY_pipes_addrTrans_PipeOut_notEmpty = DEF_CAN_FIRE_pipes_addrTrans_PipeOut_notEmpty;
  return PORT_RDY_pipes_addrTrans_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_setTileState_PipeOut_first()
{
  tUInt8 PORT_pipes_setTileState_PipeOut_first;
  PORT_pipes_setTileState_PipeOut_first = INST_setTileState_requestAdapter_fifo.METH_first();
  return PORT_pipes_setTileState_PipeOut_first;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_setTileState_PipeOut_first()
{
  tUInt8 PORT_RDY_pipes_setTileState_PipeOut_first;
  tUInt8 DEF_CAN_FIRE_pipes_setTileState_PipeOut_first;
  DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29 = INST_setTileState_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_setTileState_PipeOut_first = DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29;
  PORT_RDY_pipes_setTileState_PipeOut_first = DEF_CAN_FIRE_pipes_setTileState_PipeOut_first;
  return PORT_RDY_pipes_setTileState_PipeOut_first;
}

void MOD_mkMemServerRequestInput::METH_pipes_setTileState_PipeOut_deq()
{
  INST_setTileState_requestAdapter_fifo.METH_deq();
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_setTileState_PipeOut_deq()
{
  tUInt8 PORT_RDY_pipes_setTileState_PipeOut_deq;
  tUInt8 DEF_CAN_FIRE_pipes_setTileState_PipeOut_deq;
  DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29 = INST_setTileState_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_setTileState_PipeOut_deq = DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29;
  PORT_RDY_pipes_setTileState_PipeOut_deq = DEF_CAN_FIRE_pipes_setTileState_PipeOut_deq;
  return PORT_RDY_pipes_setTileState_PipeOut_deq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_setTileState_PipeOut_notEmpty()
{
  tUInt8 PORT_pipes_setTileState_PipeOut_notEmpty;
  PORT_pipes_setTileState_PipeOut_notEmpty = INST_setTileState_requestAdapter_fifo.METH_notEmpty();
  return PORT_pipes_setTileState_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_setTileState_PipeOut_notEmpty()
{
  tUInt8 PORT_RDY_pipes_setTileState_PipeOut_notEmpty;
  tUInt8 DEF_CAN_FIRE_pipes_setTileState_PipeOut_notEmpty;
  DEF_CAN_FIRE_pipes_setTileState_PipeOut_notEmpty = (tUInt8)1u;
  PORT_RDY_pipes_setTileState_PipeOut_notEmpty = DEF_CAN_FIRE_pipes_setTileState_PipeOut_notEmpty;
  return PORT_RDY_pipes_setTileState_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_stateDbg_PipeOut_first()
{
  tUInt8 PORT_pipes_stateDbg_PipeOut_first;
  PORT_pipes_stateDbg_PipeOut_first = INST_stateDbg_requestAdapter_fifo.METH_first();
  return PORT_pipes_stateDbg_PipeOut_first;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_stateDbg_PipeOut_first()
{
  tUInt8 PORT_RDY_pipes_stateDbg_PipeOut_first;
  tUInt8 DEF_CAN_FIRE_pipes_stateDbg_PipeOut_first;
  DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30 = INST_stateDbg_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_stateDbg_PipeOut_first = DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30;
  PORT_RDY_pipes_stateDbg_PipeOut_first = DEF_CAN_FIRE_pipes_stateDbg_PipeOut_first;
  return PORT_RDY_pipes_stateDbg_PipeOut_first;
}

void MOD_mkMemServerRequestInput::METH_pipes_stateDbg_PipeOut_deq()
{
  INST_stateDbg_requestAdapter_fifo.METH_deq();
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_stateDbg_PipeOut_deq()
{
  tUInt8 PORT_RDY_pipes_stateDbg_PipeOut_deq;
  tUInt8 DEF_CAN_FIRE_pipes_stateDbg_PipeOut_deq;
  DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30 = INST_stateDbg_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_stateDbg_PipeOut_deq = DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30;
  PORT_RDY_pipes_stateDbg_PipeOut_deq = DEF_CAN_FIRE_pipes_stateDbg_PipeOut_deq;
  return PORT_RDY_pipes_stateDbg_PipeOut_deq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_stateDbg_PipeOut_notEmpty()
{
  tUInt8 PORT_pipes_stateDbg_PipeOut_notEmpty;
  PORT_pipes_stateDbg_PipeOut_notEmpty = INST_stateDbg_requestAdapter_fifo.METH_notEmpty();
  return PORT_pipes_stateDbg_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_stateDbg_PipeOut_notEmpty()
{
  tUInt8 PORT_RDY_pipes_stateDbg_PipeOut_notEmpty;
  tUInt8 DEF_CAN_FIRE_pipes_stateDbg_PipeOut_notEmpty;
  DEF_CAN_FIRE_pipes_stateDbg_PipeOut_notEmpty = (tUInt8)1u;
  PORT_RDY_pipes_stateDbg_PipeOut_notEmpty = DEF_CAN_FIRE_pipes_stateDbg_PipeOut_notEmpty;
  return PORT_RDY_pipes_stateDbg_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_memoryTraffic_PipeOut_first()
{
  tUInt8 PORT_pipes_memoryTraffic_PipeOut_first;
  PORT_pipes_memoryTraffic_PipeOut_first = INST_memoryTraffic_requestAdapter_fifo.METH_first();
  return PORT_pipes_memoryTraffic_PipeOut_first;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_memoryTraffic_PipeOut_first()
{
  tUInt8 PORT_RDY_pipes_memoryTraffic_PipeOut_first;
  tUInt8 DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_first;
  DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31 = INST_memoryTraffic_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_first = DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31;
  PORT_RDY_pipes_memoryTraffic_PipeOut_first = DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_first;
  return PORT_RDY_pipes_memoryTraffic_PipeOut_first;
}

void MOD_mkMemServerRequestInput::METH_pipes_memoryTraffic_PipeOut_deq()
{
  INST_memoryTraffic_requestAdapter_fifo.METH_deq();
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_memoryTraffic_PipeOut_deq()
{
  tUInt8 PORT_RDY_pipes_memoryTraffic_PipeOut_deq;
  tUInt8 DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_deq;
  DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31 = INST_memoryTraffic_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_deq = DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31;
  PORT_RDY_pipes_memoryTraffic_PipeOut_deq = DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_deq;
  return PORT_RDY_pipes_memoryTraffic_PipeOut_deq;
}

tUInt8 MOD_mkMemServerRequestInput::METH_pipes_memoryTraffic_PipeOut_notEmpty()
{
  tUInt8 PORT_pipes_memoryTraffic_PipeOut_notEmpty;
  PORT_pipes_memoryTraffic_PipeOut_notEmpty = INST_memoryTraffic_requestAdapter_fifo.METH_notEmpty();
  return PORT_pipes_memoryTraffic_PipeOut_notEmpty;
}

tUInt8 MOD_mkMemServerRequestInput::METH_RDY_pipes_memoryTraffic_PipeOut_notEmpty()
{
  tUInt8 PORT_RDY_pipes_memoryTraffic_PipeOut_notEmpty;
  tUInt8 DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_notEmpty;
  DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_notEmpty = (tUInt8)1u;
  PORT_RDY_pipes_memoryTraffic_PipeOut_notEmpty = DEF_CAN_FIRE_pipes_memoryTraffic_PipeOut_notEmpty;
  return PORT_RDY_pipes_memoryTraffic_PipeOut_notEmpty;
}


/* Reset routines */

void MOD_mkMemServerRequestInput::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_stateDbg_requestAdapter_fifo.reset_RST(ARG_rst_in);
  INST_stateDbg_requestAdapter_fbnbuff.reset_RST(ARG_rst_in);
  INST_setTileState_requestAdapter_fifo.reset_RST(ARG_rst_in);
  INST_setTileState_requestAdapter_fbnbuff.reset_RST(ARG_rst_in);
  INST_memoryTraffic_requestAdapter_fifo.reset_RST(ARG_rst_in);
  INST_memoryTraffic_requestAdapter_fbnbuff.reset_RST(ARG_rst_in);
  INST_addrTrans_requestAdapter_fifo.reset_RST(ARG_rst_in);
  INST_addrTrans_requestAdapter_fbnbuff.reset_RST(ARG_rst_in);
  INST_addrTrans_requestAdapter_count.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkMemServerRequestInput::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkMemServerRequestInput::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_addrTrans_requestAdapter_count.dump_state(indent + 2u);
  INST_addrTrans_requestAdapter_fbnbuff.dump_state(indent + 2u);
  INST_addrTrans_requestAdapter_fifo.dump_state(indent + 2u);
  INST_memoryTraffic_requestAdapter_fbnbuff.dump_state(indent + 2u);
  INST_memoryTraffic_requestAdapter_fifo.dump_state(indent + 2u);
  INST_setTileState_requestAdapter_fbnbuff.dump_state(indent + 2u);
  INST_setTileState_requestAdapter_fifo.dump_state(indent + 2u);
  INST_stateDbg_requestAdapter_fbnbuff.dump_state(indent + 2u);
  INST_stateDbg_requestAdapter_fifo.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkMemServerRequestInput::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 20u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_addrTrans_requestAdapter_count_1___d12", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "addrTrans_requestAdapter_count__h992", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "addrTrans_requestAdapter_fifo_i_notEmpty____d28", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "addrTrans_requestAdapter_fifo_notFull____d15", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "memoryTraffic_requestAdapter_fifo_i_notEmpty____d31", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "memoryTraffic_requestAdapter_fifo_notFull____d26", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "setTileState_requestAdapter_fifo_i_notEmpty____d29", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "setTileState_requestAdapter_fifo_notFull____d20", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "stateDbg_requestAdapter_fifo_i_notEmpty____d30", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "stateDbg_requestAdapter_fifo_notFull____d23", 1u);
  num = INST_addrTrans_requestAdapter_count.dump_VCD_defs(num);
  num = INST_addrTrans_requestAdapter_fbnbuff.dump_VCD_defs(num);
  num = INST_addrTrans_requestAdapter_fifo.dump_VCD_defs(num);
  num = INST_memoryTraffic_requestAdapter_fbnbuff.dump_VCD_defs(num);
  num = INST_memoryTraffic_requestAdapter_fifo.dump_VCD_defs(num);
  num = INST_setTileState_requestAdapter_fbnbuff.dump_VCD_defs(num);
  num = INST_setTileState_requestAdapter_fifo.dump_VCD_defs(num);
  num = INST_stateDbg_requestAdapter_fbnbuff.dump_VCD_defs(num);
  num = INST_stateDbg_requestAdapter_fifo.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkMemServerRequestInput::dump_VCD(tVCDDumpType dt,
					   unsigned int levels,
					   MOD_mkMemServerRequestInput &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkMemServerRequestInput::vcd_defs(tVCDDumpType dt, MOD_mkMemServerRequestInput &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_NOT_addrTrans_requestAdapter_count_1___d12) != DEF_NOT_addrTrans_requestAdapter_count_1___d12)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_addrTrans_requestAdapter_count_1___d12, 1u);
	backing.DEF_NOT_addrTrans_requestAdapter_count_1___d12 = DEF_NOT_addrTrans_requestAdapter_count_1___d12;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_addrTrans_requestAdapter_count__h992) != DEF_addrTrans_requestAdapter_count__h992)
      {
	vcd_write_val(sim_hdl, num, DEF_addrTrans_requestAdapter_count__h992, 1u);
	backing.DEF_addrTrans_requestAdapter_count__h992 = DEF_addrTrans_requestAdapter_count__h992;
      }
      ++num;
      if ((backing.DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28) != DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28)
      {
	vcd_write_val(sim_hdl, num, DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28, 1u);
	backing.DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28 = DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28;
      }
      ++num;
      if ((backing.DEF_addrTrans_requestAdapter_fifo_notFull____d15) != DEF_addrTrans_requestAdapter_fifo_notFull____d15)
      {
	vcd_write_val(sim_hdl, num, DEF_addrTrans_requestAdapter_fifo_notFull____d15, 1u);
	backing.DEF_addrTrans_requestAdapter_fifo_notFull____d15 = DEF_addrTrans_requestAdapter_fifo_notFull____d15;
      }
      ++num;
      if ((backing.DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31) != DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31)
      {
	vcd_write_val(sim_hdl, num, DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31, 1u);
	backing.DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31 = DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31;
      }
      ++num;
      if ((backing.DEF_memoryTraffic_requestAdapter_fifo_notFull____d26) != DEF_memoryTraffic_requestAdapter_fifo_notFull____d26)
      {
	vcd_write_val(sim_hdl, num, DEF_memoryTraffic_requestAdapter_fifo_notFull____d26, 1u);
	backing.DEF_memoryTraffic_requestAdapter_fifo_notFull____d26 = DEF_memoryTraffic_requestAdapter_fifo_notFull____d26;
      }
      ++num;
      if ((backing.DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29) != DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29)
      {
	vcd_write_val(sim_hdl, num, DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29, 1u);
	backing.DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29 = DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29;
      }
      ++num;
      if ((backing.DEF_setTileState_requestAdapter_fifo_notFull____d20) != DEF_setTileState_requestAdapter_fifo_notFull____d20)
      {
	vcd_write_val(sim_hdl, num, DEF_setTileState_requestAdapter_fifo_notFull____d20, 1u);
	backing.DEF_setTileState_requestAdapter_fifo_notFull____d20 = DEF_setTileState_requestAdapter_fifo_notFull____d20;
      }
      ++num;
      if ((backing.DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30) != DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30)
      {
	vcd_write_val(sim_hdl, num, DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30, 1u);
	backing.DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30 = DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30;
      }
      ++num;
      if ((backing.DEF_stateDbg_requestAdapter_fifo_notFull____d23) != DEF_stateDbg_requestAdapter_fifo_notFull____d23)
      {
	vcd_write_val(sim_hdl, num, DEF_stateDbg_requestAdapter_fifo_notFull____d23, 1u);
	backing.DEF_stateDbg_requestAdapter_fifo_notFull____d23 = DEF_stateDbg_requestAdapter_fifo_notFull____d23;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_NOT_addrTrans_requestAdapter_count_1___d12, 1u);
      backing.DEF_NOT_addrTrans_requestAdapter_count_1___d12 = DEF_NOT_addrTrans_requestAdapter_count_1___d12;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_addrTrans_requestAdapter_count__h992, 1u);
      backing.DEF_addrTrans_requestAdapter_count__h992 = DEF_addrTrans_requestAdapter_count__h992;
      vcd_write_val(sim_hdl, num++, DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28, 1u);
      backing.DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28 = DEF_addrTrans_requestAdapter_fifo_i_notEmpty____d28;
      vcd_write_val(sim_hdl, num++, DEF_addrTrans_requestAdapter_fifo_notFull____d15, 1u);
      backing.DEF_addrTrans_requestAdapter_fifo_notFull____d15 = DEF_addrTrans_requestAdapter_fifo_notFull____d15;
      vcd_write_val(sim_hdl, num++, DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31, 1u);
      backing.DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31 = DEF_memoryTraffic_requestAdapter_fifo_i_notEmpty____d31;
      vcd_write_val(sim_hdl, num++, DEF_memoryTraffic_requestAdapter_fifo_notFull____d26, 1u);
      backing.DEF_memoryTraffic_requestAdapter_fifo_notFull____d26 = DEF_memoryTraffic_requestAdapter_fifo_notFull____d26;
      vcd_write_val(sim_hdl, num++, DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29, 1u);
      backing.DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29 = DEF_setTileState_requestAdapter_fifo_i_notEmpty____d29;
      vcd_write_val(sim_hdl, num++, DEF_setTileState_requestAdapter_fifo_notFull____d20, 1u);
      backing.DEF_setTileState_requestAdapter_fifo_notFull____d20 = DEF_setTileState_requestAdapter_fifo_notFull____d20;
      vcd_write_val(sim_hdl, num++, DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30, 1u);
      backing.DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30 = DEF_stateDbg_requestAdapter_fifo_i_notEmpty____d30;
      vcd_write_val(sim_hdl, num++, DEF_stateDbg_requestAdapter_fifo_notFull____d23, 1u);
      backing.DEF_stateDbg_requestAdapter_fifo_notFull____d23 = DEF_stateDbg_requestAdapter_fifo_notFull____d23;
    }
}

void MOD_mkMemServerRequestInput::vcd_prims(tVCDDumpType dt, MOD_mkMemServerRequestInput &backing)
{
  INST_addrTrans_requestAdapter_count.dump_VCD(dt, backing.INST_addrTrans_requestAdapter_count);
  INST_addrTrans_requestAdapter_fbnbuff.dump_VCD(dt, backing.INST_addrTrans_requestAdapter_fbnbuff);
  INST_addrTrans_requestAdapter_fifo.dump_VCD(dt, backing.INST_addrTrans_requestAdapter_fifo);
  INST_memoryTraffic_requestAdapter_fbnbuff.dump_VCD(dt,
						     backing.INST_memoryTraffic_requestAdapter_fbnbuff);
  INST_memoryTraffic_requestAdapter_fifo.dump_VCD(dt, backing.INST_memoryTraffic_requestAdapter_fifo);
  INST_setTileState_requestAdapter_fbnbuff.dump_VCD(dt,
						    backing.INST_setTileState_requestAdapter_fbnbuff);
  INST_setTileState_requestAdapter_fifo.dump_VCD(dt, backing.INST_setTileState_requestAdapter_fifo);
  INST_stateDbg_requestAdapter_fbnbuff.dump_VCD(dt, backing.INST_stateDbg_requestAdapter_fbnbuff);
  INST_stateDbg_requestAdapter_fifo.dump_VCD(dt, backing.INST_stateDbg_requestAdapter_fifo);
}
