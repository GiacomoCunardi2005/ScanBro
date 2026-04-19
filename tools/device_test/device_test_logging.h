#ifndef SCANBRO_DEVICE_TEST_LOGGING_H
#define SCANBRO_DEVICE_TEST_LOGGING_H

#include <stdio.h>
#include "scanbro_usb.h"

#define printf(...) sb_usb_log_printf(stdout, __VA_ARGS__)
#define fprintf(stream, ...) sb_usb_log_printf((stream), __VA_ARGS__)

#endif
