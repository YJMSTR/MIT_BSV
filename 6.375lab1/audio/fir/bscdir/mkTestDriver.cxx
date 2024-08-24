/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Sat Aug 24 18:10:57 CST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkTestDriver.h"


/* String declarations */
static std::string const __str_literal_7("%c", 2u);
static std::string const __str_literal_3("couldn't open in.pcm", 20u);
static std::string const __str_literal_6("couldn't open out.pcm for write", 31u);
static std::string const __str_literal_1("in.pcm", 6u);
static std::string const __str_literal_4("out.pcm", 7u);
static std::string const __str_literal_2("rb", 2u);
static std::string const __str_literal_5("wb", 2u);


/* Constructor */
MOD_mkTestDriver::MOD_mkTestDriver(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_m_doneread(simHdl, "m_doneread", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_m_in(simHdl, "m_in", this, 32u),
    INST_m_inited(simHdl, "m_inited", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_m_out(simHdl, "m_out", this, 32u),
    INST_m_outstanding(simHdl, "m_outstanding", this, 32u, 0u),
    INST_pipeline_infifo(simHdl, "pipeline_infifo", this, 16u, 2u, (tUInt8)1u, 0u),
    INST_pipeline_multiplier_0(simHdl, "pipeline_multiplier_0", this),
    INST_pipeline_multiplier_1(simHdl, "pipeline_multiplier_1", this),
    INST_pipeline_multiplier_2(simHdl, "pipeline_multiplier_2", this),
    INST_pipeline_multiplier_3(simHdl, "pipeline_multiplier_3", this),
    INST_pipeline_multiplier_4(simHdl, "pipeline_multiplier_4", this),
    INST_pipeline_multiplier_5(simHdl, "pipeline_multiplier_5", this),
    INST_pipeline_multiplier_6(simHdl, "pipeline_multiplier_6", this),
    INST_pipeline_multiplier_7(simHdl, "pipeline_multiplier_7", this),
    INST_pipeline_multiplier_8(simHdl, "pipeline_multiplier_8", this),
    INST_pipeline_outfifo(simHdl, "pipeline_outfifo", this, 16u, 2u, (tUInt8)1u, 0u),
    INST_pipeline_r_0(simHdl, "pipeline_r_0", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_1(simHdl, "pipeline_r_1", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_2(simHdl, "pipeline_r_2", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_3(simHdl, "pipeline_r_3", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_4(simHdl, "pipeline_r_4", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_5(simHdl, "pipeline_r_5", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_6(simHdl, "pipeline_r_6", this, 16u, 0u, (tUInt8)0u),
    INST_pipeline_r_7(simHdl, "pipeline_r_7", this, 16u, 0u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u),
    DEF_b__h6851(2863311530u),
    DEF_x__h7002(2863311530u),
    DEF_TASK_fopen___d70(2863311530u),
    DEF_TASK_fopen___d68(2863311530u)
{
  symbol_count = 42u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTestDriver::init_symbols_0()
{
  init_symbol(&symbols[0u], "CAN_FIRE_RL_finish", SYM_DEF, &DEF_CAN_FIRE_RL_finish, 1u);
  init_symbol(&symbols[1u], "CAN_FIRE_RL_init", SYM_DEF, &DEF_CAN_FIRE_RL_init, 1u);
  init_symbol(&symbols[2u],
	      "CAN_FIRE_RL_pipeline_get_multiplier_res",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_pipeline_get_multiplier_res,
	      1u);
  init_symbol(&symbols[3u],
	      "CAN_FIRE_RL_pipeline_process",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_pipeline_process,
	      1u);
  init_symbol(&symbols[4u], "CAN_FIRE_RL_read", SYM_DEF, &DEF_CAN_FIRE_RL_read, 1u);
  init_symbol(&symbols[5u], "CAN_FIRE_RL_write", SYM_DEF, &DEF_CAN_FIRE_RL_write, 1u);
  init_symbol(&symbols[6u], "m_doneread", SYM_MODULE, &INST_m_doneread);
  init_symbol(&symbols[7u], "m_in", SYM_MODULE, &INST_m_in);
  init_symbol(&symbols[8u], "m_inited", SYM_MODULE, &INST_m_inited);
  init_symbol(&symbols[9u], "m_out", SYM_MODULE, &INST_m_out);
  init_symbol(&symbols[10u], "m_outstanding", SYM_MODULE, &INST_m_outstanding);
  init_symbol(&symbols[11u], "pipeline_infifo", SYM_MODULE, &INST_pipeline_infifo);
  init_symbol(&symbols[12u], "pipeline_multiplier_0", SYM_MODULE, &INST_pipeline_multiplier_0);
  init_symbol(&symbols[13u], "pipeline_multiplier_1", SYM_MODULE, &INST_pipeline_multiplier_1);
  init_symbol(&symbols[14u], "pipeline_multiplier_2", SYM_MODULE, &INST_pipeline_multiplier_2);
  init_symbol(&symbols[15u], "pipeline_multiplier_3", SYM_MODULE, &INST_pipeline_multiplier_3);
  init_symbol(&symbols[16u], "pipeline_multiplier_4", SYM_MODULE, &INST_pipeline_multiplier_4);
  init_symbol(&symbols[17u], "pipeline_multiplier_5", SYM_MODULE, &INST_pipeline_multiplier_5);
  init_symbol(&symbols[18u], "pipeline_multiplier_6", SYM_MODULE, &INST_pipeline_multiplier_6);
  init_symbol(&symbols[19u], "pipeline_multiplier_7", SYM_MODULE, &INST_pipeline_multiplier_7);
  init_symbol(&symbols[20u], "pipeline_multiplier_8", SYM_MODULE, &INST_pipeline_multiplier_8);
  init_symbol(&symbols[21u], "pipeline_outfifo", SYM_MODULE, &INST_pipeline_outfifo);
  init_symbol(&symbols[22u], "pipeline_r_0", SYM_MODULE, &INST_pipeline_r_0);
  init_symbol(&symbols[23u], "pipeline_r_1", SYM_MODULE, &INST_pipeline_r_1);
  init_symbol(&symbols[24u], "pipeline_r_2", SYM_MODULE, &INST_pipeline_r_2);
  init_symbol(&symbols[25u], "pipeline_r_3", SYM_MODULE, &INST_pipeline_r_3);
  init_symbol(&symbols[26u], "pipeline_r_4", SYM_MODULE, &INST_pipeline_r_4);
  init_symbol(&symbols[27u], "pipeline_r_5", SYM_MODULE, &INST_pipeline_r_5);
  init_symbol(&symbols[28u], "pipeline_r_6", SYM_MODULE, &INST_pipeline_r_6);
  init_symbol(&symbols[29u], "pipeline_r_7", SYM_MODULE, &INST_pipeline_r_7);
  init_symbol(&symbols[30u], "RL_finish", SYM_RULE);
  init_symbol(&symbols[31u], "RL_init", SYM_RULE);
  init_symbol(&symbols[32u], "RL_pipeline_get_multiplier_res", SYM_RULE);
  init_symbol(&symbols[33u], "RL_pipeline_process", SYM_RULE);
  init_symbol(&symbols[34u], "RL_read", SYM_RULE);
  init_symbol(&symbols[35u], "RL_write", SYM_RULE);
  init_symbol(&symbols[36u], "WILL_FIRE_RL_finish", SYM_DEF, &DEF_WILL_FIRE_RL_finish, 1u);
  init_symbol(&symbols[37u], "WILL_FIRE_RL_init", SYM_DEF, &DEF_WILL_FIRE_RL_init, 1u);
  init_symbol(&symbols[38u],
	      "WILL_FIRE_RL_pipeline_get_multiplier_res",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_pipeline_get_multiplier_res,
	      1u);
  init_symbol(&symbols[39u],
	      "WILL_FIRE_RL_pipeline_process",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_pipeline_process,
	      1u);
  init_symbol(&symbols[40u], "WILL_FIRE_RL_read", SYM_DEF, &DEF_WILL_FIRE_RL_read, 1u);
  init_symbol(&symbols[41u], "WILL_FIRE_RL_write", SYM_DEF, &DEF_WILL_FIRE_RL_write, 1u);
}


/* Rule actions */

void MOD_mkTestDriver::RL_pipeline_process()
{
  tUInt32 DEF_pipeline_infifo_first____d27;
  tUInt32 DEF_b__h1810;
  tUInt32 DEF_b__h1881;
  tUInt32 DEF_b__h1952;
  tUInt32 DEF_b__h2023;
  tUInt32 DEF_b__h2094;
  tUInt32 DEF_b__h2165;
  tUInt32 DEF_b__h2236;
  tUInt32 DEF_b__h5202;
  DEF_b__h5202 = INST_pipeline_r_7.METH_read();
  DEF_b__h2236 = INST_pipeline_r_6.METH_read();
  DEF_b__h2165 = INST_pipeline_r_5.METH_read();
  DEF_b__h2094 = INST_pipeline_r_4.METH_read();
  DEF_b__h2023 = INST_pipeline_r_3.METH_read();
  DEF_b__h1881 = INST_pipeline_r_1.METH_read();
  DEF_b__h1952 = INST_pipeline_r_2.METH_read();
  DEF_b__h1810 = INST_pipeline_r_0.METH_read();
  DEF_pipeline_infifo_first____d27 = INST_pipeline_infifo.METH_first();
  INST_pipeline_infifo.METH_deq();
  INST_pipeline_r_1.METH_write(DEF_b__h1810);
  INST_pipeline_r_2.METH_write(DEF_b__h1881);
  INST_pipeline_r_3.METH_write(DEF_b__h1952);
  INST_pipeline_r_4.METH_write(DEF_b__h2023);
  INST_pipeline_r_5.METH_write(DEF_b__h2094);
  INST_pipeline_r_6.METH_write(DEF_b__h2165);
  INST_pipeline_r_7.METH_write(DEF_b__h2236);
  INST_pipeline_multiplier_0.METH_putOperands(4294966483u, DEF_pipeline_infifo_first____d27);
  INST_pipeline_multiplier_2.METH_putOperands(4294966424u, DEF_b__h1881);
  INST_pipeline_multiplier_1.METH_putOperands(0u, DEF_b__h1810);
  INST_pipeline_multiplier_3.METH_putOperands(0u, DEF_b__h1952);
  INST_pipeline_multiplier_4.METH_putOperands(53615u, DEF_b__h2023);
  INST_pipeline_multiplier_5.METH_putOperands(0u, DEF_b__h2094);
  INST_pipeline_multiplier_6.METH_putOperands(4294966424u, DEF_b__h2165);
  INST_pipeline_multiplier_8.METH_putOperands(4294966483u, DEF_b__h5202);
  INST_pipeline_multiplier_7.METH_putOperands(0u, DEF_b__h2236);
}

void MOD_mkTestDriver::RL_pipeline_get_multiplier_res()
{
  tUInt32 DEF_x__h5336;
  tUInt32 DEF_x__h5401;
  tUInt32 DEF_x__h5466;
  tUInt32 DEF_x__h5531;
  tUInt32 DEF_x__h5596;
  tUInt32 DEF_x__h5661;
  tUInt32 DEF_x__h5726;
  tUInt32 DEF_x__h5791;
  tUInt32 DEF_pipeline_multiplier_0_getResult_8_PLUS_pipelin_ETC___d65;
  tUInt32 DEF_AVMeth_pipeline_multiplier_8_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_7_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_6_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_5_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_4_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_3_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_2_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_0_getResult;
  tUInt32 DEF_AVMeth_pipeline_multiplier_1_getResult;
  DEF_AVMeth_pipeline_multiplier_0_getResult = INST_pipeline_multiplier_0.METH_getResult();
  DEF_AVMeth_pipeline_multiplier_1_getResult = INST_pipeline_multiplier_1.METH_getResult();
  DEF_x__h5336 = DEF_AVMeth_pipeline_multiplier_0_getResult + DEF_AVMeth_pipeline_multiplier_1_getResult;
  DEF_AVMeth_pipeline_multiplier_2_getResult = INST_pipeline_multiplier_2.METH_getResult();
  DEF_x__h5401 = DEF_x__h5336 + DEF_AVMeth_pipeline_multiplier_2_getResult;
  DEF_AVMeth_pipeline_multiplier_3_getResult = INST_pipeline_multiplier_3.METH_getResult();
  DEF_x__h5466 = DEF_x__h5401 + DEF_AVMeth_pipeline_multiplier_3_getResult;
  DEF_AVMeth_pipeline_multiplier_4_getResult = INST_pipeline_multiplier_4.METH_getResult();
  DEF_x__h5531 = DEF_x__h5466 + DEF_AVMeth_pipeline_multiplier_4_getResult;
  DEF_AVMeth_pipeline_multiplier_5_getResult = INST_pipeline_multiplier_5.METH_getResult();
  DEF_x__h5596 = DEF_x__h5531 + DEF_AVMeth_pipeline_multiplier_5_getResult;
  DEF_AVMeth_pipeline_multiplier_6_getResult = INST_pipeline_multiplier_6.METH_getResult();
  DEF_x__h5661 = DEF_x__h5596 + DEF_AVMeth_pipeline_multiplier_6_getResult;
  DEF_AVMeth_pipeline_multiplier_7_getResult = INST_pipeline_multiplier_7.METH_getResult();
  DEF_x__h5726 = DEF_x__h5661 + DEF_AVMeth_pipeline_multiplier_7_getResult;
  DEF_AVMeth_pipeline_multiplier_8_getResult = INST_pipeline_multiplier_8.METH_getResult();
  DEF_x__h5791 = DEF_x__h5726 + DEF_AVMeth_pipeline_multiplier_8_getResult;
  DEF_pipeline_multiplier_0_getResult_8_PLUS_pipelin_ETC___d65 = (tUInt32)(DEF_x__h5791 >> 16u);
  INST_pipeline_outfifo.METH_enq(DEF_pipeline_multiplier_0_getResult_8_PLUS_pipelin_ETC___d65);
}

void MOD_mkTestDriver::RL_init()
{
  tUInt8 DEF_TASK_fopen_8_EQ_0___d69;
  tUInt8 DEF_TASK_fopen_0_EQ_0___d71;
  INST_m_inited.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_TASK_fopen___d68 = dollar_fopen("s,s", &__str_literal_1, &__str_literal_2);
  DEF_TASK_fopen_8_EQ_0___d69 = DEF_TASK_fopen___d68 == 0u;
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_TASK_fopen_8_EQ_0___d69)
      dollar_display(sim_hdl, this, "s", &__str_literal_3);
    if (DEF_TASK_fopen_8_EQ_0___d69)
      dollar_finish(sim_hdl, "32", 1u);
  }
  INST_m_in.METH_write(DEF_TASK_fopen___d68);
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_TASK_fopen___d70 = dollar_fopen("s,s", &__str_literal_4, &__str_literal_5);
  DEF_TASK_fopen_0_EQ_0___d71 = DEF_TASK_fopen___d70 == 0u;
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_TASK_fopen_0_EQ_0___d71)
      dollar_display(sim_hdl, this, "s", &__str_literal_6);
    if (DEF_TASK_fopen_0_EQ_0___d71)
      dollar_finish(sim_hdl, "32", 1u);
  }
  INST_m_out.METH_write(DEF_TASK_fopen___d70);
}

void MOD_mkTestDriver::RL_read()
{
  tUInt32 DEF_TASK_fgetc_4_BITS_7_TO_0_0_CONCAT_TASK_fgetc_2_ETC___d92;
  tUInt8 DEF_NOT_TASK_fgetc_2_EQ_4294967295_3_7_AND_NOT_TAS_ETC___d89;
  tUInt8 DEF_TASK_fgetc_2_EQ_4294967295_3_OR_TASK_fgetc_4_E_ETC___d86;
  tUInt8 DEF_TASK_fgetc_2_EQ_4294967295___d83;
  tUInt8 DEF_TASK_fgetc_4_EQ_4294967295___d85;
  tUInt8 DEF_a8__h6949;
  tUInt8 DEF_b8__h6950;
  tUInt32 DEF_m_in___d81;
  DEF_m_in___d81 = INST_m_in.METH_read();
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_x__h7002 = dollar_fgetc("32", DEF_m_in___d81);
  DEF_a8__h6949 = (tUInt8)((tUInt8)255u & DEF_x__h7002);
  DEF_TASK_fgetc_2_EQ_4294967295___d83 = DEF_x__h7002 == 4294967295u;
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_b__h6851 = dollar_fgetc("32", DEF_m_in___d81);
  DEF_b8__h6950 = (tUInt8)((tUInt8)255u & DEF_b__h6851);
  DEF_TASK_fgetc_4_EQ_4294967295___d85 = DEF_b__h6851 == 4294967295u;
  DEF_TASK_fgetc_2_EQ_4294967295_3_OR_TASK_fgetc_4_E_ETC___d86 = DEF_TASK_fgetc_2_EQ_4294967295___d83 || DEF_TASK_fgetc_4_EQ_4294967295___d85;
  DEF_NOT_TASK_fgetc_2_EQ_4294967295_3_7_AND_NOT_TAS_ETC___d89 = !DEF_TASK_fgetc_2_EQ_4294967295___d83 && !DEF_TASK_fgetc_4_EQ_4294967295___d85;
  DEF_TASK_fgetc_4_BITS_7_TO_0_0_CONCAT_TASK_fgetc_2_ETC___d92 = 65535u & ((((tUInt32)(DEF_b8__h6950)) << 8u) | (tUInt32)(DEF_a8__h6949));
  if (DEF_TASK_fgetc_2_EQ_4294967295_3_OR_TASK_fgetc_4_E_ETC___d86)
    INST_m_doneread.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_TASK_fgetc_2_EQ_4294967295_3_OR_TASK_fgetc_4_E_ETC___d86)
      dollar_fclose("32", DEF_m_in___d81);
  if (DEF_NOT_TASK_fgetc_2_EQ_4294967295_3_7_AND_NOT_TAS_ETC___d89)
    INST_pipeline_infifo.METH_enq(DEF_TASK_fgetc_4_BITS_7_TO_0_0_CONCAT_TASK_fgetc_2_ETC___d92);
  if (DEF_NOT_TASK_fgetc_2_EQ_4294967295_3_7_AND_NOT_TAS_ETC___d89)
    INST_m_outstanding.METH_addA(1u);
}

void MOD_mkTestDriver::RL_write()
{
  tUInt8 DEF_a8__h7161;
  tUInt8 DEF_b8__h7162;
  tUInt32 DEF_pipeline_outfifo_first____d96;
  DEF_m_out___d95 = INST_m_out.METH_read();
  DEF_pipeline_outfifo_first____d96 = INST_pipeline_outfifo.METH_first();
  DEF_b8__h7162 = (tUInt8)(DEF_pipeline_outfifo_first____d96 >> 8u);
  DEF_a8__h7161 = (tUInt8)((tUInt8)255u & DEF_pipeline_outfifo_first____d96);
  INST_pipeline_outfifo.METH_deq();
  INST_m_outstanding.METH_addB(4294967295u);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    dollar_fwrite(sim_hdl, this, "32,s,8", DEF_m_out___d95, &__str_literal_7, DEF_a8__h7161);
    dollar_fwrite(sim_hdl, this, "32,s,8", DEF_m_out___d95, &__str_literal_7, DEF_b8__h7162);
  }
}

void MOD_mkTestDriver::RL_finish()
{
  DEF_m_out___d95 = INST_m_out.METH_read();
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    dollar_fclose("32", DEF_m_out___d95);
    dollar_finish(sim_hdl, "32", 1u);
  }
}


/* Methods */


/* Reset routines */

void MOD_mkTestDriver::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_pipeline_r_7.reset_RST(ARG_rst_in);
  INST_pipeline_r_6.reset_RST(ARG_rst_in);
  INST_pipeline_r_5.reset_RST(ARG_rst_in);
  INST_pipeline_r_4.reset_RST(ARG_rst_in);
  INST_pipeline_r_3.reset_RST(ARG_rst_in);
  INST_pipeline_r_2.reset_RST(ARG_rst_in);
  INST_pipeline_r_1.reset_RST(ARG_rst_in);
  INST_pipeline_r_0.reset_RST(ARG_rst_in);
  INST_pipeline_outfifo.reset_RST(ARG_rst_in);
  INST_pipeline_multiplier_8.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_7.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_6.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_5.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_4.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_3.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_2.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_1.reset_RST_N(ARG_rst_in);
  INST_pipeline_multiplier_0.reset_RST_N(ARG_rst_in);
  INST_pipeline_infifo.reset_RST(ARG_rst_in);
  INST_m_outstanding.reset_RST(ARG_rst_in);
  INST_m_inited.reset_RST(ARG_rst_in);
  INST_m_doneread.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTestDriver::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTestDriver::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_m_doneread.dump_state(indent + 2u);
  INST_m_in.dump_state(indent + 2u);
  INST_m_inited.dump_state(indent + 2u);
  INST_m_out.dump_state(indent + 2u);
  INST_m_outstanding.dump_state(indent + 2u);
  INST_pipeline_infifo.dump_state(indent + 2u);
  INST_pipeline_multiplier_0.dump_state(indent + 2u);
  INST_pipeline_multiplier_1.dump_state(indent + 2u);
  INST_pipeline_multiplier_2.dump_state(indent + 2u);
  INST_pipeline_multiplier_3.dump_state(indent + 2u);
  INST_pipeline_multiplier_4.dump_state(indent + 2u);
  INST_pipeline_multiplier_5.dump_state(indent + 2u);
  INST_pipeline_multiplier_6.dump_state(indent + 2u);
  INST_pipeline_multiplier_7.dump_state(indent + 2u);
  INST_pipeline_multiplier_8.dump_state(indent + 2u);
  INST_pipeline_outfifo.dump_state(indent + 2u);
  INST_pipeline_r_0.dump_state(indent + 2u);
  INST_pipeline_r_1.dump_state(indent + 2u);
  INST_pipeline_r_2.dump_state(indent + 2u);
  INST_pipeline_r_3.dump_state(indent + 2u);
  INST_pipeline_r_4.dump_state(indent + 2u);
  INST_pipeline_r_5.dump_state(indent + 2u);
  INST_pipeline_r_6.dump_state(indent + 2u);
  INST_pipeline_r_7.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTestDriver::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 33u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_finish", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_init", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_pipeline_get_multiplier_res", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_pipeline_process", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_read", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_write", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "TASK_fopen___d68", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "TASK_fopen___d70", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_finish", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_init", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_pipeline_get_multiplier_res", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_pipeline_process", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_read", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_write", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h6851", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "m_out___d95", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h7002", 32u);
  num = INST_m_doneread.dump_VCD_defs(num);
  num = INST_m_in.dump_VCD_defs(num);
  num = INST_m_inited.dump_VCD_defs(num);
  num = INST_m_out.dump_VCD_defs(num);
  num = INST_m_outstanding.dump_VCD_defs(num);
  num = INST_pipeline_infifo.dump_VCD_defs(num);
  num = INST_pipeline_outfifo.dump_VCD_defs(num);
  num = INST_pipeline_r_0.dump_VCD_defs(num);
  num = INST_pipeline_r_1.dump_VCD_defs(num);
  num = INST_pipeline_r_2.dump_VCD_defs(num);
  num = INST_pipeline_r_3.dump_VCD_defs(num);
  num = INST_pipeline_r_4.dump_VCD_defs(num);
  num = INST_pipeline_r_5.dump_VCD_defs(num);
  num = INST_pipeline_r_6.dump_VCD_defs(num);
  num = INST_pipeline_r_7.dump_VCD_defs(num);
  if (levels != 1u)
  {
    unsigned int l = levels == 0u ? 0u : levels - 1u;
    num = INST_pipeline_multiplier_0.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_1.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_2.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_3.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_4.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_5.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_6.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_7.dump_VCD_defs(l);
    num = INST_pipeline_multiplier_8.dump_VCD_defs(l);
  }
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTestDriver::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTestDriver &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
  if (levels != 1u)
    vcd_submodules(dt, levels - 1u, backing);
}

void MOD_mkTestDriver::vcd_defs(tVCDDumpType dt, MOD_mkTestDriver &backing)
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
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_finish) != DEF_CAN_FIRE_RL_finish)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_finish, 1u);
	backing.DEF_CAN_FIRE_RL_finish = DEF_CAN_FIRE_RL_finish;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_init) != DEF_CAN_FIRE_RL_init)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_init, 1u);
	backing.DEF_CAN_FIRE_RL_init = DEF_CAN_FIRE_RL_init;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_pipeline_get_multiplier_res) != DEF_CAN_FIRE_RL_pipeline_get_multiplier_res)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_pipeline_get_multiplier_res, 1u);
	backing.DEF_CAN_FIRE_RL_pipeline_get_multiplier_res = DEF_CAN_FIRE_RL_pipeline_get_multiplier_res;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_pipeline_process) != DEF_CAN_FIRE_RL_pipeline_process)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_pipeline_process, 1u);
	backing.DEF_CAN_FIRE_RL_pipeline_process = DEF_CAN_FIRE_RL_pipeline_process;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_read) != DEF_CAN_FIRE_RL_read)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_read, 1u);
	backing.DEF_CAN_FIRE_RL_read = DEF_CAN_FIRE_RL_read;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_write) != DEF_CAN_FIRE_RL_write)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_write, 1u);
	backing.DEF_CAN_FIRE_RL_write = DEF_CAN_FIRE_RL_write;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_TASK_fopen___d68) != DEF_TASK_fopen___d68)
      {
	vcd_write_val(sim_hdl, num, DEF_TASK_fopen___d68, 32u);
	backing.DEF_TASK_fopen___d68 = DEF_TASK_fopen___d68;
      }
      ++num;
      if ((backing.DEF_TASK_fopen___d70) != DEF_TASK_fopen___d70)
      {
	vcd_write_val(sim_hdl, num, DEF_TASK_fopen___d70, 32u);
	backing.DEF_TASK_fopen___d70 = DEF_TASK_fopen___d70;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_finish) != DEF_WILL_FIRE_RL_finish)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_finish, 1u);
	backing.DEF_WILL_FIRE_RL_finish = DEF_WILL_FIRE_RL_finish;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_init) != DEF_WILL_FIRE_RL_init)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_init, 1u);
	backing.DEF_WILL_FIRE_RL_init = DEF_WILL_FIRE_RL_init;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_pipeline_get_multiplier_res) != DEF_WILL_FIRE_RL_pipeline_get_multiplier_res)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_pipeline_get_multiplier_res, 1u);
	backing.DEF_WILL_FIRE_RL_pipeline_get_multiplier_res = DEF_WILL_FIRE_RL_pipeline_get_multiplier_res;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_pipeline_process) != DEF_WILL_FIRE_RL_pipeline_process)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_pipeline_process, 1u);
	backing.DEF_WILL_FIRE_RL_pipeline_process = DEF_WILL_FIRE_RL_pipeline_process;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_read) != DEF_WILL_FIRE_RL_read)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_read, 1u);
	backing.DEF_WILL_FIRE_RL_read = DEF_WILL_FIRE_RL_read;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_write) != DEF_WILL_FIRE_RL_write)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_write, 1u);
	backing.DEF_WILL_FIRE_RL_write = DEF_WILL_FIRE_RL_write;
      }
      ++num;
      if ((backing.DEF_b__h6851) != DEF_b__h6851)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h6851, 32u);
	backing.DEF_b__h6851 = DEF_b__h6851;
      }
      ++num;
      if ((backing.DEF_m_out___d95) != DEF_m_out___d95)
      {
	vcd_write_val(sim_hdl, num, DEF_m_out___d95, 32u);
	backing.DEF_m_out___d95 = DEF_m_out___d95;
      }
      ++num;
      if ((backing.DEF_x__h7002) != DEF_x__h7002)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h7002, 32u);
	backing.DEF_x__h7002 = DEF_x__h7002;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_finish, 1u);
      backing.DEF_CAN_FIRE_RL_finish = DEF_CAN_FIRE_RL_finish;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_init, 1u);
      backing.DEF_CAN_FIRE_RL_init = DEF_CAN_FIRE_RL_init;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_pipeline_get_multiplier_res, 1u);
      backing.DEF_CAN_FIRE_RL_pipeline_get_multiplier_res = DEF_CAN_FIRE_RL_pipeline_get_multiplier_res;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_pipeline_process, 1u);
      backing.DEF_CAN_FIRE_RL_pipeline_process = DEF_CAN_FIRE_RL_pipeline_process;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_read, 1u);
      backing.DEF_CAN_FIRE_RL_read = DEF_CAN_FIRE_RL_read;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_write, 1u);
      backing.DEF_CAN_FIRE_RL_write = DEF_CAN_FIRE_RL_write;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_TASK_fopen___d68, 32u);
      backing.DEF_TASK_fopen___d68 = DEF_TASK_fopen___d68;
      vcd_write_val(sim_hdl, num++, DEF_TASK_fopen___d70, 32u);
      backing.DEF_TASK_fopen___d70 = DEF_TASK_fopen___d70;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_finish, 1u);
      backing.DEF_WILL_FIRE_RL_finish = DEF_WILL_FIRE_RL_finish;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_init, 1u);
      backing.DEF_WILL_FIRE_RL_init = DEF_WILL_FIRE_RL_init;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_pipeline_get_multiplier_res, 1u);
      backing.DEF_WILL_FIRE_RL_pipeline_get_multiplier_res = DEF_WILL_FIRE_RL_pipeline_get_multiplier_res;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_pipeline_process, 1u);
      backing.DEF_WILL_FIRE_RL_pipeline_process = DEF_WILL_FIRE_RL_pipeline_process;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_read, 1u);
      backing.DEF_WILL_FIRE_RL_read = DEF_WILL_FIRE_RL_read;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_write, 1u);
      backing.DEF_WILL_FIRE_RL_write = DEF_WILL_FIRE_RL_write;
      vcd_write_val(sim_hdl, num++, DEF_b__h6851, 32u);
      backing.DEF_b__h6851 = DEF_b__h6851;
      vcd_write_val(sim_hdl, num++, DEF_m_out___d95, 32u);
      backing.DEF_m_out___d95 = DEF_m_out___d95;
      vcd_write_val(sim_hdl, num++, DEF_x__h7002, 32u);
      backing.DEF_x__h7002 = DEF_x__h7002;
    }
}

