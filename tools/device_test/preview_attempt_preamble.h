#ifndef SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_PREAMBLE_H
#define SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_PREAMBLE_H

#include "preview_attempt_shared.h"

int preview_run_preamble_sequence(
    libusb_device_handle *target_handle,
    preview_runtime_state *state);

#endif
