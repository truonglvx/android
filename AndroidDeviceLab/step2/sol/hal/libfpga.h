#ifndef _FPGA_INTERFACE_H
#define _FPGA_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define MYFPGA_HARDWARE_MODULE_ID "myfpga"

struct fpga_device_t {
  struct hw_device_t common;
 
  int (*get_value)(struct fpga_device_t* dev);
  int (*set_start)(struct fpga_device_t* dev,int start);
  int (*set_end)(struct fpga_device_t* dev,int end);
  int (*set_int)(struct fpga_device_t* dev,int intval);
  int (*wait_for_int)(struct fpga_device_t* dev);
  int (*get_int_count)(struct fpga_device_t* dev);
};

__END_DECLS

#endif 
