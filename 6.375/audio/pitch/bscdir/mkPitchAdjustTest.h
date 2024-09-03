/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Wed Sep  4 01:08:57 CST 2024
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkPitchAdjustTest_h__
#define __mkPitchAdjustTest_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkPitchAdjustTest module */
class MOD_mkPitchAdjustTest : public Module {
 
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
  MOD_Reg<tUInt64> INST_adjust_inphases_0;
  MOD_Reg<tUInt64> INST_adjust_inphases_1;
  MOD_Reg<tUInt64> INST_adjust_inphases_2;
  MOD_Reg<tUInt64> INST_adjust_inphases_3;
  MOD_Reg<tUInt64> INST_adjust_inphases_4;
  MOD_Reg<tUInt64> INST_adjust_inphases_5;
  MOD_Reg<tUInt64> INST_adjust_inphases_6;
  MOD_Reg<tUInt64> INST_adjust_inphases_7;
  MOD_Reg<tUInt64> INST_adjust_outphases_0;
  MOD_Reg<tUInt64> INST_adjust_outphases_1;
  MOD_Reg<tUInt64> INST_adjust_outphases_2;
  MOD_Reg<tUInt64> INST_adjust_outphases_3;
  MOD_Reg<tUInt64> INST_adjust_outphases_4;
  MOD_Reg<tUInt64> INST_adjust_outphases_5;
  MOD_Reg<tUInt64> INST_adjust_outphases_6;
  MOD_Reg<tUInt64> INST_adjust_outphases_7;
  MOD_Reg<tUInt32> INST_check;
  MOD_Reg<tUInt32> INST_feed;
  MOD_Reg<tUInt8> INST_passed;
 
 /* Constructor */
 public:
  MOD_mkPitchAdjustTest(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_RL_finish;
  tUInt8 DEF_CAN_FIRE_RL_finish;
  tUInt8 DEF_WILL_FIRE_RL_c2;
  tUInt8 DEF_CAN_FIRE_RL_c2;
  tUInt8 DEF_WILL_FIRE_RL_c1;
  tUInt8 DEF_CAN_FIRE_RL_c1;
  tUInt8 DEF_WILL_FIRE_RL_c0;
  tUInt8 DEF_CAN_FIRE_RL_c0;
  tUInt8 DEF_WILL_FIRE_RL_f2;
  tUInt8 DEF_CAN_FIRE_RL_f2;
  tUInt8 DEF_WILL_FIRE_RL_f1;
  tUInt8 DEF_CAN_FIRE_RL_f1;
  tUInt8 DEF_WILL_FIRE_RL_f0;
  tUInt8 DEF_CAN_FIRE_RL_f0;
  tUInt32 DEF_x__h8844;
  tUInt32 DEF_x__h8839;
 
 /* Local definitions */
 private:
  tUInt32 DEF_unsigned_DONTCARE___d13;
  tUInt32 DEF_unsigned_0___d9;
  tUInt32 DEF_signed_DONTCARE___d12;
  tUInt32 DEF_signed_1___d8;
  tUInt32 DEF_signed_0___d10;
  tUInt32 DEF_x__h4059;
  tUInt32 DEF_x__h1393;
 
 /* Rules */
 public:
  void RL_f0();
  void RL_f1();
  void RL_f2();
  void RL_c0();
  void RL_c1();
  void RL_c2();
  void RL_finish();
 
 /* Methods */
 public:
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkPitchAdjustTest &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkPitchAdjustTest &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkPitchAdjustTest &backing);
};

#endif /* ifndef __mkPitchAdjustTest_h__ */
