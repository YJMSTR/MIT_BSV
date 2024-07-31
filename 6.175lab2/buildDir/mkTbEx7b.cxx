/*
 * Generated by Bluespec Compiler, version 2024.01-20-g9a97f9d0 (build 9a97f9d0)
 * 
 * On Wed Jul 31 16:41:34 CST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkTbEx7b.h"
#include "imported_BDPI_functions.h"


/* String declarations */
static std::string const __str_literal_2("    if signed: %0d * %0d DUT gave %0d", 37u);
static std::string const __str_literal_5("    if signed: %0d * %0d DUT gave %0d instead of %0d",
					 52u);
static std::string const __str_literal_3("    if unsigned: %0d * %0d DUT gave %0d", 39u);
static std::string const __str_literal_6("    if unsigned: %0d * %0d DUT gave %0d instead of %0d",
					 54u);
static std::string const __str_literal_4("FAILED case %0d", 15u);
static std::string const __str_literal_8("FAILED due to cycle limit", 25u);
static std::string const __str_literal_7("PASSED %0d test cases in %0d cycles", 35u);
static std::string const __str_literal_1("PASSED case %0d", 15u);


/* Constructor */
MOD_mkTbEx7b::MOD_mkTbEx7b(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_tb_cycle(simHdl, "tb_cycle", this, 32u, 0u, (tUInt8)0u),
    INST_tb_feed_count(simHdl, "tb_feed_count", this, 32u, 0u, (tUInt8)0u),
    INST_tb_operands_fifo(simHdl, "tb_operands_fifo", this, 16u, 4u, (tUInt8)1u, 0u),
    INST_tb_randomA_ignore(simHdl, "tb_randomA_ignore", this, 8u, (tUInt8)0u),
    INST_tb_randomA_initialized(simHdl, "tb_randomA_initialized", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_tb_randomA_zaz(simHdl, "tb_randomA_zaz", this, 8u, (tUInt8)0u),
    INST_tb_randomB_ignore(simHdl, "tb_randomB_ignore", this, 8u, (tUInt8)0u),
    INST_tb_randomB_initialized(simHdl, "tb_randomB_initialized", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_tb_randomB_zaz(simHdl, "tb_randomB_zaz", this, 8u, (tUInt8)0u),
    INST_tb_read_count(simHdl, "tb_read_count", this, 32u, 0u, (tUInt8)0u),
    INST_test_folded_i(simHdl, "test_folded_i", this, 4u, (tUInt8)9u, (tUInt8)0u),
    INST_test_folded_m_neg(simHdl, "test_folded_m_neg", this, 17u),
    INST_test_folded_m_pos(simHdl, "test_folded_m_pos", this, 17u),
    INST_test_folded_p(simHdl, "test_folded_p", this, 17u),
    PORT_RST_N((tUInt8)1u),
    DEF_v__h1090(2863311530u),
    DEF_v__h713(2863311530u)
{
  symbol_count = 45u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTbEx7b::init_symbols_0()
{
  init_symbol(&symbols[0u], "_read__h135", SYM_DEF, &DEF__read__h135, 4u);
  init_symbol(&symbols[1u], "CAN_FIRE_RL_tb_feed", SYM_DEF, &DEF_CAN_FIRE_RL_tb_feed, 1u);
  init_symbol(&symbols[2u],
	      "CAN_FIRE_RL_tb_monitor_test",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_monitor_test,
	      1u);
  init_symbol(&symbols[3u],
	      "CAN_FIRE_RL_tb_randomA_every",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomA_every,
	      1u);
  init_symbol(&symbols[4u],
	      "CAN_FIRE_RL_tb_randomA_every_1",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomA_every_1,
	      1u);
  init_symbol(&symbols[5u],
	      "CAN_FIRE_RL_tb_randomB_every",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomB_every,
	      1u);
  init_symbol(&symbols[6u],
	      "CAN_FIRE_RL_tb_randomB_every_1",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_tb_randomB_every_1,
	      1u);
  init_symbol(&symbols[7u], "CAN_FIRE_RL_tb_read", SYM_DEF, &DEF_CAN_FIRE_RL_tb_read, 1u);
  init_symbol(&symbols[8u],
	      "CAN_FIRE_RL_test_folded_mul_step",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_test_folded_mul_step,
	      1u);
  init_symbol(&symbols[9u], "RL_tb_feed", SYM_RULE);
  init_symbol(&symbols[10u], "RL_tb_monitor_test", SYM_RULE);
  init_symbol(&symbols[11u], "RL_tb_randomA_every", SYM_RULE);
  init_symbol(&symbols[12u], "RL_tb_randomA_every_1", SYM_RULE);
  init_symbol(&symbols[13u], "RL_tb_randomB_every", SYM_RULE);
  init_symbol(&symbols[14u], "RL_tb_randomB_every_1", SYM_RULE);
  init_symbol(&symbols[15u], "RL_tb_read", SYM_RULE);
  init_symbol(&symbols[16u], "RL_test_folded_mul_step", SYM_RULE);
  init_symbol(&symbols[17u], "tb_cycle", SYM_MODULE, &INST_tb_cycle);
  init_symbol(&symbols[18u], "tb_feed_count", SYM_MODULE, &INST_tb_feed_count);
  init_symbol(&symbols[19u], "tb_operands_fifo", SYM_MODULE, &INST_tb_operands_fifo);
  init_symbol(&symbols[20u], "tb_randomA_ignore", SYM_MODULE, &INST_tb_randomA_ignore);
  init_symbol(&symbols[21u], "tb_randomA_initialized", SYM_MODULE, &INST_tb_randomA_initialized);
  init_symbol(&symbols[22u], "tb_randomA_zaz", SYM_MODULE, &INST_tb_randomA_zaz);
  init_symbol(&symbols[23u], "tb_randomB_ignore", SYM_MODULE, &INST_tb_randomB_ignore);
  init_symbol(&symbols[24u], "tb_randomB_initialized", SYM_MODULE, &INST_tb_randomB_initialized);
  init_symbol(&symbols[25u], "tb_randomB_zaz", SYM_MODULE, &INST_tb_randomB_zaz);
  init_symbol(&symbols[26u], "tb_read_count", SYM_MODULE, &INST_tb_read_count);
  init_symbol(&symbols[27u], "test_folded_i", SYM_MODULE, &INST_test_folded_i);
  init_symbol(&symbols[28u], "test_folded_m_neg", SYM_MODULE, &INST_test_folded_m_neg);
  init_symbol(&symbols[29u], "test_folded_m_pos", SYM_MODULE, &INST_test_folded_m_pos);
  init_symbol(&symbols[30u], "test_folded_p", SYM_MODULE, &INST_test_folded_p);
  init_symbol(&symbols[31u], "v__h1163", SYM_DEF, &DEF_v__h1163, 8u);
  init_symbol(&symbols[32u], "v__h787", SYM_DEF, &DEF_v__h787, 8u);
  init_symbol(&symbols[33u], "WILL_FIRE_RL_tb_feed", SYM_DEF, &DEF_WILL_FIRE_RL_tb_feed, 1u);
  init_symbol(&symbols[34u],
	      "WILL_FIRE_RL_tb_monitor_test",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_monitor_test,
	      1u);
  init_symbol(&symbols[35u],
	      "WILL_FIRE_RL_tb_randomA_every",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomA_every,
	      1u);
  init_symbol(&symbols[36u],
	      "WILL_FIRE_RL_tb_randomA_every_1",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomA_every_1,
	      1u);
  init_symbol(&symbols[37u],
	      "WILL_FIRE_RL_tb_randomB_every",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomB_every,
	      1u);
  init_symbol(&symbols[38u],
	      "WILL_FIRE_RL_tb_randomB_every_1",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_tb_randomB_every_1,
	      1u);
  init_symbol(&symbols[39u], "WILL_FIRE_RL_tb_read", SYM_DEF, &DEF_WILL_FIRE_RL_tb_read, 1u);
  init_symbol(&symbols[40u],
	      "WILL_FIRE_RL_test_folded_mul_step",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_test_folded_mul_step,
	      1u);
  init_symbol(&symbols[41u], "x__h1547", SYM_DEF, &DEF_x__h1547, 32u);
  init_symbol(&symbols[42u], "x__h2114", SYM_DEF, &DEF_x__h2114, 32u);
  init_symbol(&symbols[43u], "x_wget__h1033", SYM_DEF, &DEF_x_wget__h1033, 8u);
  init_symbol(&symbols[44u], "x_wget__h656", SYM_DEF, &DEF_x_wget__h656, 8u);
}


/* Rule actions */

void MOD_mkTbEx7b::RL_test_folded_mul_step()
{
  tUInt32 DEF_x__h168;
  tUInt32 DEF_cur_p___1__h229;
  tUInt32 DEF_a__h189;
  tUInt32 DEF_cur_p___1__h232;
  tUInt8 DEF_pr__h153;
  tUInt32 DEF__read__h44;
  tUInt32 DEF__read__h70;
  DEF_test_folded_p__h1660 = INST_test_folded_p.METH_read();
  DEF__read__h70 = INST_test_folded_m_pos.METH_read();
  DEF__read__h44 = INST_test_folded_m_neg.METH_read();
  DEF__read__h135 = INST_test_folded_i.METH_read();
  DEF_pr__h153 = (tUInt8)((tUInt8)3u & DEF_test_folded_p__h1660);
  DEF_cur_p___1__h232 = 131071u & (DEF_test_folded_p__h1660 + DEF__read__h44);
  DEF_cur_p___1__h229 = 131071u & (DEF_test_folded_p__h1660 + DEF__read__h70);
  switch (DEF_pr__h153) {
  case (tUInt8)1u:
    DEF_a__h189 = DEF_cur_p___1__h229;
    break;
  case (tUInt8)2u:
    DEF_a__h189 = DEF_cur_p___1__h232;
    break;
  default:
    DEF_a__h189 = DEF_test_folded_p__h1660;
  }
  DEF_x__h168 = primShiftRA32(17u, 17u, (tUInt32)(DEF_a__h189), 32u, 1u);
  DEF_x__h240 = (tUInt8)15u & (DEF__read__h135 + (tUInt8)1u);
  INST_test_folded_p.METH_write(DEF_x__h168);
  INST_test_folded_i.METH_write(DEF_x__h240);
}

void MOD_mkTbEx7b::RL_tb_randomA_every()
{
  tUInt8 DEF_new_value__h755;
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_v__h713 = rand32();
  DEF_new_value__h755 = (tUInt8)((tUInt8)255u & DEF_v__h713);
  INST_tb_randomA_zaz.METH_wset(DEF_new_value__h755);
}

void MOD_mkTbEx7b::RL_tb_randomA_every_1()
{
  DEF_x_wget__h656 = INST_tb_randomA_zaz.METH_wget();
  DEF_tb_randomA_zaz_whas____d19 = INST_tb_randomA_zaz.METH_whas();
  DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 = DEF_x_wget__h656;
  DEF_v__h787 = DEF_tb_randomA_zaz_whas____d19 ? DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 : (tUInt8)0u;
  INST_tb_randomA_ignore.METH_wset(DEF_v__h787);
}

void MOD_mkTbEx7b::RL_tb_randomB_every()
{
  tUInt8 DEF_new_value__h1132;
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_v__h1090 = rand32();
  DEF_new_value__h1132 = (tUInt8)((tUInt8)255u & DEF_v__h1090);
  INST_tb_randomB_zaz.METH_wset(DEF_new_value__h1132);
}

void MOD_mkTbEx7b::RL_tb_randomB_every_1()
{
  DEF_x_wget__h1033 = INST_tb_randomB_zaz.METH_wget();
  DEF_v__h1163 = INST_tb_randomB_zaz.METH_whas() ? DEF_x_wget__h1033 : (tUInt8)0u;
  INST_tb_randomB_ignore.METH_wset(DEF_v__h1163);
}

void MOD_mkTbEx7b::RL_tb_feed()
{
  tUInt32 DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d46;
  tUInt32 DEF_x__h1446;
  tUInt32 DEF_x__h1480;
  tUInt32 DEF_x__h1411;
  tUInt32 DEF_x__h1528;
  tUInt8 DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45;
  DEF_x__h1547 = INST_tb_feed_count.METH_read();
  DEF_x_wget__h1033 = INST_tb_randomB_zaz.METH_wget();
  DEF_x_wget__h656 = INST_tb_randomA_zaz.METH_wget();
  DEF_tb_randomA_zaz_whas____d19 = INST_tb_randomA_zaz.METH_whas();
  DEF_v__h1163 = INST_tb_randomB_zaz.METH_whas() ? DEF_x_wget__h1033 : (tUInt8)0u;
  DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 = DEF_x_wget__h656;
  DEF_v__h787 = DEF_tb_randomA_zaz_whas____d19 ? DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 : (tUInt8)0u;
  DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31 = DEF_v__h1163 == (tUInt8)128u;
  DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30 = DEF_v__h787 == (tUInt8)128u;
  DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45 = !DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30 && !DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31;
  DEF_x__h1528 = DEF_x__h1547 + 1u;
  DEF_x__h1411 = 131071u & (((((tUInt32)((tUInt8)0u)) << 9u) | (((tUInt32)(DEF_v__h1163)) << 1u)) | (tUInt32)((tUInt8)0u));
  DEF_x__h1446 = 131071u & (((tUInt32)(DEF_v__h787)) << 9u);
  DEF_x__h1480 = 131071u & (((tUInt32)(DEF_tb_randomA_zaz_whas____d19 ? (tUInt8)255u & -DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 : (tUInt8)0u)) << 9u);
  DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d46 = 65535u & ((((tUInt32)(DEF_v__h787)) << 8u) | (tUInt32)(DEF_v__h1163));
  if (DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45)
    INST_tb_operands_fifo.METH_enq(DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d46);
  if (DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45)
    INST_test_folded_p.METH_write(DEF_x__h1411);
  if (DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45)
    INST_test_folded_m_pos.METH_write(DEF_x__h1446);
  if (DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45)
    INST_test_folded_m_neg.METH_write(DEF_x__h1480);
  if (DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45)
    INST_test_folded_i.METH_write((tUInt8)0u);
  if (DEF_NOT_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_rando_ETC___d45)
    INST_tb_feed_count.METH_write(DEF_x__h1528);
}

void MOD_mkTbEx7b::RL_tb_read()
{
  tUInt8 DEF_NOT_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_ETC___d73;
  tUInt8 DEF_signed_tb_operands_fifo_first__2_BITS_7_TO_0_5___d71;
  tUInt8 DEF_signed_tb_operands_fifo_first__2_BITS_15_TO_8_3___d70;
  tUInt32 DEF_signed_IF_test_folded_i_EQ_8_7_THEN_test_fold_ETC___d72;
  tUInt32 DEF_signed_SEXT_tb_operands_fifo_first__2_BITS_15_ETC___d74;
  tUInt8 DEF_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_BIT_ETC___d69;
  tUInt32 DEF_x__h1990;
  tUInt32 DEF_y_avValue__h1638;
  tUInt32 DEF_tb_operands_fifo_first____d62;
  tUInt8 DEF_b__h1567;
  tUInt8 DEF_a__h1566;
  tUInt32 DEF_v__h1591;
  tUInt32 DEF_expected__h1665;
  DEF_x__h2114 = INST_tb_read_count.METH_read();
  DEF_test_folded_p__h1660 = INST_test_folded_p.METH_read();
  DEF_tb_operands_fifo_first____d62 = INST_tb_operands_fifo.METH_first();
  DEF_a__h1566 = (tUInt8)(DEF_tb_operands_fifo_first____d62 >> 8u);
  DEF_b__h1567 = (tUInt8)((tUInt8)255u & DEF_tb_operands_fifo_first____d62);
  DEF_expected__h1665 = (tUInt32)(65535u & (primSignExt32(16u,
							  8u,
							  (tUInt8)(DEF_a__h1566)) * primSignExt32(16u,
												  8u,
												  (tUInt8)(DEF_b__h1567))));
  DEF__read__h135 = INST_test_folded_i.METH_read();
  DEF_y_avValue__h1638 = (tUInt32)(DEF_test_folded_p__h1660 >> 1u);
  DEF_x__h1990 = DEF_x__h2114 + 1u;
  DEF_x__h240 = (tUInt8)15u & (DEF__read__h135 + (tUInt8)1u);
  DEF_signed_SEXT_tb_operands_fifo_first__2_BITS_15_ETC___d74 = DEF_expected__h1665;
  DEF_signed_tb_operands_fifo_first__2_BITS_15_TO_8_3___d70 = DEF_a__h1566;
  DEF_signed_tb_operands_fifo_first__2_BITS_7_TO_0_5___d71 = DEF_b__h1567;
  DEF_test_folded_i_EQ_8___d57 = DEF__read__h135 == (tUInt8)8u;
  DEF_v__h1591 = DEF_test_folded_i_EQ_8___d57 ? DEF_y_avValue__h1638 : 0u;
  DEF_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_BIT_ETC___d69 = DEF_v__h1591 == DEF_expected__h1665;
  DEF_signed_IF_test_folded_i_EQ_8_7_THEN_test_fold_ETC___d72 = DEF_v__h1591;
  DEF_NOT_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_ETC___d73 = !DEF_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_BIT_ETC___d69;
  INST_tb_operands_fifo.METH_deq();
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_BIT_ETC___d69)
      dollar_display(sim_hdl, this, "s,32", &__str_literal_1, DEF_x__h2114);
  INST_test_folded_i.METH_write(DEF_x__h240);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_BIT_ETC___d69)
      dollar_display(sim_hdl,
		     this,
		     "s,-8,-8,-16",
		     &__str_literal_2,
		     DEF_signed_tb_operands_fifo_first__2_BITS_15_TO_8_3___d70,
		     DEF_signed_tb_operands_fifo_first__2_BITS_7_TO_0_5___d71,
		     DEF_signed_IF_test_folded_i_EQ_8_7_THEN_test_fold_ETC___d72);
    if (DEF_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_BIT_ETC___d69)
      dollar_display(sim_hdl,
		     this,
		     "s,8,8,16",
		     &__str_literal_3,
		     DEF_a__h1566,
		     DEF_b__h1567,
		     DEF_v__h1591);
    if (DEF_NOT_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_ETC___d73)
      dollar_display(sim_hdl, this, "s,32", &__str_literal_4, DEF_x__h2114);
    if (DEF_NOT_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_ETC___d73)
      dollar_display(sim_hdl,
		     this,
		     "s,-8,-8,-16,-16",
		     &__str_literal_5,
		     DEF_signed_tb_operands_fifo_first__2_BITS_15_TO_8_3___d70,
		     DEF_signed_tb_operands_fifo_first__2_BITS_7_TO_0_5___d71,
		     DEF_signed_IF_test_folded_i_EQ_8_7_THEN_test_fold_ETC___d72,
		     DEF_signed_SEXT_tb_operands_fifo_first__2_BITS_15_ETC___d74);
    if (DEF_NOT_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_ETC___d73)
      dollar_display(sim_hdl,
		     this,
		     "s,8,8,16,16",
		     &__str_literal_6,
		     DEF_a__h1566,
		     DEF_b__h1567,
		     DEF_v__h1591,
		     DEF_expected__h1665);
    if (DEF_NOT_IF_test_folded_i_EQ_8_7_THEN_test_folded_p_ETC___d73)
      dollar_finish(sim_hdl, "32", 1u);
  }
  INST_tb_read_count.METH_write(DEF_x__h1990);
}

void MOD_mkTbEx7b::RL_tb_monitor_test()
{
  tUInt32 DEF_x__h2343;
  tUInt8 DEF_tb_cycle_6_EQ_0___d77;
  tUInt8 DEF_tb_cycle_6_EQ_16384___d78;
  tUInt32 DEF_x__h2347;
  DEF_x__h2114 = INST_tb_read_count.METH_read();
  DEF_x__h2347 = INST_tb_cycle.METH_read();
  DEF_tb_cycle_6_EQ_16384___d78 = DEF_x__h2347 == 16384u;
  DEF_tb_cycle_6_EQ_0___d77 = DEF_x__h2347 == 0u;
  DEF_tb_read_count_4_EQ_128___d55 = DEF_x__h2114 == 128u;
  DEF_x__h2343 = DEF_x__h2347 + 1u;
  if (DEF_tb_cycle_6_EQ_0___d77)
    INST_tb_randomA_initialized.METH_write((tUInt8)1u);
  if (DEF_tb_cycle_6_EQ_0___d77)
    INST_tb_randomB_initialized.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    if (DEF_tb_read_count_4_EQ_128___d55)
      dollar_display(sim_hdl, this, "s,32,32", &__str_literal_7, DEF_x__h2114, DEF_x__h2347);
    if (DEF_tb_read_count_4_EQ_128___d55)
      dollar_finish(sim_hdl, "32", 1u);
    if (DEF_tb_cycle_6_EQ_16384___d78)
      dollar_display(sim_hdl, this, "s", &__str_literal_8);
    if (DEF_tb_cycle_6_EQ_16384___d78)
      dollar_finish(sim_hdl, "32", 1u);
  }
  INST_tb_cycle.METH_write(DEF_x__h2343);
}


