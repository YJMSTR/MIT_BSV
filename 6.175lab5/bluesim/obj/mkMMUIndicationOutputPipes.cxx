/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Sat Sep 21 04:03:29 UTC 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkMMUIndicationOutputPipes.h"


/* Literal declarations */
static unsigned int const UWide_literal_192_h0_arr[] = { 0u, 0u, 0u, 0u, 0u, 0u };
static tUWide const UWide_literal_192_h0(192u, UWide_literal_192_h0_arr);


/* Constructor */
MOD_mkMMUIndicationOutputPipes::MOD_mkMMUIndicationOutputPipes(tSimStateHdl simHdl,
							       char const *name,
							       Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_configResp_responseAdapter_bits(simHdl,
					 "configResp_responseAdapter_bits",
					 this,
					 32u,
					 0u,
					 (tUInt8)0u),
    INST_configResp_responseAdapter_notEmptyReg(simHdl,
						"configResp_responseAdapter_notEmptyReg",
						this,
						1u,
						(tUInt8)0u,
						(tUInt8)0u),
    INST_configResp_responseAdapter_shift(simHdl,
					  "configResp_responseAdapter_shift",
					  this,
					  6u,
					  (tUInt8)0u,
					  (tUInt8)0u),
    INST_error_responseAdapter_bits(simHdl,
				    "error_responseAdapter_bits",
				    this,
				    192u,
				    UWide_literal_192_h0,
				    (tUInt8)0u),
    INST_error_responseAdapter_count(simHdl,
				     "error_responseAdapter_count",
				     this,
				     3u,
				     (tUInt8)0u,
				     (tUInt8)0u),
    INST_error_responseAdapter_notEmptyReg(simHdl,
					   "error_responseAdapter_notEmptyReg",
					   this,
					   1u,
					   (tUInt8)0u,
					   (tUInt8)0u),
    INST_error_responseAdapter_shift(simHdl, "error_responseAdapter_shift", this, 9u, 0u, (tUInt8)0u),
    INST_idResponse_responseAdapter_bits(simHdl,
					 "idResponse_responseAdapter_bits",
					 this,
					 32u,
					 0u,
					 (tUInt8)0u),
    INST_idResponse_responseAdapter_notEmptyReg(simHdl,
						"idResponse_responseAdapter_notEmptyReg",
						this,
						1u,
						(tUInt8)0u,
						(tUInt8)0u),
    INST_idResponse_responseAdapter_shift(simHdl,
					  "idResponse_responseAdapter_shift",
					  this,
					  6u,
					  (tUInt8)0u,
					  (tUInt8)0u),
    PORT_RST_N((tUInt8)1u),
    DEF_x__h1026(192u),
    DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165(160u),
    DEF_x__h1157(192u)
{
  PORT_methods_error_enq_v.setSize(192u);
  PORT_methods_error_enq_v.clear();
  symbol_count = 14u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkMMUIndicationOutputPipes::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "configResp_responseAdapter_bits",
	      SYM_MODULE,
	      &INST_configResp_responseAdapter_bits);
  init_symbol(&symbols[1u],
	      "configResp_responseAdapter_notEmptyReg",
	      SYM_MODULE,
	      &INST_configResp_responseAdapter_notEmptyReg);
  init_symbol(&symbols[2u],
	      "configResp_responseAdapter_notEmptyReg__h564",
	      SYM_DEF,
	      &DEF_configResp_responseAdapter_notEmptyReg__h564,
	      1u);
  init_symbol(&symbols[3u],
	      "configResp_responseAdapter_shift",
	      SYM_MODULE,
	      &INST_configResp_responseAdapter_shift);
  init_symbol(&symbols[4u],
	      "error_responseAdapter_bits",
	      SYM_MODULE,
	      &INST_error_responseAdapter_bits);
  init_symbol(&symbols[5u],
	      "error_responseAdapter_count",
	      SYM_MODULE,
	      &INST_error_responseAdapter_count);
  init_symbol(&symbols[6u],
	      "error_responseAdapter_notEmptyReg",
	      SYM_MODULE,
	      &INST_error_responseAdapter_notEmptyReg);
  init_symbol(&symbols[7u],
	      "error_responseAdapter_notEmptyReg__h621",
	      SYM_DEF,
	      &DEF_error_responseAdapter_notEmptyReg__h621,
	      1u);
  init_symbol(&symbols[8u],
	      "error_responseAdapter_shift",
	      SYM_MODULE,
	      &INST_error_responseAdapter_shift);
  init_symbol(&symbols[9u],
	      "idResponse_responseAdapter_bits",
	      SYM_MODULE,
	      &INST_idResponse_responseAdapter_bits);
  init_symbol(&symbols[10u],
	      "idResponse_responseAdapter_notEmptyReg",
	      SYM_MODULE,
	      &INST_idResponse_responseAdapter_notEmptyReg);
  init_symbol(&symbols[11u],
	      "idResponse_responseAdapter_notEmptyReg__h504",
	      SYM_DEF,
	      &DEF_idResponse_responseAdapter_notEmptyReg__h504,
	      1u);
  init_symbol(&symbols[12u],
	      "idResponse_responseAdapter_shift",
	      SYM_MODULE,
	      &INST_idResponse_responseAdapter_shift);
  init_symbol(&symbols[13u], "methods_error_enq_v", SYM_PORT, &PORT_methods_error_enq_v, 192u);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber)
{
  tUInt32 DEF_IF_portalIfc_messageSize_size_methodNumber_EQ__ETC___d11;
  tUInt32 PORT_portalIfc_messageSize_size;
  DEF_IF_portalIfc_messageSize_size_methodNumber_EQ__ETC___d11 = 192u;
  switch (ARG_portalIfc_messageSize_size_methodNumber) {
  case 0u:
  case 1u:
    PORT_portalIfc_messageSize_size = 32u;
    break;
  default:
    PORT_portalIfc_messageSize_size = DEF_IF_portalIfc_messageSize_size_methodNumber_EQ__ETC___d11;
  }
  return PORT_portalIfc_messageSize_size;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_messageSize_size()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_messageSize_size;
  tUInt8 PORT_RDY_portalIfc_messageSize_size;
  DEF_CAN_FIRE_portalIfc_messageSize_size = (tUInt8)1u;
  PORT_RDY_portalIfc_messageSize_size = DEF_CAN_FIRE_portalIfc_messageSize_size;
  return PORT_RDY_portalIfc_messageSize_size;
}

