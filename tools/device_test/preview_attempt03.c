#include "preview_modes.h"

#include <string.h>

#if defined(_WIN32)
#include <windows.h>
#else
#include <unistd.h>
#endif

#include "preview_attempt_data.h"
#include "preview_attempt_io.h"
#include "preview_attempt_phase1.h"
#include "preview_attempt_preamble.h"
#include "preview_attempt_readiness.h"

static void preview03_sleep_ms(unsigned int milliseconds)
{
#if defined(_WIN32)
    Sleep(milliseconds);
#else
    usleep((useconds_t)(milliseconds * 1000U));
#endif
}

static int preview03_poll_register_value(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const char *phase_label,
    unsigned int iteration,
    unsigned int frame_number,
    uint8_t reg,
    uint8_t *out_value)
{
    preview_state_poll_step poll_spec;
    uint8_t response[8];
    size_t response_length = 0U;
    char response_hex[32];
    char label_text[24];
    char failure_message[128];

    if (target_handle == NULL || state == NULL || phase_label == NULL || out_value == NULL)
    {
        return 0;
    }

    memset(&poll_spec, 0, sizeof(poll_spec));
    memset(response, 0, sizeof(response));
    snprintf(label_text, sizeof(label_text), "0x%02X22", (unsigned int)reg);

    poll_spec.frame_number = frame_number;
    poll_spec.index = (uint16_t)(((uint16_t)reg << 8U) | 0x22U);
    poll_spec.label = label_text;

    if (!preview_poll_state_register(
            target_handle,
            state,
            phase_label,
            iteration,
            &poll_spec,
            response,
            sizeof(response),
            &response_length,
            response_hex,
            sizeof(response_hex)))
    {
        return 0;
    }

    if (response_length != 2U || response[1] != 0x55U)
    {
        snprintf(
            failure_message,
            sizeof(failure_message),
            "%s poll failed for reg 0x%02X (response=%s)",
            phase_label,
            (unsigned int)reg,
            response_hex);
        preview_set_failure(state, failure_message);
        return 0;
    }

    *out_value = response[0];
    return 1;
}

static int preview03_write_register_value(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const char *phase_label,
    unsigned int iteration,
    unsigned int frame_number,
    const char *action_label,
    uint8_t reg,
    uint8_t value)
{
    preview_control_step write_step;
    char payload_hex[5];

    if (target_handle == NULL || state == NULL || phase_label == NULL || action_label == NULL)
    {
        return 0;
    }

    memset(&write_step, 0, sizeof(write_step));
    snprintf(payload_hex, sizeof(payload_hex), "%02x%02x", (unsigned int)reg, (unsigned int)value);

    write_step.frame_number = frame_number;
    write_step.is_in = 0;
    write_step.request = 0x04U;
    write_step.value = 0x0083U;
    write_step.index = 0x0000U;
    write_step.length = 2U;
    write_step.payload_hex = payload_hex;

    printf(
        "[preview-attempt-03][%s] iter=%u frame=%u action=%s payload=%s\n",
        phase_label,
        iteration,
        frame_number,
        action_label,
        payload_hex);

    return preview_run_control_step(target_handle, state, &write_step);
}

static int preview03_poll_register_u32(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const char *phase_label,
    unsigned int iteration,
    unsigned int frame_number_base,
    uint8_t reg_base,
    uint32_t *out_value)
{
    uint8_t b0 = 0U;
    uint8_t b1 = 0U;
    uint8_t b2 = 0U;
    uint8_t b3 = 0U;

    if (target_handle == NULL || state == NULL || phase_label == NULL || out_value == NULL)
    {
        return 0;
    }

    if (!preview03_poll_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            frame_number_base,
            reg_base,
            &b0))
    {
        return 0;
    }
    if (!preview03_poll_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            frame_number_base + 1U,
            (uint8_t)(reg_base + 1U),
            &b1))
    {
        return 0;
    }
    if (!preview03_poll_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            frame_number_base + 2U,
            (uint8_t)(reg_base + 2U),
            &b2))
    {
        return 0;
    }
    if (!preview03_poll_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            frame_number_base + 3U,
            (uint8_t)(reg_base + 3U),
            &b3))
    {
        return 0;
    }

    *out_value = ((uint32_t)b0 << 24U) |
                 ((uint32_t)b1 << 16U) |
                 ((uint32_t)b2 << 8U) |
                 (uint32_t)b3;
    return 1;
}