/* Methods */


/* Reset routines */

void MOD_mkTbEx7b::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_test_folded_i.reset_RST(ARG_rst_in);
  INST_tb_read_count.reset_RST(ARG_rst_in);
  INST_tb_randomB_initialized.reset_RST(ARG_rst_in);
  INST_tb_randomA_initialized.reset_RST(ARG_rst_in);
  INST_tb_operands_fifo.reset_RST(ARG_rst_in);
  INST_tb_feed_count.reset_RST(ARG_rst_in);
  INST_tb_cycle.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTbEx7b::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTbEx7b::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_tb_cycle.dump_state(indent + 2u);
  INST_tb_feed_count.dump_state(indent + 2u);
  INST_tb_operands_fifo.dump_state(indent + 2u);
  INST_tb_randomA_ignore.dump_state(indent + 2u);
  INST_tb_randomA_initialized.dump_state(indent + 2u);
  INST_tb_randomA_zaz.dump_state(indent + 2u);
  INST_tb_randomB_ignore.dump_state(indent + 2u);
  INST_tb_randomB_initialized.dump_state(indent + 2u);
  INST_tb_randomB_zaz.dump_state(indent + 2u);
  INST_tb_read_count.dump_state(indent + 2u);
  INST_test_folded_i.dump_state(indent + 2u);
  INST_test_folded_m_neg.dump_state(indent + 2u);
  INST_test_folded_m_pos.dump_state(indent + 2u);
  INST_test_folded_p.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTbEx7b::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 48u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_feed", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_monitor_test", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomA_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomA_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomB_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_randomB_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_tb_read", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_test_folded_mul_step", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_feed", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_monitor_test", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomA_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomA_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomB_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_randomB_every_1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_tb_read", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_test_folded_mul_step", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "_read__h135", 4u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "tb_randomA_zaz_whas____d19", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "tb_read_count_4_EQ_128___d55", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "test_folded_i_EQ_8___d57", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "test_folded_p__h1660", 17u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h1090", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h1163", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h713", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h787", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h1547", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h2114", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h240", 4u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_wget__h1033", 8u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x_wget__h656", 8u);
  num = INST_tb_cycle.dump_VCD_defs(num);
  num = INST_tb_feed_count.dump_VCD_defs(num);
  num = INST_tb_operands_fifo.dump_VCD_defs(num);
  num = INST_tb_randomA_ignore.dump_VCD_defs(num);
  num = INST_tb_randomA_initialized.dump_VCD_defs(num);
  num = INST_tb_randomA_zaz.dump_VCD_defs(num);
  num = INST_tb_randomB_ignore.dump_VCD_defs(num);
  num = INST_tb_randomB_initialized.dump_VCD_defs(num);
  num = INST_tb_randomB_zaz.dump_VCD_defs(num);
  num = INST_tb_read_count.dump_VCD_defs(num);
  num = INST_test_folded_i.dump_VCD_defs(num);
  num = INST_test_folded_m_neg.dump_VCD_defs(num);
  num = INST_test_folded_m_pos.dump_VCD_defs(num);
  num = INST_test_folded_p.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTbEx7b::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTbEx7b &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkTbEx7b::vcd_defs(tVCDDumpType dt, MOD_mkTbEx7b &backing)
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
    vcd_write_x(sim_hdl, num++, 8u);
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
    vcd_write_x(sim_hdl, num++, 4u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 17u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 8u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 8u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 4u);
    vcd_write_x(sim_hdl, num++, 8u);
    vcd_write_x(sim_hdl, num++, 8u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_tb_feed) != DEF_CAN_FIRE_RL_tb_feed)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_feed, 1u);
	backing.DEF_CAN_FIRE_RL_tb_feed = DEF_CAN_FIRE_RL_tb_feed;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_tb_monitor_test) != DEF_CAN_FIRE_RL_tb_monitor_test)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_monitor_test, 1u);
	backing.DEF_CAN_FIRE_RL_tb_monitor_test = DEF_CAN_FIRE_RL_tb_monitor_test;
      }
      ++num;
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
      if ((backing.DEF_CAN_FIRE_RL_tb_read) != DEF_CAN_FIRE_RL_tb_read)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_tb_read, 1u);
	backing.DEF_CAN_FIRE_RL_tb_read = DEF_CAN_FIRE_RL_tb_read;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_test_folded_mul_step) != DEF_CAN_FIRE_RL_test_folded_mul_step)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_test_folded_mul_step, 1u);
	backing.DEF_CAN_FIRE_RL_test_folded_mul_step = DEF_CAN_FIRE_RL_test_folded_mul_step;
      }
      ++num;
      if ((backing.DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30) != DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30)
      {
	vcd_write_val(sim_hdl, num, DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30, 1u);
	backing.DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30 = DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30;
      }
      ++num;
      if ((backing.DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21) != DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21)
      {
	vcd_write_val(sim_hdl, num, DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21, 8u);
	backing.DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 = DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21;
      }
      ++num;
      if ((backing.DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31) != DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31)
      {
	vcd_write_val(sim_hdl, num, DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31, 1u);
	backing.DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31 = DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_feed) != DEF_WILL_FIRE_RL_tb_feed)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_feed, 1u);
	backing.DEF_WILL_FIRE_RL_tb_feed = DEF_WILL_FIRE_RL_tb_feed;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_tb_monitor_test) != DEF_WILL_FIRE_RL_tb_monitor_test)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_monitor_test, 1u);
	backing.DEF_WILL_FIRE_RL_tb_monitor_test = DEF_WILL_FIRE_RL_tb_monitor_test;
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
      if ((backing.DEF_WILL_FIRE_RL_tb_read) != DEF_WILL_FIRE_RL_tb_read)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_tb_read, 1u);
	backing.DEF_WILL_FIRE_RL_tb_read = DEF_WILL_FIRE_RL_tb_read;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_test_folded_mul_step) != DEF_WILL_FIRE_RL_test_folded_mul_step)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_test_folded_mul_step, 1u);
	backing.DEF_WILL_FIRE_RL_test_folded_mul_step = DEF_WILL_FIRE_RL_test_folded_mul_step;
      }
      ++num;
      if ((backing.DEF__read__h135) != DEF__read__h135)
      {
	vcd_write_val(sim_hdl, num, DEF__read__h135, 4u);
	backing.DEF__read__h135 = DEF__read__h135;
      }
      ++num;
      if ((backing.DEF_tb_randomA_zaz_whas____d19) != DEF_tb_randomA_zaz_whas____d19)
      {
	vcd_write_val(sim_hdl, num, DEF_tb_randomA_zaz_whas____d19, 1u);
	backing.DEF_tb_randomA_zaz_whas____d19 = DEF_tb_randomA_zaz_whas____d19;
      }
      ++num;
      if ((backing.DEF_tb_read_count_4_EQ_128___d55) != DEF_tb_read_count_4_EQ_128___d55)
      {
	vcd_write_val(sim_hdl, num, DEF_tb_read_count_4_EQ_128___d55, 1u);
	backing.DEF_tb_read_count_4_EQ_128___d55 = DEF_tb_read_count_4_EQ_128___d55;
      }
      ++num;
      if ((backing.DEF_test_folded_i_EQ_8___d57) != DEF_test_folded_i_EQ_8___d57)
      {
	vcd_write_val(sim_hdl, num, DEF_test_folded_i_EQ_8___d57, 1u);
	backing.DEF_test_folded_i_EQ_8___d57 = DEF_test_folded_i_EQ_8___d57;
      }
      ++num;
      if ((backing.DEF_test_folded_p__h1660) != DEF_test_folded_p__h1660)
      {
	vcd_write_val(sim_hdl, num, DEF_test_folded_p__h1660, 17u);
	backing.DEF_test_folded_p__h1660 = DEF_test_folded_p__h1660;
      }
      ++num;
      if ((backing.DEF_v__h1090) != DEF_v__h1090)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h1090, 32u);
	backing.DEF_v__h1090 = DEF_v__h1090;
      }
      ++num;
      if ((backing.DEF_v__h1163) != DEF_v__h1163)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h1163, 8u);
	backing.DEF_v__h1163 = DEF_v__h1163;
      }
      ++num;
      if ((backing.DEF_v__h713) != DEF_v__h713)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h713, 32u);
	backing.DEF_v__h713 = DEF_v__h713;
      }
      ++num;
      if ((backing.DEF_v__h787) != DEF_v__h787)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h787, 8u);
	backing.DEF_v__h787 = DEF_v__h787;
      }
      ++num;
      if ((backing.DEF_x__h1547) != DEF_x__h1547)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h1547, 32u);
	backing.DEF_x__h1547 = DEF_x__h1547;
      }
      ++num;
      if ((backing.DEF_x__h2114) != DEF_x__h2114)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h2114, 32u);
	backing.DEF_x__h2114 = DEF_x__h2114;
      }
      ++num;
      if ((backing.DEF_x__h240) != DEF_x__h240)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h240, 4u);
	backing.DEF_x__h240 = DEF_x__h240;
      }
      ++num;
      if ((backing.DEF_x_wget__h1033) != DEF_x_wget__h1033)
      {
	vcd_write_val(sim_hdl, num, DEF_x_wget__h1033, 8u);
	backing.DEF_x_wget__h1033 = DEF_x_wget__h1033;
      }
      ++num;
      if ((backing.DEF_x_wget__h656) != DEF_x_wget__h656)
      {
	vcd_write_val(sim_hdl, num, DEF_x_wget__h656, 8u);
	backing.DEF_x_wget__h656 = DEF_x_wget__h656;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_feed, 1u);
      backing.DEF_CAN_FIRE_RL_tb_feed = DEF_CAN_FIRE_RL_tb_feed;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_monitor_test, 1u);
      backing.DEF_CAN_FIRE_RL_tb_monitor_test = DEF_CAN_FIRE_RL_tb_monitor_test;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomA_every, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomA_every = DEF_CAN_FIRE_RL_tb_randomA_every;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomA_every_1, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomA_every_1 = DEF_CAN_FIRE_RL_tb_randomA_every_1;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomB_every, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomB_every = DEF_CAN_FIRE_RL_tb_randomB_every;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_randomB_every_1, 1u);
      backing.DEF_CAN_FIRE_RL_tb_randomB_every_1 = DEF_CAN_FIRE_RL_tb_randomB_every_1;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_tb_read, 1u);
      backing.DEF_CAN_FIRE_RL_tb_read = DEF_CAN_FIRE_RL_tb_read;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_test_folded_mul_step, 1u);
      backing.DEF_CAN_FIRE_RL_test_folded_mul_step = DEF_CAN_FIRE_RL_test_folded_mul_step;
      vcd_write_val(sim_hdl, num++, DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30, 1u);
      backing.DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30 = DEF_IF_tb_randomA_zaz_whas__9_THEN_IF_tb_randomA_z_ETC___d30;
      vcd_write_val(sim_hdl, num++, DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21, 8u);
      backing.DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21 = DEF_IF_tb_randomA_zaz_whas__9_THEN_tb_randomA_zaz__ETC___d21;
      vcd_write_val(sim_hdl, num++, DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31, 1u);
      backing.DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31 = DEF_IF_tb_randomB_zaz_whas__7_THEN_tb_randomB_zaz__ETC___d31;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_feed, 1u);
      backing.DEF_WILL_FIRE_RL_tb_feed = DEF_WILL_FIRE_RL_tb_feed;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_monitor_test, 1u);
      backing.DEF_WILL_FIRE_RL_tb_monitor_test = DEF_WILL_FIRE_RL_tb_monitor_test;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomA_every, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomA_every = DEF_WILL_FIRE_RL_tb_randomA_every;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomA_every_1, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomA_every_1 = DEF_WILL_FIRE_RL_tb_randomA_every_1;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomB_every, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomB_every = DEF_WILL_FIRE_RL_tb_randomB_every;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_randomB_every_1, 1u);
      backing.DEF_WILL_FIRE_RL_tb_randomB_every_1 = DEF_WILL_FIRE_RL_tb_randomB_every_1;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_tb_read, 1u);
      backing.DEF_WILL_FIRE_RL_tb_read = DEF_WILL_FIRE_RL_tb_read;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_test_folded_mul_step, 1u);
      backing.DEF_WILL_FIRE_RL_test_folded_mul_step = DEF_WILL_FIRE_RL_test_folded_mul_step;
      vcd_write_val(sim_hdl, num++, DEF__read__h135, 4u);
      backing.DEF__read__h135 = DEF__read__h135;
      vcd_write_val(sim_hdl, num++, DEF_tb_randomA_zaz_whas____d19, 1u);
      backing.DEF_tb_randomA_zaz_whas____d19 = DEF_tb_randomA_zaz_whas____d19;
      vcd_write_val(sim_hdl, num++, DEF_tb_read_count_4_EQ_128___d55, 1u);
      backing.DEF_tb_read_count_4_EQ_128___d55 = DEF_tb_read_count_4_EQ_128___d55;
      vcd_write_val(sim_hdl, num++, DEF_test_folded_i_EQ_8___d57, 1u);
      backing.DEF_test_folded_i_EQ_8___d57 = DEF_test_folded_i_EQ_8___d57;
      vcd_write_val(sim_hdl, num++, DEF_test_folded_p__h1660, 17u);
      backing.DEF_test_folded_p__h1660 = DEF_test_folded_p__h1660;
      vcd_write_val(sim_hdl, num++, DEF_v__h1090, 32u);
      backing.DEF_v__h1090 = DEF_v__h1090;
      vcd_write_val(sim_hdl, num++, DEF_v__h1163, 8u);
      backing.DEF_v__h1163 = DEF_v__h1163;
      vcd_write_val(sim_hdl, num++, DEF_v__h713, 32u);
      backing.DEF_v__h713 = DEF_v__h713;
      vcd_write_val(sim_hdl, num++, DEF_v__h787, 8u);
      backing.DEF_v__h787 = DEF_v__h787;
      vcd_write_val(sim_hdl, num++, DEF_x__h1547, 32u);
      backing.DEF_x__h1547 = DEF_x__h1547;
      vcd_write_val(sim_hdl, num++, DEF_x__h2114, 32u);
      backing.DEF_x__h2114 = DEF_x__h2114;
      vcd_write_val(sim_hdl, num++, DEF_x__h240, 4u);
      backing.DEF_x__h240 = DEF_x__h240;
      vcd_write_val(sim_hdl, num++, DEF_x_wget__h1033, 8u);
      backing.DEF_x_wget__h1033 = DEF_x_wget__h1033;
      vcd_write_val(sim_hdl, num++, DEF_x_wget__h656, 8u);
      backing.DEF_x_wget__h656 = DEF_x_wget__h656;
    }
}

