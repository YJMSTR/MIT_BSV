/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Mon Sep 23 14:43:33 UTC 2024
 * 
 */

/* Generation options: */
#ifndef __mkMMUSynth_h__
#define __mkMMUSynth_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMMUSynth module */
class MOD_mkMMUSynth : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Fifo<tUInt8> INST_configResponseFifo;
  MOD_Fifo<tUWide> INST_dmaErrorFifo;
  MOD_Fifo<tUWide> INST_dmaErrorFifos_0;
  MOD_Fifo<tUWide> INST_dmaErrorFifos_1;
  MOD_Fifo<tUInt8> INST_idResponseFifo;
  MOD_Fifo<tUInt32> INST_idReturnFifo;
  MOD_Fifo<tUInt64> INST_incomingReqs_0;
  MOD_Fifo<tUInt64> INST_incomingReqs_1;
  MOD_Fifo<tUInt32> INST_offs1_0;
  MOD_Fifo<tUInt32> INST_offs1_1;
  MOD_Fifo<tUInt64> INST_pageResponseFifos_0;
  MOD_Fifo<tUInt64> INST_pageResponseFifos_1;
  MOD_BRAM<tUInt8,tUWide,tUInt8> INST_regall_cbram_bram;
  MOD_Reg<tUInt8> INST_regall_cbram_counter_0_cnt;
  MOD_Wire<tUInt8> INST_regall_cbram_counter_0_dec_wire;
  MOD_Wire<tUInt8> INST_regall_cbram_counter_0_inc_wire;
  MOD_Reg<tUInt8> INST_regall_cbram_counter_0_positive_reg;
  MOD_Reg<tUInt8> INST_regall_cbram_counter_1_cnt;
  MOD_Wire<tUInt8> INST_regall_cbram_counter_1_dec_wire;
  MOD_Wire<tUInt8> INST_regall_cbram_counter_1_inc_wire;
  MOD_Reg<tUInt8> INST_regall_cbram_counter_1_positive_reg;
  MOD_Reg<tUInt32> INST_regall_cbram_cycles;
  MOD_Wire<tUWide> INST_regall_cbram_data0_0;
  MOD_Wire<tUWide> INST_regall_cbram_data0_1;
  MOD_Reg<tUWide> INST_regall_cbram_data1_0;
  MOD_Reg<tUWide> INST_regall_cbram_data1_1;
  MOD_Reg<tUWide> INST_regall_cbram_data2_0;
  MOD_Reg<tUWide> INST_regall_cbram_data2_1;
  MOD_Fifo<tUWide> INST_regall_cbram_responseFifo_0;
  MOD_Fifo<tUWide> INST_regall_cbram_responseFifo_1;
  MOD_Fifo<tUInt64> INST_reqs0_0;
  MOD_Fifo<tUInt64> INST_reqs0_1;
  MOD_Fifo<tUInt8> INST_sglId_gen_comp_fifo;
  MOD_Reg<tUInt32> INST_sglId_gen_comp_state;
  MOD_Reg<tUInt8> INST_sglId_gen_counter_cnt;
  MOD_Wire<tUInt8> INST_sglId_gen_counter_dec_wire;
  MOD_Wire<tUInt8> INST_sglId_gen_counter_inc_wire;
  MOD_Reg<tUInt8> INST_sglId_gen_counter_positive_reg;
  MOD_Reg<tUInt8> INST_sglId_gen_head_ptr;
  MOD_Reg<tUInt8> INST_sglId_gen_inited;
  MOD_Fifo<tUInt8> INST_sglId_gen_retFifo;
  MOD_Fifo<tUInt8> INST_sglId_gen_tagFifo;
  MOD_CReg<tUInt32> INST_sglId_gen_tags;
  MOD_Reg<tUInt8> INST_sglId_gen_tail_ptr;
  MOD_Fifo<tUInt32> INST_simDma_dataFifo;
  MOD_Fifo<tUWide> INST_stage3Params_0;
  MOD_Fifo<tUWide> INST_stage3Params_1;
  MOD_Fifo<tUInt64> INST_stage4Params_0;
  MOD_Fifo<tUInt64> INST_stage4Params_1;
  MOD_BRAM<tUInt32,tUInt32,tUInt8> INST_translationTable_cbram_bram;
  MOD_Reg<tUInt8> INST_translationTable_cbram_counter_0_cnt;
  MOD_Wire<tUInt8> INST_translationTable_cbram_counter_0_dec_wire;
  MOD_Wire<tUInt8> INST_translationTable_cbram_counter_0_inc_wire;
  MOD_Reg<tUInt8> INST_translationTable_cbram_counter_0_positive_reg;
  MOD_Reg<tUInt8> INST_translationTable_cbram_counter_1_cnt;
  MOD_Wire<tUInt8> INST_translationTable_cbram_counter_1_dec_wire;
  MOD_Wire<tUInt8> INST_translationTable_cbram_counter_1_inc_wire;
  MOD_Reg<tUInt8> INST_translationTable_cbram_counter_1_positive_reg;
  MOD_Reg<tUInt32> INST_translationTable_cbram_cycles;
  MOD_Wire<tUInt32> INST_translationTable_cbram_data0_0;
  MOD_Wire<tUInt32> INST_translationTable_cbram_data0_1;
  MOD_Reg<tUInt32> INST_translationTable_cbram_data1_0;
  MOD_Reg<tUInt32> INST_translationTable_cbram_data1_1;
  MOD_Reg<tUInt32> INST_translationTable_cbram_data2_0;
  MOD_Reg<tUInt32> INST_translationTable_cbram_data2_1;
  MOD_Fifo<tUInt32> INST_translationTable_cbram_responseFifo_0;
  MOD_Fifo<tUInt32> INST_translationTable_cbram_responseFifo_1;
 
 /* Constructor */
 public:
  MOD_mkMMUSynth(tSimStateHdl simHdl,
		 char const *name,
		 Module *parent,
		 tUInt8 ARG_mmuid,
		 tUInt8 ARG_hostMapped);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_mmuid;
  tUInt8 PORT_hostMapped;
  tUInt8 PORT_EN_request_region;
  tUInt8 PORT_EN_request_sglist;
  tUWide PORT_errorPipe_first;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_dmaErrorFifo_i_notEmpty____d473;
  tUInt8 DEF_configResponseFifo_i_notEmpty____d472;
  tUInt8 DEF_idResponseFifo_i_notEmpty____d471;
  tUInt8 DEF_WILL_FIRE_request_region;
  tUInt8 DEF_WILL_FIRE_request_sglist;
  tUInt8 DEF_regall_cbram_counter_1_positive_reg__h12858;
  tUInt8 DEF_translationTable_cbram_counter_0_positive_reg__h12197;
  tUInt8 DEF_regall_cbram_responseFifo_1_first__17_BIT_144___d318;
  tUInt8 DEF_regall_cbram_responseFifo_0_first__89_BIT_144___d190;
  tUInt8 DEF_translationTable_cbram_responseFifo_1_notFull____d154;
  tUInt8 DEF_translationTable_cbram_responseFifo_0_notFull____d133;
  tUInt8 DEF_regall_cbram_responseFifo_1_notFull____d90;
  tUInt8 DEF_regall_cbram_responseFifo_0_notFull____d69;
  tUWide DEF_regall_cbram_data2_1___d87;
  tUWide DEF_regall_cbram_data2_0___d66;
  tUWide DEF_regall_cbram_responseFifo_1_first____d317;
  tUWide DEF_regall_cbram_responseFifo_0_first____d189;
  tUInt64 DEF_stage4Params_1_first____d382;
  tUInt64 DEF_stage4Params_0_first____d255;
  tUInt32 DEF_sglId_gen_comp_state__h999;
  tUInt32 DEF_t__h1387;
  tUInt32 DEF_translationTable_cbram_data2_1___d151;
  tUInt32 DEF_translationTable_cbram_data2_0___d130;
  tUInt8 DEF_x__h1160;
  tUInt8 DEF_regall_cbram_data2_1_7_BIT_146___d88;
  tUInt8 DEF_regall_cbram_data2_0_6_BIT_146___d67;
  tUInt8 DEF_translationTable_cbram_data2_1_51_BIT_29___d152;
  tUInt8 DEF_translationTable_cbram_data2_0_30_BIT_29___d131;
  tUInt8 DEF_sglId_gen_tags_port1__read__2_BIT_sglId_gen_ta_ETC___d14;
  tUInt8 DEF_stage4Params_1_first__82_BITS_47_TO_45_83_EQ_0___d384;
  tUInt8 DEF_stage4Params_0_first__55_BITS_47_TO_45_56_EQ_0___d257;
  tUInt8 DEF_NOT_translationTable_cbram_responseFifo_1_notF_ETC___d155;
  tUInt8 DEF_NOT_translationTable_cbram_responseFifo_0_notF_ETC___d134;
  tUInt8 DEF_NOT_regall_cbram_responseFifo_1_notFull__0___d91;
  tUInt8 DEF_NOT_regall_cbram_responseFifo_0_notFull__9___d70;
 
 /* Local definitions */
 private:
  tUWide DEF_regall_cbram_data1_1___d101;
  tUWide DEF_regall_cbram_data1_0___d80;
  tUWide DEF_regall_cbram_data0_1_wget____d96;
  tUWide DEF_regall_cbram_data0_0_wget____d75;
  tUWide DEF_regall_cbram_bram_b_read____d105;
  tUWide DEF_regall_cbram_bram_a_read____d84;
  tUWide DEF_stage3Params_1_first____d349;
  tUWide DEF_stage3Params_0_first____d222;
  tUWide DEF_dmaErrorFifos_1_first____d178;
  tUWide DEF_dmaErrorFifos_0_first____d175;
  tUInt8 DEF_x__h1516;
  tUWide DEF_regall_cbram_data0_1_wget__6_BITS_145_TO_0___d99;
  tUWide DEF_regall_cbram_data0_0_wget__5_BITS_145_TO_0___d78;
  tUWide DEF_regall_cbram_data2_1_7_BITS_144_TO_0___d104;
  tUWide DEF_regall_cbram_data2_0_6_BITS_144_TO_0___d83;
  tUWide DEF_IF_regall_cbram_data2_0_6_BIT_145_2_THEN_regal_ETC___d85;
  tUWide DEF_IF_regall_cbram_data2_1_7_BIT_145_03_THEN_rega_ETC___d106;
  tUInt32 DEF__0_CONCAT_mmuid___d441;
  tUInt64 DEF_y__h16139;
  tUInt8 DEF_x__h1480;
  tUWide DEF__2_CONCAT_DONTCARE___d186;
  tUWide DEF_regall_cbram_data0_0_whas__4_AND_regall_cbram__ETC___d79;
  tUWide DEF_regall_cbram_data0_1_whas__5_AND_regall_cbram__ETC___d100;
  tUWide DEF__1_CONCAT_request_region_barr12_BITS_27_TO_0_53_ETC___d465;
  tUWide DEF_request_region_barr8_BITS_27_TO_0_56_CONCAT_re_ETC___d464;
  tUWide DEF__0_CONCAT_DONTCARE___d440;
  tUWide DEF_reqs0_0_first__96_BITS_39_TO_24_97_ULT_regall__ETC___d216;
  tUWide DEF_reqs0_0_first__96_BITS_39_TO_16_03_ULT_regall__ETC___d215;
  tUWide DEF_reqs0_1_first__23_BITS_39_TO_24_24_ULT_regall__ETC___d343;
  tUWide DEF_reqs0_1_first__23_BITS_39_TO_16_30_ULT_regall__ETC___d342;
  tUWide DEF_regall_cbram_responseFifo_0_first__89_BITS_115_ETC___d214;
  tUWide DEF_regall_cbram_responseFifo_1_first__17_BITS_115_ETC___d341;
  tUWide DEF__805306368_CONCAT_reqs0_0_first__96___d218;
  tUWide DEF__805306368_CONCAT_reqs0_1_first__23___d345;
  tUWide DEF__5_CONCAT_0_CONCAT_stage4Params_0_first__55_BIT_ETC___d268;
  tUWide DEF__5_CONCAT_0_CONCAT_stage4Params_1_first__82_BIT_ETC___d394;
  tUInt32 DEF__2_CONCAT_DONTCARE___d274;
 
 /* Rules */
 public:
  void RL_sglId_gen_counter_react();
  void RL_sglId_gen_complete_rule1();
  void RL_sglId_gen_ret_rule();
  void RL_sglId_gen_init_rule();
  void RL_sglId_gen_tag_rule();
  void RL_complete_sglId_gen();
  void RL_regall_cbram_counter_0_react();
  void RL_regall_cbram_counter_1_react();
  void RL_regall_cbram_bramRule();
  void RL_regall_cbram_bramRule_1();
  void RL_translationTable_cbram_counter_0_react();
  void RL_translationTable_cbram_counter_1_react();
  void RL_translationTable_cbram_bramRule();
  void RL_translationTable_cbram_bramRule_1();
  void RL_mkConnectionGetPut();
  void RL_mkConnectionGetPut_1();
  void RL_stage1();
  void RL_stage2();
  void RL_stage3();
  void RL_stage4();
  void RL_stage5();
  void RL_stage1_1();
  void RL_stage2_1();
  void RL_stage3_1();
  void RL_stage4_1();
  void RL_stage5_1();
  void RL_idReturnRule();
 
 /* Methods */
 public:
  void METH_request_sglist(tUInt32 ARG_request_sglist_sglId,
			   tUInt32 ARG_request_sglist_sglIndex,
			   tUInt64 ARG_request_sglist_addr,
			   tUInt32 ARG_request_sglist_len);
  tUInt8 METH_RDY_request_sglist();
  void METH_request_region(tUInt32 ARG_request_region_sglId,
			   tUInt64 ARG_request_region_barr12,
			   tUInt32 ARG_request_region_index12,
			   tUInt64 ARG_request_region_barr8,
			   tUInt32 ARG_request_region_index8,
			   tUInt64 ARG_request_region_barr4,
			   tUInt32 ARG_request_region_index4,
			   tUInt64 ARG_request_region_barr0,
			   tUInt32 ARG_request_region_index0);
  tUInt8 METH_RDY_request_region();
  void METH_request_idRequest(tUInt32 ARG_request_idRequest_fd);
  tUInt8 METH_RDY_request_idRequest();
  void METH_request_idReturn(tUInt32 ARG_request_idReturn_sglId);
  tUInt8 METH_RDY_request_idReturn();
  void METH_request_setInterface(tUInt32 ARG_request_setInterface_interfaceId,
				 tUInt32 ARG_request_setInterface_sglId);
  tUInt8 METH_RDY_request_setInterface();
  tUInt8 METH_idResponsePipe_first();
  tUInt8 METH_RDY_idResponsePipe_first();
  void METH_idResponsePipe_deq();
  tUInt8 METH_RDY_idResponsePipe_deq();
  tUInt8 METH_idResponsePipe_notEmpty();
  tUInt8 METH_RDY_idResponsePipe_notEmpty();
  tUInt8 METH_configResponsePipe_first();
  tUInt8 METH_RDY_configResponsePipe_first();
  void METH_configResponsePipe_deq();
  tUInt8 METH_RDY_configResponsePipe_deq();
  tUInt8 METH_configResponsePipe_notEmpty();
  tUInt8 METH_RDY_configResponsePipe_notEmpty();
  tUWide METH_errorPipe_first();
  tUInt8 METH_RDY_errorPipe_first();
  void METH_errorPipe_deq();
  tUInt8 METH_RDY_errorPipe_deq();
  tUInt8 METH_errorPipe_notEmpty();
  tUInt8 METH_RDY_errorPipe_notEmpty();
  void METH_addr_0_request_put(tUInt64 ARG_addr_0_request_put);
  tUInt8 METH_RDY_addr_0_request_put();
  tUInt64 METH_addr_0_response_get();
  tUInt8 METH_RDY_addr_0_response_get();
  void METH_addr_1_request_put(tUInt64 ARG_addr_1_request_put);
  tUInt8 METH_RDY_addr_1_request_put();
  tUInt64 METH_addr_1_response_get();
  tUInt8 METH_RDY_addr_1_response_get();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMMUSynth &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMMUSynth &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMMUSynth &backing);
};

#endif /* ifndef __mkMMUSynth_h__ */
