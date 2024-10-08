/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Mon Sep 23 14:43:33 UTC 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkConnectalProcIndicationOutputPipes.h"


/* Constructor */
MOD_mkConnectalProcIndicationOutputPipes::MOD_mkConnectalProcIndicationOutputPipes(tSimStateHdl simHdl,
										   char const *name,
										   Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_sendMessage_responseAdapter_bits(simHdl,
					  "sendMessage_responseAdapter_bits",
					  this,
					  32u,
					  0u,
					  (tUInt8)0u),
    INST_sendMessage_responseAdapter_notEmptyReg(simHdl,
						 "sendMessage_responseAdapter_notEmptyReg",
						 this,
						 1u,
						 (tUInt8)0u,
						 (tUInt8)0u),
    INST_sendMessage_responseAdapter_shift(simHdl,
					   "sendMessage_responseAdapter_shift",
					   this,
					   6u,
					   (tUInt8)0u,
					   (tUInt8)0u),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 4u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkConnectalProcIndicationOutputPipes::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "sendMessage_responseAdapter_bits",
	      SYM_MODULE,
	      &INST_sendMessage_responseAdapter_bits);
  init_symbol(&symbols[1u],
	      "sendMessage_responseAdapter_notEmptyReg",
	      SYM_MODULE,
	      &INST_sendMessage_responseAdapter_notEmptyReg);
  init_symbol(&symbols[2u],
	      "sendMessage_responseAdapter_notEmptyReg__h199",
	      SYM_DEF,
	      &DEF_sendMessage_responseAdapter_notEmptyReg__h199,
	      1u);
  init_symbol(&symbols[3u],
	      "sendMessage_responseAdapter_shift",
	      SYM_MODULE,
	      &INST_sendMessage_responseAdapter_shift);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_mkConnectalProcIndicationOutputPipes::METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber)
{
  tUInt32 PORT_portalIfc_messageSize_size;
  PORT_portalIfc_messageSize_size = 18u;
  return PORT_portalIfc_messageSize_size;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_portalIfc_messageSize_size()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_messageSize_size;
  tUInt8 PORT_RDY_portalIfc_messageSize_size;
  DEF_CAN_FIRE_portalIfc_messageSize_size = (tUInt8)1u;
  PORT_RDY_portalIfc_messageSize_size = DEF_CAN_FIRE_portalIfc_messageSize_size;
  return PORT_RDY_portalIfc_messageSize_size;
}