void MOD_mkTestDriver::vcd_prims(tVCDDumpType dt, MOD_mkTestDriver &backing)
{
  INST_m_doneread.dump_VCD(dt, backing.INST_m_doneread);
  INST_m_in.dump_VCD(dt, backing.INST_m_in);
  INST_m_inited.dump_VCD(dt, backing.INST_m_inited);
  INST_m_out.dump_VCD(dt, backing.INST_m_out);
  INST_m_outstanding.dump_VCD(dt, backing.INST_m_outstanding);
  INST_pipeline_infifo.dump_VCD(dt, backing.INST_pipeline_infifo);
  INST_pipeline_outfifo.dump_VCD(dt, backing.INST_pipeline_outfifo);
  INST_pipeline_r_0.dump_VCD(dt, backing.INST_pipeline_r_0);
  INST_pipeline_r_1.dump_VCD(dt, backing.INST_pipeline_r_1);
  INST_pipeline_r_2.dump_VCD(dt, backing.INST_pipeline_r_2);
  INST_pipeline_r_3.dump_VCD(dt, backing.INST_pipeline_r_3);
  INST_pipeline_r_4.dump_VCD(dt, backing.INST_pipeline_r_4);
  INST_pipeline_r_5.dump_VCD(dt, backing.INST_pipeline_r_5);
  INST_pipeline_r_6.dump_VCD(dt, backing.INST_pipeline_r_6);
  INST_pipeline_r_7.dump_VCD(dt, backing.INST_pipeline_r_7);
}

void MOD_mkTestDriver::vcd_submodules(tVCDDumpType dt,
				      unsigned int levels,
				      MOD_mkTestDriver &backing)
{
  INST_pipeline_multiplier_0.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_0);
  INST_pipeline_multiplier_1.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_1);
  INST_pipeline_multiplier_2.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_2);
  INST_pipeline_multiplier_3.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_3);
  INST_pipeline_multiplier_4.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_4);
  INST_pipeline_multiplier_5.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_5);
  INST_pipeline_multiplier_6.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_6);
  INST_pipeline_multiplier_7.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_7);
  INST_pipeline_multiplier_8.dump_VCD(dt, levels, backing.INST_pipeline_multiplier_8);
}