static int preview03_run_ghidra_pre_bulk_enable(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int iteration)
{
    uint8_t rega6 = 0U;
    uint8_t reg6b = 0U;
    uint8_t reg6c = 0U;
    uint8_t reg01 = 0U;
    uint8_t reg0d = 0U;
    uint8_t reg41_prev = 0U;
    uint8_t reg41_curr = 0U;
    uint8_t reg41_busy = 0U;
    unsigned int wait_attempt = 0U;
    unsigned int probe_attempt = 0U;
    char failure_message[160];
    const uint16_t command_value = 0x0021U;
    const char *phase_label = "phase-3-ghidra";

    if (target_handle == NULL || state == NULL)
    {
        return 0;
    }

    printf(
        "[preview-attempt-03][%s] iter=%u begin Ghidra-derived pre-bulk enable (FUN_10011970 + FUN_10010210)\n",
        phase_label,
        iteration);

    /* FUN_10011970: set A6 bits2/3/4 via FUN_10018bd0(0x13,0x14,0x15,1). */
    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3701U, 0xA6U, &rega6))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3702U,
            "set rega6 bit2",
            0xA6U,
            (uint8_t)(rega6 | 0x04U)))
    {
        return 0;
    }

    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3703U, 0xA6U, &rega6))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3704U,
            "set rega6 bit3",
            0xA6U,
            (uint8_t)(rega6 | 0x08U)))
    {
        return 0;
    }
    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3705U, 0xA6U, &rega6))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3706U,
            "set rega6 bit4",
            0xA6U,
            (uint8_t)(rega6 | 0x10U)))
    {
        return 0;
    }

    preview03_sleep_ms(1U);

    /* FUN_10011c70(0x01,0x21): wait stable reg41 (bit1 clear), then write reg51/reg3A/reg3B. */
    for (wait_attempt = 0U; wait_attempt < 5U; ++wait_attempt)
    {
        const unsigned int frame_base = 3710U + wait_attempt * 6U;
        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base,
                0x41U,
                &reg41_prev))
        {
            return 0;
        }

        reg41_busy = 0xFFU;
        for (probe_attempt = 0U; probe_attempt < 5U; ++probe_attempt)
        {
            if (!preview03_poll_register_value(
                    target_handle,
                    state,
                    phase_label,
                    iteration,
                    frame_base + 1U + probe_attempt,
                    0x41U,
                    &reg41_curr))
            {
                return 0;
            }
            if (reg41_curr == reg41_prev)
            {
                reg41_busy = (uint8_t)(((reg41_curr & 0x02U) != 0U) ? 1U : 0U);
                break;
            }
            reg41_prev = reg41_curr;
        }

        if (reg41_busy == 0xFFU)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "%s reg41 did not stabilize during FUN_10011c70 wait",
                phase_label);
            preview_set_failure(state, failure_message);
            return 0;
        }
        if (reg41_busy == 0U)
        {
            break;
        }
        preview03_sleep_ms(10U);
    }

    if (wait_attempt == 5U)
    {
        preview_set_failure(state, "phase-3-ghidra reg41 busy bit did not clear for FUN_10011c70");
        return 0;
    }

    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3740U,
            "write reg51 command=0x01",
            0x51U,
            0x01U))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3741U,
            "write reg3a command high",
            0x3AU,
            (uint8_t)((command_value >> 8U) & 0xFFU)))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3742U,
            "write reg3b command low",
            0x3BU,
            (uint8_t)(command_value & 0xFFU)))
    {
        return 0;
    }

    preview03_sleep_ms(10U);

    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3743U, 0x6CU, &reg6c))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3744U,
            "clear reg6c bit6",
            0x6CU,
            (uint8_t)(reg6c & (uint8_t)~0x40U)))
    {
        return 0;
    }

    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3745U, 0x6BU, &reg6b))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3746U,
            "clear reg6b bit7",
            0x6BU,
            (uint8_t)(reg6b & (uint8_t)~0x80U)))
    {
        return 0;
    }

    /* FUN_10010210 -> FUN_1001de30(1,1): set 6B bit7, set 01 bit0, set 0D bit0, write 0F=FF */
    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3747U, 0x6BU, &reg6b))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3748U,
            "set reg6b bit7=1 (start)",
            0x6BU,
            (uint8_t)(reg6b | 0x80U)))
    {
        return 0;
    }

    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3749U, 0x01U, &reg01))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3750U,
            "set reg01 bit0=1 (start)",
            0x01U,
            (uint8_t)(reg01 | 0x01U)))
    {
        return 0;
    }

    if (!preview03_poll_register_value(target_handle, state, phase_label, iteration, 3751U, 0x0DU, &reg0d))
    {
        return 0;
    }
    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3752U,
            "set reg0d bit0=1 (start)",
            0x0DU,
            (uint8_t)(reg0d | 0x01U)))
    {
        return 0;
    }

    if (!preview03_write_register_value(
            target_handle,
            state,
            phase_label,
            iteration,
            3753U,
            "write reg0f=0xff (start)",
            0x0FU,
            0xFFU))
    {
        return 0;
    }

    printf(
        "[preview-attempt-03][%s] iter=%u complete\n",
        phase_label,
        iteration);
    return 1;
}

