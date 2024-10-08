/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Mon Sep 23 14:43:33 UTC 2024
 * 
 */

/* Generation options: */
#ifndef __mkProc_h__
#define __mkProc_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCsrFile.h"
#include "mkDMemory.h"
#include "mkIMemory.h"
#include "mkRFile.h"
#include "module_exec.h"
#include "module_decode.h"


/* Class declaration for the mkProc module */
class MOD_mkProc : public Module {
 
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
  MOD_mkCsrFile INST_csrf;
  MOD_mkDMemory INST_dMem;
  MOD_mkIMemory INST_iMem;
  MOD_Reg<tUInt32> INST_pc;
  MOD_mkRFile INST_rf;
  MOD_module_exec INST_instance_exec_1;
  MOD_module_decode INST_instance_decode_0;
 
 /* Constructor */
 public:
  MOD_mkProc(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_iMemInit_request_put;
  tUInt8 PORT_EN_dMemInit_request_put;
  tUWide PORT_iMemInit_request_put;
  tUWide PORT_dMemInit_request_put;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_dMemInit_request_put;
  tUInt8 DEF_WILL_FIRE_iMemInit_request_put;
  tUInt8 DEF_dMem_RDY_init_request_put____d2;
  tUInt8 DEF_iMem_RDY_init_request_put____d1;
  tUWide DEF_exec___d28;
  tUWide DEF_decode___d15;
  tUInt32 DEF_rVal1__h392;
  tUInt32 DEF_rVal2__h393;
  tUInt32 DEF_a__h449;
  tUInt32 DEF_csrVal__h394;
  tUInt32 DEF_iMem_req_pc_3___d14;
  tUInt8 DEF_csrf_started____d44;
  tUInt8 DEF_dMem_init_done____d6;
  tUInt8 DEF_iMem_init_done____d4;
  tUInt32 DEF_x__h740;
  tUInt8 DEF_x__h597;
  tUInt8 DEF_x__h666;
  tUInt8 DEF_exec_8_BITS_88_TO_85___d29;
  tUInt8 DEF_exec_8_BIT_84___d36;
  tUInt8 DEF_exec_8_BITS_88_TO_85_9_EQ_2___d30;
  tUInt8 DEF_exec_8_BITS_88_TO_85_9_EQ_3___d32;
  tUInt8 DEF_NOT_exec_8_BITS_88_TO_85_9_EQ_2_0___d38;
 
 /* Local definitions */
 private:
  tUWide DEF__1_CONCAT_DONTCARE___d10;
  tUWide DEF_NOT_exec_8_BITS_88_TO_85_9_EQ_2_0_8_CONCAT_IF__ETC___d53;
 
 /* Rules */
 public:
  void RL_test();
  void RL_doProc();
 
 /* Methods */
 public:
  tUInt32 METH_cpuToHost();
  tUInt8 METH_RDY_cpuToHost();
  void METH_hostToCpu(tUInt32 ARG_hostToCpu_startpc);
  tUInt8 METH_RDY_hostToCpu();
  void METH_iMemInit_request_put(tUWide ARG_iMemInit_request_put);
  tUInt8 METH_RDY_iMemInit_request_put();
  tUInt8 METH_iMemInit_done();
  tUInt8 METH_RDY_iMemInit_done();
  void METH_dMemInit_request_put(tUWide ARG_dMemInit_request_put);
  tUInt8 METH_RDY_dMemInit_request_put();
  tUInt8 METH_dMemInit_done();
  tUInt8 METH_RDY_dMemInit_done();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
};

#endif /* ifndef __mkProc_h__ */
