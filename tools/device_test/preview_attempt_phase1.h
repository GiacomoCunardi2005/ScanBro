#ifndef SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_PHASE1_H
#define SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_PHASE1_H

#include "preview_attempt_shared.h"

typedef struct preview03_transition_result
{
    int wrote_0c00;
    int wrote_0d01_pre;
    int applied_gl847_gpio_profile;
    int prepared_6c_gpio10_high;
    int wrote_6b87;
    int wrote_0141;
    int wrote_0d01;
    int wrote_0fff;
    int wrote_0140;
    int wrote_6cf0;
    int seen_6c22_f155;
    int seen_6c22_f055;
    unsigned int attempts_0140;
    unsigned int emitted_0140_iteration;
    unsigned int post_0140_snapshot_count;
    int logged_0140_retry_policy;
    char last_0c22[32];
    char last_6b22[32];
    char last_0122[32];
    char last_0d22[32];
    char last_6c22[32];
} preview03_transition_result;

int preview03_run_transition_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_transition_result *out_result);

#endif
