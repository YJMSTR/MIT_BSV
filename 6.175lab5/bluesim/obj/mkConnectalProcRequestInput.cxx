/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Mon Sep 23 14:43:33 UTC 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkConnectalProcRequestInput.h"


/* Constructor */
MOD_mkConnectalProcRequestInput::MOD_mkConnectalProcRequestInput(tSimStateHdl simHdl,
								 char const *name,
								 Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_hostToCpu_requestAdapter_fbnbuff(simHdl,
					  "hostToCpu_requestAdapter_fbnbuff",
					  this,
					  32u,
					  0u,
					  (tUInt8)0u),
    INST_hostToCpu_requestAdapter_fifo(simHdl,
				       "hostToCpu_requestAdapter_fifo",
				       this,
				       32u,
				       1u,
				       (tUInt8)1u,
				       0u),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 2u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkConnectalProcRequestInput::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "hostToCpu_requestAdapter_fbnbuff",
	      SYM_MODULE,
	      &INST_hostToCpu_requestAdapter_fbnbuff);
  init_symbol(&symbols[1u],
	      "hostToCpu_requestAdapter_fifo",
	      SYM_MODULE,
	      &INST_hostToCpu_requestAdapter_fifo);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_mkConnectalProcRequestInput::METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber)
{
  tUInt32 PORT_portalIfc_messageSize_size;
  PORT_portalIfc_messageSize_size = 32u;
  return PORT_portalIfc_messageSize_size;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_portalIfc_messageSize_size()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_messageSize_size;
  tUInt8 PORT_RDY_portalIfc_messageSize_size;
  DEF_CAN_FIRE_portalIfc_messageSize_size = (tUInt8)1u;
  PORT_RDY_portalIfc_messageSize_size = DEF_CAN_FIRE_portalIfc_messageSize_size;
  return PORT_RDY_portalIfc_messageSize_size;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_portalIfc_intr_status()
{
  tUInt8 PORT_portalIfc_intr_status;
  PORT_portalIfc_intr_status = (tUInt8)0u;
  return PORT_portalIfc_intr_status;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_portalIfc_intr_status()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_status;
  tUInt8 PORT_RDY_portalIfc_intr_status;
  DEF_CAN_FIRE_portalIfc_intr_status = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_status = DEF_CAN_FIRE_portalIfc_intr_status;
  return PORT_RDY_portalIfc_intr_status;
}

tUInt32 MOD_mkConnectalProcRequestInput::METH_portalIfc_intr_channel()
{
  tUInt32 PORT_portalIfc_intr_channel;
  PORT_portalIfc_intr_channel = 4294967295u;
  return PORT_portalIfc_intr_channel;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_portalIfc_intr_channel()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_channel;
  tUInt8 PORT_RDY_portalIfc_intr_channel;
  DEF_CAN_FIRE_portalIfc_intr_channel = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_channel = DEF_CAN_FIRE_portalIfc_intr_channel;
  return PORT_RDY_portalIfc_intr_channel;
}

void MOD_mkConnectalProcRequestInput::METH_portalIfc_requests_0_enq(tUInt32 ARG_portalIfc_requests_0_enq_v)
{
  INST_hostToCpu_requestAdapter_fbnbuff.METH_write(ARG_portalIfc_requests_0_enq_v);
  INST_hostToCpu_requestAdapter_fifo.METH_enq(ARG_portalIfc_requests_0_enq_v);
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_portalIfc_requests_0_enq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_0_enq;
  tUInt8 PORT_RDY_portalIfc_requests_0_enq;
  DEF_hostToCpu_requestAdapter_fifo_notFull____d2 = INST_hostToCpu_requestAdapter_fifo.METH_notFull();
  DEF_CAN_FIRE_portalIfc_requests_0_enq = DEF_hostToCpu_requestAdapter_fifo_notFull____d2 && INST_hostToCpu_requestAdapter_fifo.METH_i_notFull();
  PORT_RDY_portalIfc_requests_0_enq = DEF_CAN_FIRE_portalIfc_requests_0_enq;
  return PORT_RDY_portalIfc_requests_0_enq;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_portalIfc_requests_0_notFull()
{
  tUInt8 PORT_portalIfc_requests_0_notFull;
  DEF_hostToCpu_requestAdapter_fifo_notFull____d2 = INST_hostToCpu_requestAdapter_fifo.METH_notFull();
  PORT_portalIfc_requests_0_notFull = DEF_hostToCpu_requestAdapter_fifo_notFull____d2;
  return PORT_portalIfc_requests_0_notFull;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_portalIfc_requests_0_notFull()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_requests_0_notFull;
  tUInt8 PORT_RDY_portalIfc_requests_0_notFull;
  DEF_CAN_FIRE_portalIfc_requests_0_notFull = (tUInt8)1u;
  PORT_RDY_portalIfc_requests_0_notFull = DEF_CAN_FIRE_portalIfc_requests_0_notFull;
  return PORT_RDY_portalIfc_requests_0_notFull;
}

tUInt32 MOD_mkConnectalProcRequestInput::METH_pipes_hostToCpu_PipeOut_first()
{
  tUInt32 PORT_pipes_hostToCpu_PipeOut_first;
  PORT_pipes_hostToCpu_PipeOut_first = INST_hostToCpu_requestAdapter_fifo.METH_first();
  return PORT_pipes_hostToCpu_PipeOut_first;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_pipes_hostToCpu_PipeOut_first()
{
  tUInt8 DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_first;
  tUInt8 PORT_RDY_pipes_hostToCpu_PipeOut_first;
  DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4 = INST_hostToCpu_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_first = DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4;
  PORT_RDY_pipes_hostToCpu_PipeOut_first = DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_first;
  return PORT_RDY_pipes_hostToCpu_PipeOut_first;
}

void MOD_mkConnectalProcRequestInput::METH_pipes_hostToCpu_PipeOut_deq()
{
  INST_hostToCpu_requestAdapter_fifo.METH_deq();
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_pipes_hostToCpu_PipeOut_deq()
{
  tUInt8 DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_deq;
  tUInt8 PORT_RDY_pipes_hostToCpu_PipeOut_deq;
  DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4 = INST_hostToCpu_requestAdapter_fifo.METH_i_notEmpty();
  DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_deq = DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4;
  PORT_RDY_pipes_hostToCpu_PipeOut_deq = DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_deq;
  return PORT_RDY_pipes_hostToCpu_PipeOut_deq;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_pipes_hostToCpu_PipeOut_notEmpty()
{
  tUInt8 PORT_pipes_hostToCpu_PipeOut_notEmpty;
  PORT_pipes_hostToCpu_PipeOut_notEmpty = INST_hostToCpu_requestAdapter_fifo.METH_notEmpty();
  return PORT_pipes_hostToCpu_PipeOut_notEmpty;
}

tUInt8 MOD_mkConnectalProcRequestInput::METH_RDY_pipes_hostToCpu_PipeOut_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_notEmpty;
  tUInt8 PORT_RDY_pipes_hostToCpu_PipeOut_notEmpty;
  DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_notEmpty = (tUInt8)1u;
  PORT_RDY_pipes_hostToCpu_PipeOut_notEmpty = DEF_CAN_FIRE_pipes_hostToCpu_PipeOut_notEmpty;
  return PORT_RDY_pipes_hostToCpu_PipeOut_notEmpty;
}


/* Reset routines */

void MOD_mkConnectalProcRequestInput::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_hostToCpu_requestAdapter_fifo.reset_RST(ARG_rst_in);
  INST_hostToCpu_requestAdapter_fbnbuff.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkConnectalProcRequestInput::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkConnectalProcRequestInput::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_hostToCpu_requestAdapter_fbnbuff.dump_state(indent + 2u);
  INST_hostToCpu_requestAdapter_fifo.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkConnectalProcRequestInput::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 5u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "hostToCpu_requestAdapter_fifo_i_notEmpty____d4", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "hostToCpu_requestAdapter_fifo_notFull____d2", 1u);
  num = INST_hostToCpu_requestAdapter_fbnbuff.dump_VCD_defs(num);
  num = INST_hostToCpu_requestAdapter_fifo.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkConnectalProcRequestInput::dump_VCD(tVCDDumpType dt,
					       unsigned int levels,
					       MOD_mkConnectalProcRequestInput &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkConnectalProcRequestInput::vcd_defs(tVCDDumpType dt,
					       MOD_mkConnectalProcRequestInput &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4) != DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4)
      {
	vcd_write_val(sim_hdl, num, DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4, 1u);
	backing.DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4 = DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4;
      }
      ++num;
      if ((backing.DEF_hostToCpu_requestAdapter_fifo_notFull____d2) != DEF_hostToCpu_requestAdapter_fifo_notFull____d2)
      {
	vcd_write_val(sim_hdl, num, DEF_hostToCpu_requestAdapter_fifo_notFull____d2, 1u);
	backing.DEF_hostToCpu_requestAdapter_fifo_notFull____d2 = DEF_hostToCpu_requestAdapter_fifo_notFull____d2;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4, 1u);
      backing.DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4 = DEF_hostToCpu_requestAdapter_fifo_i_notEmpty____d4;
      vcd_write_val(sim_hdl, num++, DEF_hostToCpu_requestAdapter_fifo_notFull____d2, 1u);
      backing.DEF_hostToCpu_requestAdapter_fifo_notFull____d2 = DEF_hostToCpu_requestAdapter_fifo_notFull____d2;
    }
}

void MOD_mkConnectalProcRequestInput::vcd_prims(tVCDDumpType dt,
						MOD_mkConnectalProcRequestInput &backing)
{
  INST_hostToCpu_requestAdapter_fbnbuff.dump_VCD(dt, backing.INST_hostToCpu_requestAdapter_fbnbuff);
  INST_hostToCpu_requestAdapter_fifo.dump_VCD(dt, backing.INST_hostToCpu_requestAdapter_fifo);
}
