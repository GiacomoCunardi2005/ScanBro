#ifndef SCANBRO_DEVICE_TEST_PROBE_MODES_H
#define SCANBRO_DEVICE_TEST_PROBE_MODES_H

#include "scanbro_usb.h"

int run_safe_probe_mode(libusb_device_handle *target_handle);
int run_sequence_probe_mode(libusb_device_handle *target_handle, int extended);

#endif
