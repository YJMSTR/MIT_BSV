/*
 * Generated by Bluespec Compiler, version 2023.01 (build 52adafa5)
 * 
 * On Mon Sep 23 14:43:33 UTC 2024
 * 
 */
extern "C" {
  char dpi_cycle();
  void dpi_init();
  unsigned long long dpi_msgSink_beat(unsigned int );
  void dpi_msgSource_beat(unsigned int , unsigned int );
  unsigned int read_simDma32(unsigned int , unsigned int );
  unsigned int simDma_idreturn(unsigned int );
  unsigned int simDma_init(unsigned int , unsigned int , unsigned int );
  unsigned int simDma_initfd(unsigned int , unsigned int );
  void write_simDma32(unsigned int , unsigned int , unsigned int , char );
}
