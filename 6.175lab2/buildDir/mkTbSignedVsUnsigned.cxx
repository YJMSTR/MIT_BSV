/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Wed Jul 17 18:37:00 CST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkTbSignedVsUnsigned.h"
#include "imported_BDPI_functions.h"


/* String declarations */
static std::string const __str_literal_3("    if signed: %0d * %0d test function gave %0d", 47u);
static std::string const __str_literal_6("    if signed: %0d * %0d test function gave %0d instead of %0d",
					 62u);
static std::string const __str_literal_4("    if unsigned: %0d * %0d test function gave %0d", 49u);
static std::string const __str_literal_7("    if unsigned: %0d * %0d test function gave %0d instead of %0d",
					 64u);
static std::string const __str_literal_5("FAILED:", 7u);
static std::string const __str_literal_1("PASSED", 6u);
static std::string const __str_literal_2("PASSED case %0d", 15u);


/* Constructor */
MOD_mkTbSignedVsUnsigned::MOD_mkTbSignedVsUnsigned(tSimStateHdl simHdl,
						   char const *name,
						   Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_tb_cycle(simHdl, "tb_cycle", this, 32u, 0u, (tUInt8)0u),
    INST_tb_randomA_ignore(simHdl, "tb_randomA_ignore", this, 8u, (tUInt8)0u),
    INST_tb_randomA_initialized(simHdl, "tb_randomA_initialized", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_tb_randomA_zaz(simHdl, "tb_randomA_zaz", this, 8u, (tUInt8)0u),
    INST_tb_randomB_ignore(simHdl, "tb_randomB_ignore", this, 8u, (tUInt8)0u),
    INST_tb_randomB_initialized(simHdl, "tb_randomB_initialized", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_tb_randomB_zaz(simHdl, "tb_randomB_zaz", this, 8u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u),
    DEF_v__h706(2863311530u),
    DEF_v__h329(2863311530u)
{
  symbol_count = 23u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTbSignedVsUnsigned::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "CAN_FIRE_RL_tb_randomA_every",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomA_every,
	      1u);
  init_symbol(&symbols[1u],
	      "CAN_FIRE_RL_tb_randomA_every_1",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomA_every_1,
	      1u);
  init_symbol(&symbols[2u],
	      "CAN_FIRE_RL_tb_randomB_every",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomB_every,
	      1u);
  init_symbol(&symbols[3u],
	      "CAN_FIRE_RL_tb_randomB_every_1",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomB_every_1,
	      1u);
  init_symbol(&symbols[4u], "CAN_FIRE_RL_tb_test", SYM_DEF, &DEF_CAN_FIRE_RL_tb_test, 1u);
  init_symbol(&symbols[5u], "RL_tb_randomA_every", SYM_RULE);
  init_symbol(&symbols[6u], "RL_tb_randomA_every_1", SYM_RULE);
  init_symbol(&symbols[7u], "RL_tb_randomB_every", SYM_RULE);
  init_symbol(&symbols[8u], "RL_tb_randomB_every_1", SYM_RULE);
  init_symbol(&symbols[9u], "RL_tb_test", SYM_RULE);
  init_symbol(&symbols[10u], "tb_cycle", SYM_MODULE, &INST_tb_cycle);
  init_symbol(&symbols[11u], "tb_randomA_ignore", SYM_MODULE, &INST_tb_randomA_ignore);
  init_symbol(&symbols[12u], "tb_randomA_initialized", SYM_MODULE, &INST_tb_randomA_initialized);
  init_symbol(&symbols[13u], "tb_randomA_zaz", SYM_MODULE, &INST_tb_randomA_zaz);
  init_symbol(&symbols[14u], "tb_randomB_ignore", SYM_MODULE, &INST_tb_randomB_ignore);
  init_symbol(&symbols[15u], "tb_randomB_initialized", SYM_MODULE, &INST_tb_randomB_initialized);
  init_symbol(&symbols[16u], "tb_randomB_zaz", SYM_MODULE, &INST_tb_randomB_zaz);
  init_symbol(&symbols[17u],
	      "WILL_FIRE_RL_tb_randomA_every",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomA_every,
	      1u);
  init_symbol(&symbols[18u],
	      "WILL_FIRE_RL_tb_randomA_every_1",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomA_every_1,
	      1u);
  init_symbol(&symbols[19u],
	      "WILL_FIRE_RL_tb_randomB_every",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomB_every,
	      1u);
  init_symbol(&symbols[20u],
	      "WILL_FIRE_RL_tb_randomB_every_1",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomB_every_1,
	      1u);
  init_symbol(&symbols[21u], "WILL_FIRE_RL_tb_test", SYM_DEF, &DEF_WILL_FIRE_RL_tb_test, 1u);
  init_symbol(&symbols[22u], "x__h955", SYM_DEF, &DEF_x__h955, 32u);
}


/* Rule actions */

void MOD_mkTbSignedVsUnsigned::RL_tb_randomA_every()
{
  tUInt8 DEF_new_value__h371;
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_v__h329 = rand32();
  DEF_new_value__h371 = (tUInt8)((tUInt8)255u & DEF_v__h329);
  INST_tb_randomA_zaz.METH_wset(DEF_new_value__h371);
}

void MOD_mkTbSignedVsUnsigned::RL_tb_randomA_every_1()
{
  DEF_x_wget__h264 = INST_tb_randomA_zaz.METH_wget();
  DEF_v__h403 = INST_tb_randomA_zaz.METH_whas() ? DEF_x_wget__h264 : (tUInt8)0u;
  INST_tb_randomA_ignore.METH_wset(DEF_v__h403);
}

void MOD_mkTbSignedVsUnsigned::RL_tb_randomB_every()
{
  tUInt8 DEF_new_value__h748;
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_v__h706 = rand32();
  DEF_new_value__h748 = (tUInt8)((tUInt8)255u & DEF_v__h706);
  INST_tb_randomB_zaz.METH_wset(DEF_new_value__h748);
}

void MOD_mkTbSignedVsUnsigned::RL_tb_randomB_every_1()
{
  DEF_x_wget__h649 = INST_tb_randomB_zaz.METH_wget();
  DEF_v__h779 = INST_tb_randomB_zaz.METH_whas() ? DEF_x_wget__h649 : (tUInt8)0u;
  INST_tb_randomB_ignore.METH_wset(DEF_v__h779);
}

void MOD_mkTbSignedVsUnsigned::RL_tb_test()
{
  tUInt8 DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d39;
  tUInt8 DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d46;
  tUInt8 DEF_signed_IF_tb_randomA_zaz_whas_THEN_tb_randomA_ETC___d40;
  tUInt8 DEF_signed_IF_tb_randomB_zaz_whas__2_THEN_tb_rand_ETC___d41;
  tUInt32 DEF_expected__h1174;
  tUInt32 DEF_signed_0_CONCAT_IF_tb_randomA_zaz_whas_THEN_t_ETC___d47;
  tUInt32 DEF_signed_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_ra_ETC___d42;
  tUInt8 DEF_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_za_ETC___d36;
  tUInt32 DEF_x__h1535;
  tUInt8 DEF_NOT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_zaz_ETC___d27;
  tUInt8 DEF_NOT_tb_cycle_5_EQ_128_7___d22;
  tUInt8 DEF_NOT_tb_cycle_5_EQ_0_6___d21;
  tUInt32 DEF_test__h1173;
  DEF_x__h955 = INST_tb_cycle.METH_read();
  DEF_x_wget__h649 = INST_tb_randomB_zaz.METH_wget();
  DEF_v__h779 = INST_tb_randomB_zaz.METH_whas() ? DEF_x_wget__h649 : (tUInt8)0u;
  DEF_x_wget__h264 = INST_tb_randomA_zaz.METH_wget();
  DEF_v__h403 = INST_tb_randomA_zaz.METH_whas() ? DEF_x_wget__h264 : (tUInt8)0u;
  DEF_test__h1173 = (tUInt32)(65535u & (primSignExt32(16u,
						      8u,
						      (tUInt8)(DEF_v__h403)) * primSignExt32(16u,
											     8u,
											     (tUInt8)(DEF_v__h779))));
  DEF_tb_cycle_5_EQ_128___d17 = DEF_x__h955 == 128u;
  DEF_tb_cycle_5_EQ_0___d16 = DEF_x__h955 == 0u;
  DEF_NOT_tb_cycle_5_EQ_0_6___d21 = !DEF_tb_cycle_5_EQ_0___d16;
  DEF_NOT_tb_cycle_5_EQ_128_7___d22 = !DEF_tb_cycle_5_EQ_128___d17;
  DEF_NOT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_zaz_ETC___d27 = !(DEF_v__h403 == (tUInt8)128u) && !(DEF_v__h779 == (tUInt8)128u);
  DEF_x__h1535 = DEF_x__h955 + 1u;
  DEF_signed_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_ra_ETC___d42 = DEF_test__h1173;
  DEF_expected__h1174 = (tUInt32)(65535u & ((65535u & ((((tUInt32)((tUInt8)0u)) << 8u) | (tUInt32)(DEF_v__h403))) * (65535u & ((((tUInt32)((tUInt8)0u)) << 8u) | (tUInt32)(DEF_v__h779)))));
  DEF_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_za_ETC___d36 = DEF_test__h1173 == DEF_expected__h1174;
  DEF_signed_0_CONCAT_IF_tb_randomA_zaz_whas_THEN_t_ETC___d47 = DEF_expected__h1174;
  DEF_signed_IF_tb_randomA_zaz_whas_THEN_tb_randomA_ETC___d40 = DEF_v__h403;
  DEF_signed_IF_tb_randomB_zaz_whas__2_THEN_tb_rand_ETC___d41 = DEF_v__h779;
  DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d46 = DEF_NOT_tb_cycle_5_EQ_0_6___d21 && (DEF_NOT_tb_cycle_5_EQ_128_7___d22 && (DEF_NOT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_zaz_ETC___d27 && !DEF_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_za_ETC___d36));
  DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d39 = DEF_NOT_tb_cycle_5_EQ_0_6___d21 && (DEF_NOT_tb_cycle_5_EQ_128_7___d22 && (DEF_NOT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_zaz_ETC___d27 && DEF_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_randomA_za_ETC___d36));
  if (DEF_tb_cycle_5_EQ_0___d16)
    INST_tb_randomA_initialized.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_tb_cycle_5_EQ_128___d17)
      dollar_display(sim_hdl, this, "s", &__str_literal_1);
  if (DEF_tb_cycle_5_EQ_0___d16)
    INST_tb_randomB_initialized.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_tb_cycle_5_EQ_128___d17)
      dollar_finish(sim_hdl, "32", 1u);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d39)
      dollar_display(sim_hdl, this, "s,32", &__str_literal_2, DEF_x__h955);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d39)
      dollar_display(sim_hdl,
		     this,
		     "s,-8,-8,-16",
		     &__str_literal_3,
		     DEF_signed_IF_tb_randomA_zaz_whas_THEN_tb_randomA_ETC___d40,
		     DEF_signed_IF_tb_randomB_zaz_whas__2_THEN_tb_rand_ETC___d41,
		     DEF_signed_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_ra_ETC___d42);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d39)
      dollar_display(sim_hdl,
		     this,
		     "s,8,8,16",
		     &__str_literal_4,
		     DEF_v__h403,
		     DEF_v__h779,
		     DEF_test__h1173);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d46)
      dollar_display(sim_hdl, this, "s", &__str_literal_5);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d46)
      dollar_display(sim_hdl,
		     this,
		     "s,-8,-8,-16,-16",
		     &__str_literal_6,
		     DEF_signed_IF_tb_randomA_zaz_whas_THEN_tb_randomA_ETC___d40,
		     DEF_signed_IF_tb_randomB_zaz_whas__2_THEN_tb_rand_ETC___d41,
		     DEF_signed_SEXT_IF_tb_randomA_zaz_whas_THEN_tb_ra_ETC___d42,
		     DEF_signed_0_CONCAT_IF_tb_randomA_zaz_whas_THEN_t_ETC___d47);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d46)
      dollar_display(sim_hdl,
		     this,
		     "s,8,8,16,16",
		     &__str_literal_7,
		     DEF_v__h403,
		     DEF_v__h779,
		     DEF_test__h1173,
		     DEF_expected__h1174);
    if (DEF_NOT_tb_cycle_5_EQ_0_6_1_AND_NOT_tb_cycle_5_EQ__ETC___d46)
      dollar_finish(sim_hdl, "32", 1u);
  }
  INST_tb_cycle.METH_write(DEF_x__h1535);
}