static int preview03_run_ghidra_post_bulk_finalize(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int iteration)
{
    const char *phase_label = "phase-4-finalize";
    unsigned int attempt = 0U;
    uint8_t reg01 = 0U;
    uint8_t reg0d = 0U;
    uint8_t reg4b = 0U;
    uint8_t reg4c = 0U;
    uint8_t reg4d = 0U;
    uint8_t reg41 = 0U;
    uint32_t busy_4b4d = 0U;
    char failure_message[160];

    if (target_handle == NULL || state == NULL)
    {
        return 0;
    }

    printf(
        "[preview-attempt-03][%s] iter=%u begin completion polling (FUN_10010250 tail)\n",
        phase_label,
        iteration);

    for (attempt = 0U; attempt < 100U; ++attempt)
    {
        const unsigned int frame_base = 4200U + attempt * 4U;
        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base,
                0x01U,
                &reg01))
        {
            return 0;
        }

        if (!preview03_write_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base + 1U,
                "clear reg01 bit0",
                0x01U,
                (uint8_t)(reg01 & (uint8_t)~0x01U)))
        {
            return 0;
        }

        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base + 2U,
                0x01U,
                &reg01))
        {
            return 0;
        }

        if ((reg01 & 0x01U) == 0U)
        {
            break;
        }
        preview03_sleep_ms(10U);
    }
    if (attempt == 100U)
    {
        preview_set_failure(state, "phase-4 finalize: reg01 bit0 did not clear");
        return 0;
    }

    for (attempt = 0U; attempt < 100U; ++attempt)
    {
        const unsigned int frame_base = 4600U + attempt * 6U;
        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base,
                0x0DU,
                &reg0d))
        {
            return 0;
        }

        if (!preview03_write_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base + 1U,
                "set reg0d bit0",
                0x0DU,
                (uint8_t)(reg0d | 0x01U)))
        {
            return 0;
        }

        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base + 2U,
                0x4BU,
                &reg4b))
        {
            return 0;
        }
        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base + 3U,
                0x4CU,
                &reg4c))
        {
            return 0;
        }
        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame_base + 4U,
                0x4DU,
                &reg4d))
        {
            return 0;
        }

        busy_4b4d = ((uint32_t)reg4b << 16U) | ((uint32_t)reg4c << 8U) | (uint32_t)reg4d;
        if (busy_4b4d == 0U)
        {
            break;
        }
        preview03_sleep_ms(10U);
    }
    if (attempt == 100U)
    {
        preview_set_failure(state, "phase-4 finalize: reg4b..4d busy counter did not drain");
        return 0;
    }

    for (attempt = 0U; attempt < 1000U; ++attempt)
    {
        const unsigned int frame = 5200U + attempt * 2U;
        if (!preview03_poll_register_value(
                target_handle,
                state,
                phase_label,
                iteration,
                frame,
                0x41U,
                &reg41))
        {
            return 0;
        }

        if (((reg41 & 0x01U) == 0U) && ((reg41 & 0x40U) != 0U))
        {
            printf(
                "[preview-attempt-03][%s] iter=%u completion reached reg41=0x%02x after %u checks\n",
                phase_label,
                iteration,
                (unsigned int)reg41,
                attempt + 1U);
            return 1;
        }
        preview03_sleep_ms(1U);
    }

    snprintf(
        failure_message,
        sizeof(failure_message),
        "phase-4 finalize: reg41 completion bits not reached (last=0x%02x)",
        (unsigned int)reg41);
    preview_set_failure(state, failure_message);
    return 0;
}

