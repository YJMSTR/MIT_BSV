/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Fri Jul 12 21:46:18 CST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTbRCA.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTbRCA::MODEL_mkTbRCA()
{
  mkTbRCA_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTbRCA()
{
  MODEL_mkTbRCA *model = new MODEL_mkTbRCA();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTbRCA &INST_top = *((MOD_mkTbRCA *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_randomVal1_initialized__h383;
	 tUInt8 DEF_INST_top_DEF_randomVal2_initialized__h758;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_every;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_every;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_every_1;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_every_1;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_every;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_every;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_every_1;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_every_1;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test;
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_every = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_every = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_every;
	 DEF_INST_top_DEF_randomVal1_initialized__h383 = INST_top.INST_randomVal1_initialized.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_every_1 = !DEF_INST_top_DEF_randomVal1_initialized__h383;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_every_1 = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal1_every_1;
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_every = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_every = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_every;
	 DEF_INST_top_DEF_randomVal2_initialized__h758 = INST_top.INST_randomVal2_initialized.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_every_1 = !DEF_INST_top_DEF_randomVal2_initialized__h758;
	 DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_every_1 = DEF_INST_top_DEF_CAN_FIRE_RL_randomVal2_every_1;
	 INST_top.DEF_x__h945 = INST_top.INST_cycle.METH_read();
	 INST_top.DEF_cycle_5_EQ_128___d17 = (INST_top.DEF_x__h945) == 128u;
	 INST_top.DEF_cycle_5_EQ_0___d16 = (INST_top.DEF_x__h945) == 0u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test = INST_top.DEF_cycle_5_EQ_0___d16 || (INST_top.DEF_cycle_5_EQ_128___d17 || (DEF_INST_top_DEF_randomVal1_initialized__h383 && DEF_INST_top_DEF_randomVal2_initialized__h758));
	 DEF_INST_top_DEF_WILL_FIRE_RL_test = DEF_INST_top_DEF_CAN_FIRE_RL_test;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_every)
	   INST_top.RL_randomVal1_every();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal1_every_1)
	   INST_top.RL_randomVal1_every_1();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_every)
	   INST_top.RL_randomVal2_every();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_randomVal2_every_1)
	   INST_top.RL_randomVal2_every_1();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test)
	   INST_top.RL_test();
	 INST_top.INST_randomVal2_zaz.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_randomVal2_ignore.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_randomVal1_zaz.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_randomVal1_ignore.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_cycle.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomVal1_initialized.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_randomVal2_initialized.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTbRCA::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTbRCA_instance = new MOD_mkTbRCA(sim_hdl, "top", NULL);
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
  (mkTbRCA_instance->INST_randomVal1_ignore.set_clk_0)("CLK");
  (mkTbRCA_instance->INST_randomVal1_zaz.set_clk_0)("CLK");
  (mkTbRCA_instance->INST_randomVal2_ignore.set_clk_0)("CLK");
  (mkTbRCA_instance->INST_randomVal2_zaz.set_clk_0)("CLK");
  (mkTbRCA_instance->set_clk_0)("CLK");
}
void MODEL_mkTbRCA::destroy_model()
{
  delete mkTbRCA_instance;
  mkTbRCA_instance = NULL;
}
void MODEL_mkTbRCA::reset_model(bool asserted)
{
  (mkTbRCA_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTbRCA::get_instance()
{
  return mkTbRCA_instance;
}

/* Fill in version numbers */
void MODEL_mkTbRCA::get_version(char const **name, char const **build)
{
  *name = "2024.01";
  *build = "ae2a2fc6";
}

/* Get the model creation time */
time_t MODEL_mkTbRCA::get_creation_time()
{
  
  /* Fri Jul 12 13:46:18 UTC 2024 */
  return 1720791978llu;
}

/* State dumping function */
void MODEL_mkTbRCA::dump_state()
{
  (mkTbRCA_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTbRCA & mkTbRCA_backing(tSimStateHdl simHdl)
{
  static MOD_mkTbRCA *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTbRCA(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTbRCA::dump_VCD_defs()
{
  (mkTbRCA_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTbRCA::dump_VCD(tVCDDumpType dt)
{
  (mkTbRCA_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTbRCA_backing(sim_hdl));
}
