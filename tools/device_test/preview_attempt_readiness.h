#ifndef SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_READINESS_H
#define SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_READINESS_H

#include "preview_attempt_shared.h"

typedef struct preview03_readiness_result
{
    int seen_4422_0e55;
    int seen_4522_7855;
    int seen_generic_ready;
    unsigned int seen_4422_iteration;
    unsigned int seen_4522_iteration;
    unsigned int seen_generic_iteration;
    char last_4222[32];
    char last_4322[32];
    char last_4422[32];
    char last_4522[32];
} preview03_readiness_result;

int preview03_run_readiness_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_readiness_result *out_result);

#endif