int preview_run_attempt_mode(libusb_device_handle *target_handle)
{
    preview_runtime_state state;
    uint8_t bulk_in_buffer[8192];
    size_t step_index;
    unsigned int capture_loop_timeouts = 0U;

    memset(&state, 0, sizeof(state));

    if (!ensure_preview_output_directory())
    {
        return 1;
    }

    state.output_file = fopen(kPreviewDumpPath, "wb");
    if (state.output_file == NULL)
    {
        fprintf(stderr, "[preview-attempt] cannot open output file: %s\n", kPreviewDumpPath);
        return 1;
    }

    printf("\n[preview-attempt] mode enabled.\n");
    printf("[preview-attempt] raw output: %s\n", kPreviewDumpPath);
    printf(
        "[preview-attempt] limits: timeout=%u ms bulk-in-size=%d max-bytes=%zu max-bulk-in-transfers=%u max-total-transfers=%u\n",
        kPreviewBulkInTimeoutMs,
        kPreviewBulkInReadSize,
        kPreviewMaxBytes,
        kPreviewMaxBulkInTransfers,
        kPreviewMaxTotalTransfers);

    if (!preview_run_preamble_sequence(target_handle, &state))
    {
        goto fail;
    }

    for (step_index = 0; step_index < kPreviewPointerStepCount; ++step_index)
    {
        preview_control_step pointer_control_step;
        size_t poll_index;
        int transferred = 0;
        int timed_out = 0;

        memset(&pointer_control_step, 0, sizeof(pointer_control_step));
        pointer_control_step.frame_number = kPreviewPointerSteps[step_index].control_frame;
        pointer_control_step.is_in = 0;
        pointer_control_step.request = 0x04;
        pointer_control_step.value = 0x0082U;
        pointer_control_step.index = 0x0000U;
        pointer_control_step.length = 8U;
        pointer_control_step.payload_hex = kPreviewPointerSteps[step_index].control_payload_hex;

        if (!preview_run_control_step(target_handle, &state, &pointer_control_step))
        {
            goto fail;
        }

        if (kPreviewPointerSteps[step_index].submit_frame_a != 0U)
        {
            if (!preview_run_bulk_in_step(
                    target_handle,
                    &state,
                    kPreviewPointerSteps[step_index].submit_frame_a,
                    bulk_in_buffer,
                    kPreviewBulkInReadSize,
                    &transferred,
                    &timed_out))
            {
                goto fail;
            }
        }

        if (kPreviewPointerSteps[step_index].submit_frame_b != 0U)
        {
            if (!preview_run_bulk_in_step(
                    target_handle,
                    &state,
                    kPreviewPointerSteps[step_index].submit_frame_b,
                    bulk_in_buffer,
                    kPreviewBulkInReadSize,
                    &transferred,
                    &timed_out))
            {
                goto fail;
            }
        }

        for (poll_index = 0U; poll_index < 4U; ++poll_index)
        {
            if (kPreviewPointerSteps[step_index].poll_frames[poll_index] == 0U)
            {
                continue;
            }

            preview_control_step poll_step;
            memset(&poll_step, 0, sizeof(poll_step));
            poll_step.frame_number = kPreviewPointerSteps[step_index].poll_frames[poll_index];
            poll_step.is_in = 1;
            poll_step.request = 0x04;
            poll_step.value = 0x008EU;
            poll_step.index = kPreviewPointerPollIndices[poll_index];
            poll_step.length = 2U;
            poll_step.payload_hex = NULL;

            if (!preview_run_control_step(target_handle, &state, &poll_step))
            {
                goto fail;
            }
        }
    }

    while (state.total_bytes < kPreviewMaxBytes &&
           state.bulk_in_transfers < kPreviewMaxBulkInTransfers)
    {
        int transferred = 0;
        int timed_out = 0;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                0U,
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            capture_loop_timeouts++;
            if (capture_loop_timeouts >= kPreviewMaxConsecutiveTimeouts)
            {
                preview_set_failure(&state, "capture-loop stopped after consecutive bulk IN timeouts");
                break;
            }
        }
        else
        {
            capture_loop_timeouts = 0U;
        }
    }

    fclose(state.output_file);
    state.output_file = NULL;
    preview_log_saved_file_summary(kPreviewDumpPath);

    if (state.total_bytes == 0U)
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "bulk IN data phase not reached before stop condition");
        }
        fprintf(stderr, "[preview-attempt] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt] no raw data saved to %s\n", kPreviewDumpPath);
        return 1;
    }

    printf(
        "[preview-attempt] completed: saved %zu bytes to %s\n",
        state.total_bytes,
        kPreviewDumpPath);
    printf(
        "[preview-attempt] transfer counters: total=%u bulk-in=%u\n",
        state.total_transfers,
        state.bulk_in_transfers);

    if (state.failure_stage[0] != '\0')
    {
        printf("[preview-attempt] stop reason: %s\n", state.failure_stage);
    }

    return 0;