void MOD_mkConnectalProcIndicationOutputPipes::METH_methods_sendMessage_enq(tUInt32 ARG_methods_sendMessage_enq_v)
{
  tUInt32 DEF_x__h214;
  DEF_x__h214 = ARG_methods_sendMessage_enq_v;
  INST_sendMessage_responseAdapter_bits.METH_write(DEF_x__h214);
  INST_sendMessage_responseAdapter_notEmptyReg.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_methods_sendMessage_enq()
{
  tUInt8 DEF_CAN_FIRE_methods_sendMessage_enq;
  tUInt8 PORT_RDY_methods_sendMessage_enq;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3 = !DEF_sendMessage_responseAdapter_notEmptyReg__h199;
  DEF_CAN_FIRE_methods_sendMessage_enq = DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3;
  PORT_RDY_methods_sendMessage_enq = DEF_CAN_FIRE_methods_sendMessage_enq;
  return PORT_RDY_methods_sendMessage_enq;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_methods_sendMessage_notFull()
{
  tUInt8 PORT_methods_sendMessage_notFull;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3 = !DEF_sendMessage_responseAdapter_notEmptyReg__h199;
  PORT_methods_sendMessage_notFull = DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3;
  return PORT_methods_sendMessage_notFull;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_methods_sendMessage_notFull()
{
  tUInt8 DEF_CAN_FIRE_methods_sendMessage_notFull;
  tUInt8 PORT_RDY_methods_sendMessage_notFull;
  DEF_CAN_FIRE_methods_sendMessage_notFull = (tUInt8)1u;
  PORT_RDY_methods_sendMessage_notFull = DEF_CAN_FIRE_methods_sendMessage_notFull;
  return PORT_RDY_methods_sendMessage_notFull;
}

tUInt32 MOD_mkConnectalProcIndicationOutputPipes::METH_portalIfc_indications_0_first()
{
  tUInt32 PORT_portalIfc_indications_0_first;
  PORT_portalIfc_indications_0_first = INST_sendMessage_responseAdapter_bits.METH_read();
  return PORT_portalIfc_indications_0_first;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_portalIfc_indications_0_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_first;
  tUInt8 PORT_RDY_portalIfc_indications_0_first;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_0_first = DEF_sendMessage_responseAdapter_notEmptyReg__h199;
  PORT_RDY_portalIfc_indications_0_first = DEF_CAN_FIRE_portalIfc_indications_0_first;
  return PORT_RDY_portalIfc_indications_0_first;
}

void MOD_mkConnectalProcIndicationOutputPipes::METH_portalIfc_indications_0_deq()
{
  INST_sendMessage_responseAdapter_notEmptyReg.METH_write((tUInt8)0u);
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_portalIfc_indications_0_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_deq;
  tUInt8 PORT_RDY_portalIfc_indications_0_deq;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_0_deq = DEF_sendMessage_responseAdapter_notEmptyReg__h199;
  PORT_RDY_portalIfc_indications_0_deq = DEF_CAN_FIRE_portalIfc_indications_0_deq;
  return PORT_RDY_portalIfc_indications_0_deq;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_portalIfc_indications_0_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_0_notEmpty;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_indications_0_notEmpty = DEF_sendMessage_responseAdapter_notEmptyReg__h199;
  return PORT_portalIfc_indications_0_notEmpty;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_portalIfc_indications_0_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_0_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_0_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_0_notEmpty = DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  return PORT_RDY_portalIfc_indications_0_notEmpty;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_portalIfc_intr_status()
{
  tUInt8 PORT_portalIfc_intr_status;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_intr_status = DEF_sendMessage_responseAdapter_notEmptyReg__h199;
  return PORT_portalIfc_intr_status;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_portalIfc_intr_status()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_status;
  tUInt8 PORT_RDY_portalIfc_intr_status;
  DEF_CAN_FIRE_portalIfc_intr_status = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_status = DEF_CAN_FIRE_portalIfc_intr_status;
  return PORT_RDY_portalIfc_intr_status;
}

tUInt32 MOD_mkConnectalProcIndicationOutputPipes::METH_portalIfc_intr_channel()
{
  tUInt32 PORT_portalIfc_intr_channel;
  DEF_sendMessage_responseAdapter_notEmptyReg__h199 = INST_sendMessage_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_intr_channel = DEF_sendMessage_responseAdapter_notEmptyReg__h199 ? 0u : 4294967295u;
  return PORT_portalIfc_intr_channel;
}

tUInt8 MOD_mkConnectalProcIndicationOutputPipes::METH_RDY_portalIfc_intr_channel()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_channel;
  tUInt8 PORT_RDY_portalIfc_intr_channel;
  DEF_CAN_FIRE_portalIfc_intr_channel = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_channel = DEF_CAN_FIRE_portalIfc_intr_channel;
  return PORT_RDY_portalIfc_intr_channel;
}


/* Reset routines */

void MOD_mkConnectalProcIndicationOutputPipes::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_sendMessage_responseAdapter_shift.reset_RST(ARG_rst_in);
  INST_sendMessage_responseAdapter_notEmptyReg.reset_RST(ARG_rst_in);
  INST_sendMessage_responseAdapter_bits.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkConnectalProcIndicationOutputPipes::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkConnectalProcIndicationOutputPipes::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_sendMessage_responseAdapter_bits.dump_state(indent + 2u);
  INST_sendMessage_responseAdapter_notEmptyReg.dump_state(indent + 2u);
  INST_sendMessage_responseAdapter_shift.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkConnectalProcIndicationOutputPipes::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 6u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_sendMessage_responseAdapter_notEmptyReg___d3", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "sendMessage_responseAdapter_notEmptyReg__h199", 1u);
  num = INST_sendMessage_responseAdapter_bits.dump_VCD_defs(num);
  num = INST_sendMessage_responseAdapter_notEmptyReg.dump_VCD_defs(num);
  num = INST_sendMessage_responseAdapter_shift.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkConnectalProcIndicationOutputPipes::dump_VCD(tVCDDumpType dt,
							unsigned int levels,
							MOD_mkConnectalProcIndicationOutputPipes &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkConnectalProcIndicationOutputPipes::vcd_defs(tVCDDumpType dt,
							MOD_mkConnectalProcIndicationOutputPipes &backing)
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
      if ((backing.DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3) != DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3, 1u);
	backing.DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3 = DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_sendMessage_responseAdapter_notEmptyReg__h199) != DEF_sendMessage_responseAdapter_notEmptyReg__h199)
      {
	vcd_write_val(sim_hdl, num, DEF_sendMessage_responseAdapter_notEmptyReg__h199, 1u);
	backing.DEF_sendMessage_responseAdapter_notEmptyReg__h199 = DEF_sendMessage_responseAdapter_notEmptyReg__h199;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3, 1u);
      backing.DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3 = DEF_NOT_sendMessage_responseAdapter_notEmptyReg___d3;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_sendMessage_responseAdapter_notEmptyReg__h199, 1u);
      backing.DEF_sendMessage_responseAdapter_notEmptyReg__h199 = DEF_sendMessage_responseAdapter_notEmptyReg__h199;
    }
}

void MOD_mkConnectalProcIndicationOutputPipes::vcd_prims(tVCDDumpType dt,
							 MOD_mkConnectalProcIndicationOutputPipes &backing)
{
  INST_sendMessage_responseAdapter_bits.dump_VCD(dt, backing.INST_sendMessage_responseAdapter_bits);
  INST_sendMessage_responseAdapter_notEmptyReg.dump_VCD(dt,
							backing.INST_sendMessage_responseAdapter_notEmptyReg);
  INST_sendMessage_responseAdapter_shift.dump_VCD(dt, backing.INST_sendMessage_responseAdapter_shift);
}
