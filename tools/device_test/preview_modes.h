#ifndef SCANBRO_DEVICE_TEST_PREVIEW_MODES_H
#define SCANBRO_DEVICE_TEST_PREVIEW_MODES_H

#include "scanbro_usb.h"

int preview_run_attempt_mode(libusb_device_handle *target_handle);
int preview_run_attempt03_mode(libusb_device_handle *target_handle);

#endif