fail:
    if (state.output_file != NULL)
    {
        fclose(state.output_file);
        state.output_file = NULL;
    }

    if (state.failure_stage[0] == '\0')
    {
        preview_set_failure(&state, "unexpected preview-attempt failure");
    }

    fprintf(stderr, "[preview-attempt] failed: %s\n", state.failure_stage);
    fprintf(stderr, "[preview-attempt] bytes saved before failure: %zu\n", state.total_bytes);
    return 1;
}

int preview_run_attempt03_mode(libusb_device_handle *target_handle)
{
    preview_runtime_state state;
    uint8_t bulk_in_buffer[8192];
    unsigned int phase4_idle_budget = 500U;
    const unsigned int phase4_max_consecutive_timeouts = 12U;
    int checkpoint_pointer_pass = 0;
    int checkpoint_bulk_non_zero_pass = 0;
    int checkpoint_state_pass = 0;

    memset(&state, 0, sizeof(state));

    if (!ensure_preview_output_directory())
    {
        return 1;
    }

    state.output_file = fopen(kPreviewDumpPath, "wb");
    if (state.output_file == NULL)
    {
        fprintf(stderr, "[preview-attempt-03] cannot open output file: %s\n", kPreviewDumpPath);
        return 1;
    }

    printf("\n[preview-attempt-03] mode enabled.\n");
    printf("[preview-attempt-03] design: clean state-machine reconstruction (not prepend replay).\n");
    printf("[preview-attempt-03] source-of-truth window: 03_lamp_on_window_min_3129_3178.pcapng\n");
    printf("[preview-attempt-03] raw output: %s\n", kPreviewDumpPath);
    printf(
        "[preview-attempt-03] limits: timeout=%u ms bulk-in-size=%d max-bytes=%zu max-bulk-in-transfers=%u max-total-transfers=%u\n",
        kPreviewBulkInTimeoutMs,
        kPreviewBulkInReadSize,
        kPreviewMaxBytes,
        kPreviewMaxBulkInTransfers,
        kPreviewMaxTotalTransfers);
    printf("[preview-attempt-03] phases: setup-preamble -> ghidra-start -> pointer-submit -> ghidra-read-loop\n");

    if (!preview_run_preamble_sequence(target_handle, &state))
    {
        goto fail;
    }

    if (!preview03_run_ghidra_pre_bulk_enable(target_handle, &state, 1U))
    {
        goto fail;
    }
    checkpoint_state_pass = 1;

    printf("[preview-attempt-03][phase-3-trigger] submitting read pointer\n");
    if (!preview_run_state_write_step(
            target_handle,
            &state,
            "phase-3-trigger",
            1U,
            &kPreview03PointerWriteStep))
    {
        goto fail;
    }
    checkpoint_pointer_pass = 1;
    printf("[preview-attempt-03][phase-3-trigger] complete pointer_submitted=yes\n");

    printf("[preview-attempt-03][phase-4-bulk] Ghidra-driven read loop begin (FUN_10010250)\n");
    printf(
        "[preview-attempt-03][phase-4-bulk] policy: idle_budget=%u (10ms ticks), timeout_budget=%u\n",
        phase4_idle_budget,
        phase4_max_consecutive_timeouts);

    while (state.total_bytes < kPreviewMaxBytes &&
           state.bulk_in_transfers < kPreviewMaxBulkInTransfers &&
           phase4_idle_budget > 0U)
    {
        uint32_t pending_bytes = 0U;
        uint32_t read_window = 0U;
        unsigned int phase4_poll_frame = 3800U + (500U - phase4_idle_budget) * 8U;
        int transferred = 0;
        int timed_out = 0;
        unsigned int timeout_streak = 0U;

        if (!preview03_poll_register_u32(
                target_handle,
                &state,
                "phase-4-bulk",
                1U,
                phase4_poll_frame,
                0x42U,
                &pending_bytes))
        {
            goto fail;
        }
        pending_bytes <<= 1U;

        if (pending_bytes == 0U)
        {
            phase4_idle_budget--;
            preview03_sleep_ms(10U);
            continue;
        }

        phase4_idle_budget = 500U;
        read_window = pending_bytes;
        if (read_window > 0xEFF0U)
        {
            read_window = 0xEFF0U;
        }

        printf(
            "[preview-attempt-03][phase-4-bulk] pending_bytes=%u read_window=%u\n",
            pending_bytes,
            read_window);

        while (read_window > 0U &&
               state.total_bytes < kPreviewMaxBytes &&
               state.bulk_in_transfers < kPreviewMaxBulkInTransfers)
        {
            int request_len = (int)read_window;
            if (request_len > kPreviewBulkInReadSize)
            {
                request_len = kPreviewBulkInReadSize;
            }

            if (!preview_run_bulk_in_step(
                    target_handle,
                    &state,
                    0U,
                    bulk_in_buffer,
                    request_len,
                    &transferred,
                    &timed_out))
            {
                goto fail;
            }

            if (timed_out)
            {
                timeout_streak++;
                if (timeout_streak >= phase4_max_consecutive_timeouts)
                {
                    preview_set_failure(&state, "phase-4 capture-loop stopped after consecutive bulk IN timeouts");
                    break;
                }
                continue;
            }

            timeout_streak = 0U;
            if (transferred <= 0)
            {
                break;
            }

            if (!checkpoint_bulk_non_zero_pass)
            {
                size_t non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
                if (non_zero_count > 0U)
                {
                    checkpoint_bulk_non_zero_pass = 1;
                    printf(
                        "[preview-attempt-03][phase-4-bulk] first non-zero chunk observed non_zero_bytes=%zu\n",
                        non_zero_count);
                }
            }

            if ((uint32_t)transferred >= read_window)
            {
                read_window = 0U;
            }
            else
            {
                read_window -= (uint32_t)transferred;
            }
        }

        if (state.failure_stage[0] != '\0')
        {
            break;
        }
    }

    if (phase4_idle_budget == 0U)
    {
        preview_set_failure(&state, "phase-4 idle budget exhausted while waiting for REG42 pending bytes");
    }

    if (state.failure_stage[0] == '\0')
    {
        if (!preview03_run_ghidra_post_bulk_finalize(target_handle, &state, 1U))
        {
            goto fail;
        }
    }

    fclose(state.output_file);
    state.output_file = NULL;
    preview_log_saved_file_summary(kPreviewDumpPath);

    printf(
        "[preview-attempt-03] checkpoint summary: ghidra_state=%s pointer_write=%s first_non_zero_bulk=%s\n",
        checkpoint_state_pass ? "pass" : "fail",
        checkpoint_pointer_pass ? "pass" : "fail",
        checkpoint_bulk_non_zero_pass ? "pass" : "fail");

    if (state.total_bytes == 0U)
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "phase-4 bulk IN data phase not reached before stop condition");
        }
        fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt-03] no raw data saved to %s\n", kPreviewDumpPath);
        return 1;
    }

    if (!(checkpoint_state_pass && checkpoint_pointer_pass && checkpoint_bulk_non_zero_pass))
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "one or more phase checkpoints not satisfied");
        }
        fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt-03] bytes saved before failure: %zu\n", state.total_bytes);
        return 1;
    }

    printf(
        "[preview-attempt-03] completed: saved %zu bytes to %s\n",
        state.total_bytes,
        kPreviewDumpPath);
    printf(
        "[preview-attempt-03] transfer counters: total=%u bulk-in=%u\n",
        state.total_transfers,
        state.bulk_in_transfers);

    if (state.failure_stage[0] != '\0')
    {
        printf("[preview-attempt-03] stop reason: %s\n", state.failure_stage);
    }

    return 0;

fail:
    if (state.output_file != NULL)
    {
        fclose(state.output_file);
        state.output_file = NULL;
    }

    if (state.failure_stage[0] == '\0')
    {
        preview_set_failure(&state, "unexpected preview-attempt-03 failure");
    }

    fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
    fprintf(stderr, "[preview-attempt-03] bytes saved before failure: %zu\n", state.total_bytes);
    return 1;
}
