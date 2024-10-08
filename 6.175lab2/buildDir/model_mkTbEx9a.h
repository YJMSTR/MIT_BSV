/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Thu Aug  1 13:44:46 CST 2024
 * 
 */

/* Generation options: keep-fires */
#ifndef __model_mkTbEx9a_h__
#define __model_mkTbEx9a_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mkTbEx9a.h"

/* Class declaration for a model of mkTbEx9a */
class MODEL_mkTbEx9a : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mkTbEx9a *mkTbEx9a_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mkTbEx9a();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(char const **name, char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mkTbEx9a();
}

#endif /* ifndef __model_mkTbEx9a_h__ */
