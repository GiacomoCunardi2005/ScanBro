#ifndef SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_IO_H
#define SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_IO_H

#include "preview_attempt_shared.h"

int preview_run_control_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const preview_control_step *step);

int preview_poll_state_register(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const char *phase_label,
    unsigned int iteration,
    const preview_state_poll_step *poll_spec,
    uint8_t *out_response,
    size_t out_response_size,
    size_t *out_response_length,
    char *out_response_hex,
    size_t out_response_hex_size);

int preview_run_state_write_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const char *phase_label,
    unsigned int iteration,
    const preview_state_write_step *write_spec);

int preview_run_phase1_reg6c_gpio10_write(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int iteration,
    unsigned int frame_number,
    uint8_t source_reg6c,
    int set_gpio10,
    uint8_t *out_written_reg6c);

int preview_run_bulk_out_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int frame_number,
    const char *payload_hex);

int preview_run_bulk_in_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int frame_number,
    uint8_t *buffer,
    int buffer_size,
    int *out_transferred,
    int *out_timed_out);

#endif