void MOD_mkMMUIndicationOutputPipes::METH_methods_idResponse_enq(tUInt32 ARG_methods_idResponse_enq_v)
{
  INST_idResponse_responseAdapter_bits.METH_write(ARG_methods_idResponse_enq_v);
  INST_idResponse_responseAdapter_notEmptyReg.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_methods_idResponse_enq()
{
  tUInt8 DEF_CAN_FIRE_methods_idResponse_enq;
  tUInt8 PORT_RDY_methods_idResponse_enq;
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2 = !DEF_idResponse_responseAdapter_notEmptyReg__h504;
  DEF_CAN_FIRE_methods_idResponse_enq = DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2;
  PORT_RDY_methods_idResponse_enq = DEF_CAN_FIRE_methods_idResponse_enq;
  return PORT_RDY_methods_idResponse_enq;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_methods_idResponse_notFull()
{
  tUInt8 PORT_methods_idResponse_notFull;
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2 = !DEF_idResponse_responseAdapter_notEmptyReg__h504;
  PORT_methods_idResponse_notFull = DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2;
  return PORT_methods_idResponse_notFull;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_methods_idResponse_notFull()
{
  tUInt8 DEF_CAN_FIRE_methods_idResponse_notFull;
  tUInt8 PORT_RDY_methods_idResponse_notFull;
  DEF_CAN_FIRE_methods_idResponse_notFull = (tUInt8)1u;
  PORT_RDY_methods_idResponse_notFull = DEF_CAN_FIRE_methods_idResponse_notFull;
  return PORT_RDY_methods_idResponse_notFull;
}

void MOD_mkMMUIndicationOutputPipes::METH_methods_configResp_enq(tUInt32 ARG_methods_configResp_enq_v)
{
  INST_configResp_responseAdapter_bits.METH_write(ARG_methods_configResp_enq_v);
  INST_configResp_responseAdapter_notEmptyReg.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_methods_configResp_enq()
{
  tUInt8 DEF_CAN_FIRE_methods_configResp_enq;
  tUInt8 PORT_RDY_methods_configResp_enq;
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_configResp_responseAdapter_notEmptyReg___d4 = !DEF_configResp_responseAdapter_notEmptyReg__h564;
  DEF_CAN_FIRE_methods_configResp_enq = DEF_NOT_configResp_responseAdapter_notEmptyReg___d4;
  PORT_RDY_methods_configResp_enq = DEF_CAN_FIRE_methods_configResp_enq;
  return PORT_RDY_methods_configResp_enq;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_methods_configResp_notFull()
{
  tUInt8 PORT_methods_configResp_notFull;
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_configResp_responseAdapter_notEmptyReg___d4 = !DEF_configResp_responseAdapter_notEmptyReg__h564;
  PORT_methods_configResp_notFull = DEF_NOT_configResp_responseAdapter_notEmptyReg___d4;
  return PORT_methods_configResp_notFull;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_methods_configResp_notFull()
{
  tUInt8 DEF_CAN_FIRE_methods_configResp_notFull;
  tUInt8 PORT_RDY_methods_configResp_notFull;
  DEF_CAN_FIRE_methods_configResp_notFull = (tUInt8)1u;
  PORT_RDY_methods_configResp_notFull = DEF_CAN_FIRE_methods_configResp_notFull;
  return PORT_RDY_methods_configResp_notFull;
}

void MOD_mkMMUIndicationOutputPipes::METH_methods_error_enq(tUWide ARG_methods_error_enq_v)
{
  PORT_methods_error_enq_v = ARG_methods_error_enq_v;
  INST_error_responseAdapter_bits.METH_write(ARG_methods_error_enq_v);
  INST_error_responseAdapter_notEmptyReg.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_methods_error_enq()
{
  tUInt8 DEF_CAN_FIRE_methods_error_enq;
  tUInt8 PORT_RDY_methods_error_enq;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_error_responseAdapter_notEmptyReg___d6 = !DEF_error_responseAdapter_notEmptyReg__h621;
  DEF_CAN_FIRE_methods_error_enq = DEF_NOT_error_responseAdapter_notEmptyReg___d6;
  PORT_RDY_methods_error_enq = DEF_CAN_FIRE_methods_error_enq;
  return PORT_RDY_methods_error_enq;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_methods_error_notFull()
{
  tUInt8 PORT_methods_error_notFull;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_error_responseAdapter_notEmptyReg___d6 = !DEF_error_responseAdapter_notEmptyReg__h621;
  PORT_methods_error_notFull = DEF_NOT_error_responseAdapter_notEmptyReg___d6;
  return PORT_methods_error_notFull;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_methods_error_notFull()
{
  tUInt8 DEF_CAN_FIRE_methods_error_notFull;
  tUInt8 PORT_RDY_methods_error_notFull;
  DEF_CAN_FIRE_methods_error_notFull = (tUInt8)1u;
  PORT_RDY_methods_error_notFull = DEF_CAN_FIRE_methods_error_notFull;
  return PORT_RDY_methods_error_notFull;
}

tUInt32 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_0_first()
{
  tUInt32 PORT_portalIfc_indications_0_first;
  PORT_portalIfc_indications_0_first = INST_idResponse_responseAdapter_bits.METH_read();
  return PORT_portalIfc_indications_0_first;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_0_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_first;
  tUInt8 PORT_RDY_portalIfc_indications_0_first;
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_0_first = DEF_idResponse_responseAdapter_notEmptyReg__h504;
  PORT_RDY_portalIfc_indications_0_first = DEF_CAN_FIRE_portalIfc_indications_0_first;
  return PORT_RDY_portalIfc_indications_0_first;
}

void MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_0_deq()
{
  INST_idResponse_responseAdapter_notEmptyReg.METH_write((tUInt8)0u);
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_0_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_deq;
  tUInt8 PORT_RDY_portalIfc_indications_0_deq;
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_0_deq = DEF_idResponse_responseAdapter_notEmptyReg__h504;
  PORT_RDY_portalIfc_indications_0_deq = DEF_CAN_FIRE_portalIfc_indications_0_deq;
  return PORT_RDY_portalIfc_indications_0_deq;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_0_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_0_notEmpty;
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_indications_0_notEmpty = DEF_idResponse_responseAdapter_notEmptyReg__h504;
  return PORT_portalIfc_indications_0_notEmpty;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_0_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_0_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_0_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_0_notEmpty = DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  return PORT_RDY_portalIfc_indications_0_notEmpty;
}

tUInt32 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_1_first()
{
  tUInt32 PORT_portalIfc_indications_1_first;
  PORT_portalIfc_indications_1_first = INST_configResp_responseAdapter_bits.METH_read();
  return PORT_portalIfc_indications_1_first;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_1_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_first;
  tUInt8 PORT_RDY_portalIfc_indications_1_first;
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_1_first = DEF_configResp_responseAdapter_notEmptyReg__h564;
  PORT_RDY_portalIfc_indications_1_first = DEF_CAN_FIRE_portalIfc_indications_1_first;
  return PORT_RDY_portalIfc_indications_1_first;
}

void MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_1_deq()
{
  INST_configResp_responseAdapter_notEmptyReg.METH_write((tUInt8)0u);
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_1_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_deq;
  tUInt8 PORT_RDY_portalIfc_indications_1_deq;
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_1_deq = DEF_configResp_responseAdapter_notEmptyReg__h564;
  PORT_RDY_portalIfc_indications_1_deq = DEF_CAN_FIRE_portalIfc_indications_1_deq;
  return PORT_RDY_portalIfc_indications_1_deq;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_1_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_1_notEmpty;
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_indications_1_notEmpty = DEF_configResp_responseAdapter_notEmptyReg__h564;
  return PORT_portalIfc_indications_1_notEmpty;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_1_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_1_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_1_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_1_notEmpty = DEF_CAN_FIRE_portalIfc_indications_1_notEmpty;
  return PORT_RDY_portalIfc_indications_1_notEmpty;
}

tUInt32 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_2_first()
{
  tUInt32 PORT_portalIfc_indications_2_first;
  DEF_x__h1026 = INST_error_responseAdapter_bits.METH_read();
  PORT_portalIfc_indications_2_first = DEF_x__h1026.get_whole_word(5u);
  return PORT_portalIfc_indications_2_first;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_2_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_2_first;
  tUInt8 PORT_RDY_portalIfc_indications_2_first;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_2_first = DEF_error_responseAdapter_notEmptyReg__h621;
  PORT_RDY_portalIfc_indications_2_first = DEF_CAN_FIRE_portalIfc_indications_2_first;
  return PORT_RDY_portalIfc_indications_2_first;
}

void MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_2_deq()
{
  tUInt32 DEF_x__h1133;
  tUInt8 DEF_NOT_error_responseAdapter_count_3_EQ_5_4___d17;
  tUInt8 DEF_x__h1094;
  tUInt8 DEF_error_responseAdapter_count_3_EQ_5___d14;
  tUInt8 DEF_IF_error_responseAdapter_count_3_EQ_5_4_THEN_0_ETC___d16;
  tUInt8 DEF__read__h391;
  tUInt32 DEF__read__h427;
  DEF_x__h1026 = INST_error_responseAdapter_bits.METH_read();
  DEF__read__h427 = INST_error_responseAdapter_shift.METH_read();
  DEF__read__h391 = INST_error_responseAdapter_count.METH_read();
  wop_primExtractWide(160u,
		      192u,
		      DEF_x__h1026,
		      32u,
		      159u,
		      32u,
		      0u,
		      DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165);
  DEF_error_responseAdapter_count_3_EQ_5___d14 = DEF__read__h391 == (tUInt8)5u;
  DEF_x__h1094 = (tUInt8)7u & (DEF__read__h391 + (tUInt8)1u);
  DEF_IF_error_responseAdapter_count_3_EQ_5_4_THEN_0_ETC___d16 = DEF_error_responseAdapter_count_3_EQ_5___d14 ? (tUInt8)0u : DEF_x__h1094;
  DEF_x__h1157.set_whole_word(DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165.get_whole_word(4u),
			      5u).set_whole_word(DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165.get_whole_word(3u),
						 4u).set_whole_word(DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165.get_whole_word(2u),
								    3u).set_whole_word(DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165.get_whole_word(1u),
										       2u).build_concat((((tUInt64)(DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165.get_whole_word(0u))) << 32u) | (tUInt64)(0u),
													0u,
													64u);
  DEF_NOT_error_responseAdapter_count_3_EQ_5_4___d17 = !DEF_error_responseAdapter_count_3_EQ_5___d14;
  DEF_x__h1133 = 511u & (DEF__read__h427 + 32u);
  INST_error_responseAdapter_count.METH_write(DEF_IF_error_responseAdapter_count_3_EQ_5_4_THEN_0_ETC___d16);
  if (DEF_error_responseAdapter_count_3_EQ_5___d14)
    INST_error_responseAdapter_notEmptyReg.METH_write((tUInt8)0u);
  if (DEF_NOT_error_responseAdapter_count_3_EQ_5_4___d17)
    INST_error_responseAdapter_shift.METH_write(DEF_x__h1133);
  if (DEF_NOT_error_responseAdapter_count_3_EQ_5_4___d17)
    INST_error_responseAdapter_bits.METH_write(DEF_x__h1157);
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_2_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_2_deq;
  tUInt8 PORT_RDY_portalIfc_indications_2_deq;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_2_deq = DEF_error_responseAdapter_notEmptyReg__h621;
  PORT_RDY_portalIfc_indications_2_deq = DEF_CAN_FIRE_portalIfc_indications_2_deq;
  return PORT_RDY_portalIfc_indications_2_deq;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_indications_2_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_2_notEmpty;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_indications_2_notEmpty = DEF_error_responseAdapter_notEmptyReg__h621;
  return PORT_portalIfc_indications_2_notEmpty;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_indications_2_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_2_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_2_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_2_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_2_notEmpty = DEF_CAN_FIRE_portalIfc_indications_2_notEmpty;
  return PORT_RDY_portalIfc_indications_2_notEmpty;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_intr_status()
{
  tUInt8 DEF_configResp_responseAdapter_notEmptyReg_OR_erro_ETC___d22;
  tUInt8 PORT_portalIfc_intr_status;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  DEF_configResp_responseAdapter_notEmptyReg_OR_erro_ETC___d22 = DEF_configResp_responseAdapter_notEmptyReg__h564 || DEF_error_responseAdapter_notEmptyReg__h621;
  PORT_portalIfc_intr_status = DEF_idResponse_responseAdapter_notEmptyReg__h504 || DEF_configResp_responseAdapter_notEmptyReg_OR_erro_ETC___d22;
  return PORT_portalIfc_intr_status;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_intr_status()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_status;
  tUInt8 PORT_RDY_portalIfc_intr_status;
  DEF_CAN_FIRE_portalIfc_intr_status = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_status = DEF_CAN_FIRE_portalIfc_intr_status;
  return PORT_RDY_portalIfc_intr_status;
}

tUInt32 MOD_mkMMUIndicationOutputPipes::METH_portalIfc_intr_channel()
{
  tUInt32 DEF_IF_configResp_responseAdapter_notEmptyReg_THEN_ETC___d24;
  tUInt32 PORT_portalIfc_intr_channel;
  DEF_error_responseAdapter_notEmptyReg__h621 = INST_error_responseAdapter_notEmptyReg.METH_read();
  DEF_configResp_responseAdapter_notEmptyReg__h564 = INST_configResp_responseAdapter_notEmptyReg.METH_read();
  DEF_idResponse_responseAdapter_notEmptyReg__h504 = INST_idResponse_responseAdapter_notEmptyReg.METH_read();
  DEF_IF_configResp_responseAdapter_notEmptyReg_THEN_ETC___d24 = DEF_configResp_responseAdapter_notEmptyReg__h564 ? 1u : (DEF_error_responseAdapter_notEmptyReg__h621 ? 2u : 4294967295u);
  PORT_portalIfc_intr_channel = DEF_idResponse_responseAdapter_notEmptyReg__h504 ? 0u : DEF_IF_configResp_responseAdapter_notEmptyReg_THEN_ETC___d24;
  return PORT_portalIfc_intr_channel;
}

tUInt8 MOD_mkMMUIndicationOutputPipes::METH_RDY_portalIfc_intr_channel()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_channel;
  tUInt8 PORT_RDY_portalIfc_intr_channel;
  DEF_CAN_FIRE_portalIfc_intr_channel = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_channel = DEF_CAN_FIRE_portalIfc_intr_channel;
  return PORT_RDY_portalIfc_intr_channel;
}


/* Reset routines */

void MOD_mkMMUIndicationOutputPipes::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_idResponse_responseAdapter_shift.reset_RST(ARG_rst_in);
  INST_idResponse_responseAdapter_notEmptyReg.reset_RST(ARG_rst_in);
  INST_idResponse_responseAdapter_bits.reset_RST(ARG_rst_in);
  INST_error_responseAdapter_shift.reset_RST(ARG_rst_in);
  INST_error_responseAdapter_notEmptyReg.reset_RST(ARG_rst_in);
  INST_error_responseAdapter_count.reset_RST(ARG_rst_in);
  INST_error_responseAdapter_bits.reset_RST(ARG_rst_in);
  INST_configResp_responseAdapter_shift.reset_RST(ARG_rst_in);
  INST_configResp_responseAdapter_notEmptyReg.reset_RST(ARG_rst_in);
  INST_configResp_responseAdapter_bits.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkMMUIndicationOutputPipes::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkMMUIndicationOutputPipes::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_configResp_responseAdapter_bits.dump_state(indent + 2u);
  INST_configResp_responseAdapter_notEmptyReg.dump_state(indent + 2u);
  INST_configResp_responseAdapter_shift.dump_state(indent + 2u);
  INST_error_responseAdapter_bits.dump_state(indent + 2u);
  INST_error_responseAdapter_count.dump_state(indent + 2u);
  INST_error_responseAdapter_notEmptyReg.dump_state(indent + 2u);
  INST_error_responseAdapter_shift.dump_state(indent + 2u);
  INST_idResponse_responseAdapter_bits.dump_state(indent + 2u);
  INST_idResponse_responseAdapter_notEmptyReg.dump_state(indent + 2u);
  INST_idResponse_responseAdapter_shift.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkMMUIndicationOutputPipes::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 21u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_configResp_responseAdapter_notEmptyReg___d4", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_error_responseAdapter_notEmptyReg___d6", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_idResponse_responseAdapter_notEmptyReg___d2", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "configResp_responseAdapter_notEmptyReg__h564", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "error_responseAdapter_bits_BITS_159_TO_0___h1165", 160u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "error_responseAdapter_notEmptyReg__h621", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "idResponse_responseAdapter_notEmptyReg__h504", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h1026", 192u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h1157", 192u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "methods_error_enq_v", 192u);
  num = INST_configResp_responseAdapter_bits.dump_VCD_defs(num);
  num = INST_configResp_responseAdapter_notEmptyReg.dump_VCD_defs(num);
  num = INST_configResp_responseAdapter_shift.dump_VCD_defs(num);
  num = INST_error_responseAdapter_bits.dump_VCD_defs(num);
  num = INST_error_responseAdapter_count.dump_VCD_defs(num);
  num = INST_error_responseAdapter_notEmptyReg.dump_VCD_defs(num);
  num = INST_error_responseAdapter_shift.dump_VCD_defs(num);
  num = INST_idResponse_responseAdapter_bits.dump_VCD_defs(num);
  num = INST_idResponse_responseAdapter_notEmptyReg.dump_VCD_defs(num);
  num = INST_idResponse_responseAdapter_shift.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkMMUIndicationOutputPipes::dump_VCD(tVCDDumpType dt,
					      unsigned int levels,
					      MOD_mkMMUIndicationOutputPipes &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkMMUIndicationOutputPipes::vcd_defs(tVCDDumpType dt,
					      MOD_mkMMUIndicationOutputPipes &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 160u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 192u);
    vcd_write_x(sim_hdl, num++, 192u);
    vcd_write_x(sim_hdl, num++, 192u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_NOT_configResp_responseAdapter_notEmptyReg___d4) != DEF_NOT_configResp_responseAdapter_notEmptyReg___d4)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_configResp_responseAdapter_notEmptyReg___d4, 1u);
	backing.DEF_NOT_configResp_responseAdapter_notEmptyReg___d4 = DEF_NOT_configResp_responseAdapter_notEmptyReg___d4;
      }
      ++num;
      if ((backing.DEF_NOT_error_responseAdapter_notEmptyReg___d6) != DEF_NOT_error_responseAdapter_notEmptyReg___d6)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_error_responseAdapter_notEmptyReg___d6, 1u);
	backing.DEF_NOT_error_responseAdapter_notEmptyReg___d6 = DEF_NOT_error_responseAdapter_notEmptyReg___d6;
      }
      ++num;
      if ((backing.DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2) != DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2, 1u);
	backing.DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2 = DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_configResp_responseAdapter_notEmptyReg__h564) != DEF_configResp_responseAdapter_notEmptyReg__h564)
      {
	vcd_write_val(sim_hdl, num, DEF_configResp_responseAdapter_notEmptyReg__h564, 1u);
	backing.DEF_configResp_responseAdapter_notEmptyReg__h564 = DEF_configResp_responseAdapter_notEmptyReg__h564;
      }
      ++num;
      if ((backing.DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165) != DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165)
      {
	vcd_write_val(sim_hdl, num, DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165, 160u);
	backing.DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165 = DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165;
      }
      ++num;
      if ((backing.DEF_error_responseAdapter_notEmptyReg__h621) != DEF_error_responseAdapter_notEmptyReg__h621)
      {
	vcd_write_val(sim_hdl, num, DEF_error_responseAdapter_notEmptyReg__h621, 1u);
	backing.DEF_error_responseAdapter_notEmptyReg__h621 = DEF_error_responseAdapter_notEmptyReg__h621;
      }
      ++num;
      if ((backing.DEF_idResponse_responseAdapter_notEmptyReg__h504) != DEF_idResponse_responseAdapter_notEmptyReg__h504)
      {
	vcd_write_val(sim_hdl, num, DEF_idResponse_responseAdapter_notEmptyReg__h504, 1u);
	backing.DEF_idResponse_responseAdapter_notEmptyReg__h504 = DEF_idResponse_responseAdapter_notEmptyReg__h504;
      }
      ++num;
      if ((backing.DEF_x__h1026) != DEF_x__h1026)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h1026, 192u);
	backing.DEF_x__h1026 = DEF_x__h1026;
      }
      ++num;
      if ((backing.DEF_x__h1157) != DEF_x__h1157)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h1157, 192u);
	backing.DEF_x__h1157 = DEF_x__h1157;
      }
      ++num;
      if ((backing.PORT_methods_error_enq_v) != PORT_methods_error_enq_v)
      {
	vcd_write_val(sim_hdl, num, PORT_methods_error_enq_v, 192u);
	backing.PORT_methods_error_enq_v = PORT_methods_error_enq_v;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_NOT_configResp_responseAdapter_notEmptyReg___d4, 1u);
      backing.DEF_NOT_configResp_responseAdapter_notEmptyReg___d4 = DEF_NOT_configResp_responseAdapter_notEmptyReg___d4;
      vcd_write_val(sim_hdl, num++, DEF_NOT_error_responseAdapter_notEmptyReg___d6, 1u);
      backing.DEF_NOT_error_responseAdapter_notEmptyReg___d6 = DEF_NOT_error_responseAdapter_notEmptyReg___d6;
      vcd_write_val(sim_hdl, num++, DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2, 1u);
      backing.DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2 = DEF_NOT_idResponse_responseAdapter_notEmptyReg___d2;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_configResp_responseAdapter_notEmptyReg__h564, 1u);
      backing.DEF_configResp_responseAdapter_notEmptyReg__h564 = DEF_configResp_responseAdapter_notEmptyReg__h564;
      vcd_write_val(sim_hdl, num++, DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165, 160u);
      backing.DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165 = DEF_error_responseAdapter_bits_BITS_159_TO_0___h1165;
      vcd_write_val(sim_hdl, num++, DEF_error_responseAdapter_notEmptyReg__h621, 1u);
      backing.DEF_error_responseAdapter_notEmptyReg__h621 = DEF_error_responseAdapter_notEmptyReg__h621;
      vcd_write_val(sim_hdl, num++, DEF_idResponse_responseAdapter_notEmptyReg__h504, 1u);
      backing.DEF_idResponse_responseAdapter_notEmptyReg__h504 = DEF_idResponse_responseAdapter_notEmptyReg__h504;
      vcd_write_val(sim_hdl, num++, DEF_x__h1026, 192u);
      backing.DEF_x__h1026 = DEF_x__h1026;
      vcd_write_val(sim_hdl, num++, DEF_x__h1157, 192u);
      backing.DEF_x__h1157 = DEF_x__h1157;
      vcd_write_val(sim_hdl, num++, PORT_methods_error_enq_v, 192u);
      backing.PORT_methods_error_enq_v = PORT_methods_error_enq_v;
    }
}