void MOD_mkTbEx7b::vcd_prims(tVCDDumpType dt, MOD_mkTbEx7b &backing)
{
  INST_tb_cycle.dump_VCD(dt, backing.INST_tb_cycle);
  INST_tb_feed_count.dump_VCD(dt, backing.INST_tb_feed_count);
  INST_tb_operands_fifo.dump_VCD(dt, backing.INST_tb_operands_fifo);
  INST_tb_randomA_ignore.dump_VCD(dt, backing.INST_tb_randomA_ignore);
  INST_tb_randomA_initialized.dump_VCD(dt, backing.INST_tb_randomA_initialized);
  INST_tb_randomA_zaz.dump_VCD(dt, backing.INST_tb_randomA_zaz);
  INST_tb_randomB_ignore.dump_VCD(dt, backing.INST_tb_randomB_ignore);
  INST_tb_randomB_initialized.dump_VCD(dt, backing.INST_tb_randomB_initialized);
  INST_tb_randomB_zaz.dump_VCD(dt, backing.INST_tb_randomB_zaz);
  INST_tb_read_count.dump_VCD(dt, backing.INST_tb_read_count);
  INST_test_folded_i.dump_VCD(dt, backing.INST_test_folded_i);
  INST_test_folded_m_neg.dump_VCD(dt, backing.INST_test_folded_m_neg);
  INST_test_folded_m_pos.dump_VCD(dt, backing.INST_test_folded_m_pos);
  INST_test_folded_p.dump_VCD(dt, backing.INST_test_folded_p);
}