/* Methods */


/* Reset routines */

void MOD_mkTbSignedVsUnsigned::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_tb_randomB_initialized.reset_RST(ARG_rst_in);
  INST_tb_randomA_initialized.reset_RST(ARG_rst_in);
  INST_tb_cycle.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTbSignedVsUnsigned::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTbSignedVsUnsigned::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_tb_cycle.dump_state(indent + 2u);
  INST_tb_randomA_ignore.dump_state(indent + 2u);
  INST_tb_randomA_initialized.dump_state(indent + 2u);
  INST_tb_randomA_zaz.dump_state(indent + 2u);
  INST_tb_randomB_ignore.dump_state(indent + 2u);
  INST_tb_randomB_initialized.dump_state(indent + 2u);
  INST_tb_randomB_zaz.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTbSignedVsUnsigned::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 27u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomA_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomA_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomB_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomB_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_test", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomA_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomA_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomB_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomB_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_test", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "tb_cycle_5_EQ_0___d16", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "tb_cycle_5_EQ_128___d17", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h329", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h403", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h706", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h779", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h955", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_wget__h264", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_wget__h649", 8u);
  num = INST_tb_cycle.dump_VCD_defs(num);
  num = INST_tb_randomA_ignore.dump_VCD_defs(num);
  num = INST_tb_randomA_initialized.dump_VCD_defs(num);
  num = INST_tb_randomA_zaz.dump_VCD_defs(num);
  num = INST_tb_randomB_ignore.dump_VCD_defs(num);
  num = INST_tb_randomB_initialized.dump_VCD_defs(num);
  num = INST_tb_randomB_zaz.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTbSignedVsUnsigned::dump_VCD(tVCDDumpType dt,
					unsigned int levels,
					MOD_mkTbSignedVsUnsigned &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkTbSignedVsUnsigned::vcd_defs(tVCDDumpType dt, MOD_mkTbSignedVsUnsigned &backing)
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
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 8u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 8u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 8u);
    vcd_write_x(sim_hdl, num++, 8u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_tb_randomA_every) != DEF_CAN_FIRE_RL_tb_randomA_every)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_randomA_every, 1u);
	backing.DEF_CAN_FIRE_RL_tb_randomA_every = DEF_CAN_FIRE_RL_tb_randomA_every;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_tb_randomA_every_1) != DEF_CAN_FIRE_RL_tb_randomA_every_1)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_randomA_every_1, 1u);
	backing.DEF_CAN_FIRE_RL_tb_randomA_every_1 = DEF_CAN_FIRE_RL_tb_randomA_every_1;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_tb_randomB_every) != DEF_CAN_FIRE_RL_tb_randomB_every)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_randomB_every, 1u);
	backing.DEF_CAN_FIRE_RL_tb_randomB_every = DEF_CAN_FIRE_RL_tb_randomB_every;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_tb_randomB_every_1) != DEF_CAN_FIRE_RL_tb_randomB_every_1)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_randomB_every_1, 1u);
	backing.DEF_CAN_FIRE_RL_tb_randomB_every_1 = DEF_CAN_FIRE_RL_tb_randomB_every_1;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_tb_test) != DEF_CAN_FIRE_RL_tb_test)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_test, 1u);
	backing.DEF_CAN_FIRE_RL_tb_test = DEF_CAN_FIRE_RL_tb_test;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_randomA_every) != DEF_WILL_FIRE_RL_tb_randomA_every)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_randomA_every, 1u);
	backing.DEF_WILL_FIRE_RL_tb_randomA_every = DEF_WILL_FIRE_RL_tb_randomA_every;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_randomA_every_1) != DEF_WILL_FIRE_RL_tb_randomA_every_1)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_randomA_every_1, 1u);
	backing.DEF_WILL_FIRE_RL_tb_randomA_every_1 = DEF_WILL_FIRE_RL_tb_randomA_every_1;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_randomB_every) != DEF_WILL_FIRE_RL_tb_randomB_every)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_randomB_every, 1u);
	backing.DEF_WILL_FIRE_RL_tb_randomB_every = DEF_WILL_FIRE_RL_tb_randomB_every;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_randomB_every_1) != DEF_WILL_FIRE_RL_tb_randomB_every_1)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_randomB_every_1, 1u);
	backing.DEF_WILL_FIRE_RL_tb_randomB_every_1 = DEF_WILL_FIRE_RL_tb_randomB_every_1;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_test) != DEF_WILL_FIRE_RL_tb_test)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_test, 1u);
	backing.DEF_WILL_FIRE_RL_tb_test = DEF_WILL_FIRE_RL_tb_test;
      }
      ++num;
      if ((backing.DEF_tb_cycle_5_EQ_0___d16) != DEF_tb_cycle_5_EQ_0___d16)
      {
	vcd_write_val(sim_hdl, num, DEF_tb_cycle_5_EQ_0___d16, 1u);
	backing.DEF_tb_cycle_5_EQ_0___d16 = DEF_tb_cycle_5_EQ_0___d16;
      }
      ++num;
      if ((backing.DEF_tb_cycle_5_EQ_128___d17) != DEF_tb_cycle_5_EQ_128___d17)
      {
	vcd_write_val(sim_hdl, num, DEF_tb_cycle_5_EQ_128___d17, 1u);
	backing.DEF_tb_cycle_5_EQ_128___d17 = DEF_tb_cycle_5_EQ_128___d17;
      }
      ++num;
      if ((backing.DEF_v__h329) != DEF_v__h329)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h329, 32u);
	backing.DEF_v__h329 = DEF_v__h329;
      }
      ++num;
      if ((backing.DEF_v__h403) != DEF_v__h403)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h403, 8u);
	backing.DEF_v__h403 = DEF_v__h403;
      }
      ++num;
      if ((backing.DEF_v__h706) != DEF_v__h706)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h706, 32u);
	backing.DEF_v__h706 = DEF_v__h706;
      }
      ++num;
      if ((backing.DEF_v__h779) != DEF_v__h779)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h779, 8u);
	backing.DEF_v__h779 = DEF_v__h779;
      }
      ++num;
      if ((backing.DEF_x__h955) != DEF_x__h955)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h955, 32u);
	backing.DEF_x__h955 = DEF_x__h955;
      }
      ++num;
      if ((backing.DEF_x_wget__h264) != DEF_x_wget__h264)
      {
	vcd_write_val(sim_hdl, num, DEF_x_wget__h264, 8u);
	backing.DEF_x_wget__h264 = DEF_x_wget__h264;
      }
      ++num;
      if ((backing.DEF_x_wget__h649) != DEF_x_wget__h649)
      {
	vcd_write_val(sim_hdl, num, DEF_x_wget__h649, 8u);
	backing.DEF_x_wget__h649 = DEF_x_wget__h649;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomA_every, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomA_every = DEF_CAN_FIRE_RL_tb_randomA_every;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomA_every_1, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomA_every_1 = DEF_CAN_FIRE_RL_tb_randomA_every_1;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomB_every, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomB_every = DEF_CAN_FIRE_RL_tb_randomB_every;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomB_every_1, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomB_every_1 = DEF_CAN_FIRE_RL_tb_randomB_every_1;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_test, 1u);
      backing.DEF_CAN_FIRE_RL_tb_test = DEF_CAN_FIRE_RL_tb_test;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomA_every, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomA_every = DEF_WILL_FIRE_RL_tb_randomA_every;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomA_every_1, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomA_every_1 = DEF_WILL_FIRE_RL_tb_randomA_every_1;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomB_every, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomB_every = DEF_WILL_FIRE_RL_tb_randomB_every;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomB_every_1, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomB_every_1 = DEF_WILL_FIRE_RL_tb_randomB_every_1;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_test, 1u);
      backing.DEF_WILL_FIRE_RL_tb_test = DEF_WILL_FIRE_RL_tb_test;
      vcd_write_val(sim_hdl, num++, DEF_tb_cycle_5_EQ_0___d16, 1u);
      backing.DEF_tb_cycle_5_EQ_0___d16 = DEF_tb_cycle_5_EQ_0___d16;
      vcd_write_val(sim_hdl, num++, DEF_tb_cycle_5_EQ_128___d17, 1u);
      backing.DEF_tb_cycle_5_EQ_128___d17 = DEF_tb_cycle_5_EQ_128___d17;
      vcd_write_val(sim_hdl, num++, DEF_v__h329, 32u);
      backing.DEF_v__h329 = DEF_v__h329;
      vcd_write_val(sim_hdl, num++, DEF_v__h403, 8u);
      backing.DEF_v__h403 = DEF_v__h403;
      vcd_write_val(sim_hdl, num++, DEF_v__h706, 32u);
      backing.DEF_v__h706 = DEF_v__h706;
      vcd_write_val(sim_hdl, num++, DEF_v__h779, 8u);
      backing.DEF_v__h779 = DEF_v__h779;
      vcd_write_val(sim_hdl, num++, DEF_x__h955, 32u);
      backing.DEF_x__h955 = DEF_x__h955;
      vcd_write_val(sim_hdl, num++, DEF_x_wget__h264, 8u);
      backing.DEF_x_wget__h264 = DEF_x_wget__h264;
      vcd_write_val(sim_hdl, num++, DEF_x_wget__h649, 8u);
      backing.DEF_x_wget__h649 = DEF_x_wget__h649;
    }
}

void MOD_mkTbSignedVsUnsigned::vcd_prims(tVCDDumpType dt, MOD_mkTbSignedVsUnsigned &backing)
{
  INST_tb_cycle.dump_VCD(dt, backing.INST_tb_cycle);
  INST_tb_randomA_ignore.dump_VCD(dt, backing.INST_tb_randomA_ignore);
  INST_tb_randomA_initialized.dump_VCD(dt, backing.INST_tb_randomA_initialized);
  INST_tb_randomA_zaz.dump_VCD(dt, backing.INST_tb_randomA_zaz);
  INST_tb_randomB_ignore.dump_VCD(dt, backing.INST_tb_randomB_ignore);
  INST_tb_randomB_initialized.dump_VCD(dt, backing.INST_tb_randomB_initialized);
  INST_tb_randomB_zaz.dump_VCD(dt, backing.INST_tb_randomB_zaz);
}
