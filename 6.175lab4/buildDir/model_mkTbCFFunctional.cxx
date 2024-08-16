/*
 * Generated by Bluespec Compiler, version 2024.01-20-g9a97f9d0 (build 9a97f9d0)
 * 
 * On Fri Aug 16 18:13:33 CST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTbCFFunctional.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTbCFFunctional::MODEL_mkTbCFFunctional()
{
  mkTbCFFunctional_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTbCFFunctional()
{
  MODEL_mkTbCFFunctional *model = new MODEL_mkTbCFFunctional();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTbCFFunctional &INST_top = *((MOD_mkTbCFFunctional *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_m_randomA_initialized__h13932;
	 tUInt8 DEF_INST_top_DEF_m_randomB_initialized__h14308;
	 tUInt8 DEF_INST_top_DEF_m_randomC_initialized__h14682;
	 tUInt8 DEF_INST_top_DEF_m_randomData_initialized__h15059;
	 tUInt8 DEF_INST_top_DEF_m_ref_fifo_ref_noncf_fifo_i_notEmpty____d145;
	 INST_top.DEF_CAN_FIRE_RL_fifo_canocalize = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_fifo_canocalize = INST_top.DEF_CAN_FIRE_RL_fifo_canocalize;
	 INST_top.DEF_CAN_FIRE_RL_fifo_clear_ehr_canonicalize = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_fifo_clear_ehr_canonicalize = INST_top.DEF_CAN_FIRE_RL_fifo_clear_ehr_canonicalize;
	 INST_top.DEF_CAN_FIRE_RL_fifo_deq_ehr_canonicalize = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_fifo_deq_ehr_canonicalize = INST_top.DEF_CAN_FIRE_RL_fifo_deq_ehr_canonicalize;
	 INST_top.DEF_CAN_FIRE_RL_fifo_enq_ehr_canonicalize = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_fifo_enq_ehr_canonicalize = INST_top.DEF_CAN_FIRE_RL_fifo_enq_ehr_canonicalize;
	 INST_top.DEF_CAN_FIRE_RL_m_check_fifos_first = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_check_fifos_first = INST_top.DEF_CAN_FIRE_RL_m_check_fifos_first;
	 INST_top.DEF_CAN_FIRE_RL_m_check_fifos_not_empty = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_check_fifos_not_empty = INST_top.DEF_CAN_FIRE_RL_m_check_fifos_not_empty;
	 INST_top.DEF_CAN_FIRE_RL_m_check_fifos_not_full = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_check_fifos_not_full = INST_top.DEF_CAN_FIRE_RL_m_check_fifos_not_full;
	 INST_top.DEF_CAN_FIRE_RL_m_cycle_inc = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_cycle_inc = INST_top.DEF_CAN_FIRE_RL_m_cycle_inc;
	 INST_top.DEF_CAN_FIRE_RL_m_cycle_print = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_cycle_print = INST_top.DEF_CAN_FIRE_RL_m_cycle_print;
	 INST_top.DEF_x__h17024 = INST_top.INST_m_cycle.METH_read();
	 INST_top.DEF_CAN_FIRE_RL_m_init = (INST_top.DEF_x__h17024) == 0u;
	 INST_top.DEF_WILL_FIRE_RL_m_init = INST_top.DEF_CAN_FIRE_RL_m_init;
	 INST_top.DEF_CAN_FIRE_RL_m_randomA_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_randomA_every = INST_top.DEF_CAN_FIRE_RL_m_randomA_every;
	 DEF_INST_top_DEF_m_randomA_initialized__h13932 = INST_top.INST_m_randomA_initialized.METH_read();
	 INST_top.DEF_CAN_FIRE_RL_m_randomA_every_1 = !DEF_INST_top_DEF_m_randomA_initialized__h13932;
	 INST_top.DEF_WILL_FIRE_RL_m_randomA_every_1 = INST_top.DEF_CAN_FIRE_RL_m_randomA_every_1;
	 INST_top.DEF_CAN_FIRE_RL_m_randomB_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_randomB_every = INST_top.DEF_CAN_FIRE_RL_m_randomB_every;
	 DEF_INST_top_DEF_m_randomB_initialized__h14308 = INST_top.INST_m_randomB_initialized.METH_read();
	 INST_top.DEF_CAN_FIRE_RL_m_randomB_every_1 = !DEF_INST_top_DEF_m_randomB_initialized__h14308;
	 INST_top.DEF_WILL_FIRE_RL_m_randomB_every_1 = INST_top.DEF_CAN_FIRE_RL_m_randomB_every_1;
	 DEF_INST_top_DEF_m_randomC_initialized__h14682 = INST_top.INST_m_randomC_initialized.METH_read();
	 INST_top.DEF_CAN_FIRE_RL_m_randomC_every_1 = !DEF_INST_top_DEF_m_randomC_initialized__h14682;
	 INST_top.DEF_WILL_FIRE_RL_m_randomC_every_1 = INST_top.DEF_CAN_FIRE_RL_m_randomC_every_1;
	 INST_top.DEF_CAN_FIRE_RL_m_randomC_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_randomC_every = INST_top.DEF_CAN_FIRE_RL_m_randomC_every;
	 INST_top.DEF_CAN_FIRE_RL_m_randomData_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_randomData_every = INST_top.DEF_CAN_FIRE_RL_m_randomData_every;
	 DEF_INST_top_DEF_m_randomData_initialized__h15059 = INST_top.INST_m_randomData_initialized.METH_read();
	 INST_top.DEF_CAN_FIRE_RL_m_randomData_every_1 = !DEF_INST_top_DEF_m_randomData_initialized__h15059;
	 INST_top.DEF_WILL_FIRE_RL_m_randomData_every_1 = INST_top.DEF_CAN_FIRE_RL_m_randomData_every_1;
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize;
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_1 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_1 = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_1;
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_2 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_2 = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_2;
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_3 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_3 = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_3;
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_pre_canonicalize_one = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_pre_canonicalize_one = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_pre_canonicalize_one;
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_4 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_4 = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_canonicalize_4;
	 DEF_INST_top_DEF_m_ref_fifo_ref_noncf_fifo_i_notEmpty____d145 = INST_top.INST_m_ref_fifo_ref_noncf_fifo.METH_i_notEmpty();
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_pre_canonicalize_two = DEF_INST_top_DEF_m_ref_fifo_ref_noncf_fifo_i_notEmpty____d145;
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_pre_canonicalize_two = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_pre_canonicalize_two;
	 INST_top.DEF_x__h16877 = INST_top.INST_m_input_count.METH_read();
	 INST_top.DEF_m_input_count_24_EQ_1024___d262 = (INST_top.DEF_x__h16877) == 1024u;
	 INST_top.DEF_CAN_FIRE_RL_m_stop_tb = INST_top.DEF_m_input_count_24_EQ_1024___d262 || (INST_top.DEF_x__h17024) == 4096u;
	 INST_top.DEF_WILL_FIRE_RL_m_stop_tb = INST_top.DEF_CAN_FIRE_RL_m_stop_tb;
	 if (INST_top.DEF_WILL_FIRE_RL_m_cycle_print)
	   INST_top.RL_m_cycle_print();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_pre_canonicalize_one)
	   INST_top.RL_m_ref_fifo_pre_canonicalize_one();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_pre_canonicalize_two)
	   INST_top.RL_m_ref_fifo_pre_canonicalize_two();
	 if (INST_top.DEF_WILL_FIRE_RL_m_stop_tb)
	   INST_top.RL_m_stop_tb();
	 if (INST_top.DEF_WILL_FIRE_RL_m_check_fifos_not_full)
	   INST_top.RL_m_check_fifos_not_full();
	 if (INST_top.DEF_WILL_FIRE_RL_m_check_fifos_not_empty)
	   INST_top.RL_m_check_fifos_not_empty();
	 if (INST_top.DEF_WILL_FIRE_RL_m_check_fifos_first)
	   INST_top.RL_m_check_fifos_first();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomA_every)
	   INST_top.RL_m_randomA_every();
	 INST_top.DEF_fifo_full__h3990 = INST_top.INST_fifo_full.METH_read();
	 INST_top.DEF_x_wget__h13808 = INST_top.INST_m_randomA_zaz.METH_wget();
	 INST_top.DEF_m_ref_fifo_ehrReg_3__h10140 = INST_top.INST_m_ref_fifo_ehrReg_3.METH_read();
	 INST_top.DEF_v__h13938 = INST_top.INST_m_randomA_zaz.METH_whas() ? INST_top.DEF_x_wget__h13808 : (tUInt8)0u;
	 INST_top.DEF_IF_m_ref_fifo_wires_0_3_whas__31_THEN_m_ref_fi_ETC___d134 = INST_top.INST_m_ref_fifo_wires_0_3.METH_whas() ? INST_top.INST_m_ref_fifo_wires_0_3.METH_wget() : INST_top.DEF_m_ref_fifo_ehrReg_3__h10140;
	 INST_top.DEF_IF_m_randomA_zaz_whas__90_THEN_m_randomA_zaz_w_ETC___d216 = (INST_top.DEF_v__h13938) == (tUInt8)0u;
	 INST_top.DEF_NOT_m_ref_fifo_virtual_reg_1_3_read__17_18_AND_ETC___d219 = !INST_top.INST_m_ref_fifo_virtual_reg_1_3.METH_read() && INST_top.DEF_IF_m_ref_fifo_wires_0_3_whas__31_THEN_m_ref_fi_ETC___d134;
	 INST_top.DEF_NOT_fifo_full_4___d35 = !(INST_top.DEF_fifo_full__h3990);
	 INST_top.DEF_CAN_FIRE_RL_m_feed_inputs = (DEF_INST_top_DEF_m_randomA_initialized__h13932 && (INST_top.DEF_IF_m_randomA_zaz_whas__90_THEN_m_randomA_zaz_w_ETC___d216 || (INST_top.DEF_NOT_fifo_full_4___d35 && (DEF_INST_top_DEF_m_randomData_initialized__h15059 && INST_top.DEF_NOT_m_ref_fifo_virtual_reg_1_3_read__17_18_AND_ETC___d219)))) && (INST_top.DEF_x__h16877) < 1024u;
	 INST_top.DEF_WILL_FIRE_RL_m_feed_inputs = INST_top.DEF_CAN_FIRE_RL_m_feed_inputs;
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomA_every_1)
	   INST_top.RL_m_randomA_every_1();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomB_every)
	   INST_top.RL_m_randomB_every();
	 INST_top.DEF_fifo_empty__h4604 = INST_top.INST_fifo_empty.METH_read();
	 INST_top.DEF_x_wget__h14184 = INST_top.INST_m_randomB_zaz.METH_wget();
	 INST_top.DEF_m_ref_fifo_ehrReg_4__h10969 = INST_top.INST_m_ref_fifo_ehrReg_4.METH_read();
	 INST_top.DEF_v__h14314 = INST_top.INST_m_randomB_zaz.METH_whas() ? INST_top.DEF_x_wget__h14184 : (tUInt8)0u;
	 INST_top.DEF_IF_m_ref_fifo_wires_0_4_whas__38_THEN_m_ref_fi_ETC___d141 = INST_top.INST_m_ref_fifo_wires_0_4.METH_whas() ? INST_top.INST_m_ref_fifo_wires_0_4.METH_wget() : INST_top.DEF_m_ref_fifo_ehrReg_4__h10969;
	 INST_top.DEF_IF_m_randomB_zaz_whas__97_THEN_m_randomB_zaz_w_ETC___d230 = (INST_top.DEF_v__h14314) == (tUInt8)0u;
	 INST_top.DEF_NOT_m_ref_fifo_virtual_reg_1_4_read__31_32_AND_ETC___d233 = !INST_top.INST_m_ref_fifo_virtual_reg_1_4.METH_read() && INST_top.DEF_IF_m_ref_fifo_wires_0_4_whas__38_THEN_m_ref_fi_ETC___d141;
	 INST_top.DEF_NOT_fifo_empty_9___d50 = !(INST_top.DEF_fifo_empty__h4604);
	 INST_top.DEF_CAN_FIRE_RL_m_check_outputs = DEF_INST_top_DEF_m_randomB_initialized__h14308 && (INST_top.DEF_IF_m_randomB_zaz_whas__97_THEN_m_randomB_zaz_w_ETC___d230 || (INST_top.DEF_NOT_fifo_empty_9___d50 && INST_top.DEF_NOT_m_ref_fifo_virtual_reg_1_4_read__31_32_AND_ETC___d233));
	 INST_top.DEF_WILL_FIRE_RL_m_check_outputs = INST_top.DEF_CAN_FIRE_RL_m_check_outputs;
	 if (INST_top.DEF_WILL_FIRE_RL_m_check_outputs)
	   INST_top.RL_m_check_outputs();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomB_every_1)
	   INST_top.RL_m_randomB_every_1();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomC_every)
	   INST_top.RL_m_randomC_every();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomC_every_1)
	   INST_top.RL_m_randomC_every_1();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomData_every)
	   INST_top.RL_m_randomData_every();
	 if (INST_top.DEF_WILL_FIRE_RL_m_feed_inputs)
	   INST_top.RL_m_feed_inputs();
	 INST_top.DEF_m_ref_fifo_virtual_reg_2_read____d147 = INST_top.INST_m_ref_fifo_virtual_reg_2.METH_read();
	 INST_top.DEF_m_ref_fifo_virtual_reg_1_read____d148 = INST_top.INST_m_ref_fifo_virtual_reg_1.METH_read();
	 INST_top.DEF_m_ref_fifo_wires_0_wget____d107 = INST_top.INST_m_ref_fifo_wires_0.METH_wget();
	 INST_top.DEF_m_ref_fifo_wires_0_1_wget____d117 = INST_top.INST_m_ref_fifo_wires_0_1.METH_wget();
	 INST_top.DEF_m_ref_fifo_ehrReg___d108 = INST_top.INST_m_ref_fifo_ehrReg.METH_read();
	 INST_top.DEF_m_ref_fifo_ehrReg_1___d118 = INST_top.INST_m_ref_fifo_ehrReg_1.METH_read();
	 INST_top.DEF_m_ref_fifo_virtual_reg_2_1_read____d158 = INST_top.INST_m_ref_fifo_virtual_reg_2_1.METH_read();
	 INST_top.DEF_m_ref_fifo_virtual_reg_1_1_read____d159 = INST_top.INST_m_ref_fifo_virtual_reg_1_1.METH_read();
	 INST_top.DEF_m_ref_fifo_wires_0_1_whas____d116 = INST_top.INST_m_ref_fifo_wires_0_1.METH_whas();
	 INST_top.DEF_m_ref_fifo_wires_0_whas____d106 = INST_top.INST_m_ref_fifo_wires_0.METH_whas();
	 INST_top.DEF_m_ref_fifo_ehrReg_08_BIT_8___d151 = (tUInt8)((INST_top.DEF_m_ref_fifo_ehrReg___d108) >> 8u);
	 INST_top.DEF_m_ref_fifo_wires_0_wget__07_BIT_8___d149 = (tUInt8)((INST_top.DEF_m_ref_fifo_wires_0_wget____d107) >> 8u);
	 INST_top.DEF_m_ref_fifo_ehrReg_1_18_BIT_1___d162 = (tUInt8)((INST_top.DEF_m_ref_fifo_ehrReg_1___d118) >> 1u);
	 INST_top.DEF_m_ref_fifo_wires_0_1_wget__17_BIT_1___d160 = (tUInt8)((INST_top.DEF_m_ref_fifo_wires_0_1_wget____d117) >> 1u);
	 INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_post_canonicalize = ((INST_top.DEF_m_ref_fifo_virtual_reg_2_read____d147 || (INST_top.DEF_m_ref_fifo_virtual_reg_1_read____d148 || (INST_top.DEF_m_ref_fifo_wires_0_whas____d106 ? !(INST_top.DEF_m_ref_fifo_wires_0_wget__07_BIT_8___d149) : !(INST_top.DEF_m_ref_fifo_ehrReg_08_BIT_8___d151)))) || INST_top.INST_m_ref_fifo_ref_noncf_fifo.METH_i_notFull()) && ((INST_top.DEF_m_ref_fifo_virtual_reg_2_1_read____d158 || (INST_top.DEF_m_ref_fifo_virtual_reg_1_1_read____d159 || (INST_top.DEF_m_ref_fifo_wires_0_1_whas____d116 ? !(INST_top.DEF_m_ref_fifo_wires_0_1_wget__17_BIT_1___d160) : !(INST_top.DEF_m_ref_fifo_ehrReg_1_18_BIT_1___d162)))) || DEF_INST_top_DEF_m_ref_fifo_ref_noncf_fifo_i_notEmpty____d145);
	 INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_post_canonicalize = INST_top.DEF_CAN_FIRE_RL_m_ref_fifo_post_canonicalize;
	 if (INST_top.DEF_WILL_FIRE_RL_fifo_canocalize)
	   INST_top.RL_fifo_canocalize();
	 if (INST_top.DEF_WILL_FIRE_RL_fifo_clear_ehr_canonicalize)
	   INST_top.RL_fifo_clear_ehr_canonicalize();
	 if (INST_top.DEF_WILL_FIRE_RL_fifo_deq_ehr_canonicalize)
	   INST_top.RL_fifo_deq_ehr_canonicalize();
	 if (INST_top.DEF_WILL_FIRE_RL_fifo_enq_ehr_canonicalize)
	   INST_top.RL_fifo_enq_ehr_canonicalize();
	 if (INST_top.DEF_WILL_FIRE_RL_m_randomData_every_1)
	   INST_top.RL_m_randomData_every_1();
	 if (INST_top.DEF_WILL_FIRE_RL_m_init)
	   INST_top.RL_m_init();
	 if (INST_top.DEF_WILL_FIRE_RL_m_cycle_inc)
	   INST_top.RL_m_cycle_inc();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_2)
	   INST_top.RL_m_ref_fifo_canonicalize_2();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_4)
	   INST_top.RL_m_ref_fifo_canonicalize_4();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_3)
	   INST_top.RL_m_ref_fifo_canonicalize_3();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_post_canonicalize)
	   INST_top.RL_m_ref_fifo_post_canonicalize();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize)
	   INST_top.RL_m_ref_fifo_canonicalize();
	 if (INST_top.DEF_WILL_FIRE_RL_m_ref_fifo_canonicalize_1)
	   INST_top.RL_m_ref_fifo_canonicalize_1();
	 INST_top.INST_m_randomData_zaz.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomData_ignore.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomC_zaz.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomC_ignore.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomB_zaz.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomB_ignore.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomA_zaz.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_randomA_ignore.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_1_4.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_0_4.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_1_4.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_0_4.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_1_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_0_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_1_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_0_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_1_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_0_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_1_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_0_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_2_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_1_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_0_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_2_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_1_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_0_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_ignored_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_m_ref_fifo_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_clear_ehr_ignored_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_clear_ehr_ignored_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_clear_ehr_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_clear_ehr_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_deq_ehr_ignored_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_deq_ehr_ignored_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_deq_ehr_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_deq_ehr_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_enq_ehr_ignored_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_enq_ehr_ignored_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_enq_ehr_wires_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_fifo_enq_ehr_wires_0.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_fifo_enqP.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fifo_deqP.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fifo_empty.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fifo_full.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fifo_enq_ehr_ehrReg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fifo_deq_ehr_ehrReg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_fifo_clear_ehr_ehrReg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_ref_fifo_ref_noncf_fifo.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_m_ref_fifo_ehrReg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_ref_fifo_ehrReg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_ref_fifo_ehrReg_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_ref_fifo_ehrReg_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_ref_fifo_ehrReg_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_cycle.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_input_count.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_output_count.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_randomA_initialized.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_randomB_initialized.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_randomC_initialized.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_m_randomData_initialized.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTbCFFunctional::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTbCFFunctional_instance = new MOD_mkTbCFFunctional(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTbCFFunctional_instance->INST_fifo_enq_ehr_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_enq_ehr_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_enq_ehr_ignored_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_enq_ehr_ignored_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_deq_ehr_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_deq_ehr_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_deq_ehr_ignored_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_deq_ehr_ignored_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_clear_ehr_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_clear_ehr_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_clear_ehr_ignored_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_fifo_clear_ehr_ignored_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ref_noncf_fifo.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_2.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_0.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_2.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_0_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_1_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_2_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_0_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_1_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_2_1.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_0_2.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_1_2.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_0_2.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_1_2.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_0_3.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_1_3.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_0_3.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_1_3.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_0_4.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_wires_1_4.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_0_4.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_ref_fifo_ignored_wires_1_4.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomA_ignore.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomA_zaz.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomB_ignore.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomB_zaz.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomC_ignore.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomC_zaz.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomData_ignore.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->INST_m_randomData_zaz.set_clk_0)("CLK");
  (mkTbCFFunctional_instance->set_clk_0)("CLK");
}
void MODEL_mkTbCFFunctional::destroy_model()
{
  delete mkTbCFFunctional_instance;
  mkTbCFFunctional_instance = NULL;
}
void MODEL_mkTbCFFunctional::reset_model(bool asserted)
{
  (mkTbCFFunctional_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTbCFFunctional::get_instance()
{
  return mkTbCFFunctional_instance;
}

/* Fill in version numbers */
void MODEL_mkTbCFFunctional::get_version(char const **name, char const **build)
{
  *name = "2024.01-20-g9a97f9d0";
  *build = "9a97f9d0";
}

/* Get the model creation time */
time_t MODEL_mkTbCFFunctional::get_creation_time()
{
  
  /* Fri Aug 16 10:13:33 UTC 2024 */
  return 1723803213llu;
}

/* State dumping function */
void MODEL_mkTbCFFunctional::dump_state()
{
  (mkTbCFFunctional_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTbCFFunctional & mkTbCFFunctional_backing(tSimStateHdl simHdl)
{
  static MOD_mkTbCFFunctional *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTbCFFunctional(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTbCFFunctional::dump_VCD_defs()
{
  (mkTbCFFunctional_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTbCFFunctional::dump_VCD(tVCDDumpType dt)
{
  (mkTbCFFunctional_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTbCFFunctional_backing(sim_hdl));
}