void MOD_mkMMUIndicationOutputPipes::vcd_prims(tVCDDumpType dt,
					       MOD_mkMMUIndicationOutputPipes &backing)
{
  INST_configResp_responseAdapter_bits.dump_VCD(dt, backing.INST_configResp_responseAdapter_bits);
  INST_configResp_responseAdapter_notEmptyReg.dump_VCD(dt,
						       backing.INST_configResp_responseAdapter_notEmptyReg);
  INST_configResp_responseAdapter_shift.dump_VCD(dt, backing.INST_configResp_responseAdapter_shift);
  INST_error_responseAdapter_bits.dump_VCD(dt, backing.INST_error_responseAdapter_bits);
  INST_error_responseAdapter_count.dump_VCD(dt, backing.INST_error_responseAdapter_count);
  INST_error_responseAdapter_notEmptyReg.dump_VCD(dt, backing.INST_error_responseAdapter_notEmptyReg);
  INST_error_responseAdapter_shift.dump_VCD(dt, backing.INST_error_responseAdapter_shift);
  INST_idResponse_responseAdapter_bits.dump_VCD(dt, backing.INST_idResponse_responseAdapter_bits);
  INST_idResponse_responseAdapter_notEmptyReg.dump_VCD(dt,
						       backing.INST_idResponse_responseAdapter_notEmptyReg);
  INST_idResponse_responseAdapter_shift.dump_VCD(dt, backing.INST_idResponse_responseAdapter_shift);
}
