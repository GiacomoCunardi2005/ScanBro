#include "preview_modes.h"

#include <string.h>

#include "preview_attempt_data.h"
#include "preview_attempt_io.h"
#include "preview_attempt_phase1.h"
#include "preview_attempt_preamble.h"
#include "preview_attempt_readiness.h"

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
    preview03_transition_result transition_result;
    preview03_readiness_result readiness_result;
    uint8_t bulk_in_buffer[8192];
    unsigned int capture_loop_timeouts = 0U;
    uint64_t phase_timeout_ms = (uint64_t)kTransferTimeoutMs * (uint64_t)kPreviewMaxConsecutiveTimeouts;
    unsigned int transition_iteration_cap = 96U;
    unsigned int readiness_iteration_cap = 96U;
    size_t step_index;
    int checkpoint_pointer_pass = 0;
    int checkpoint_bulk_non_zero_pass = 0;
    int checkpoint_poll_pass = 0;

    memset(&state, 0, sizeof(state));
    memset(&transition_result, 0, sizeof(transition_result));
    memset(&readiness_result, 0, sizeof(readiness_result));

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
    printf("[preview-attempt-03] phases: setup-preamble -> transition-drivers -> readiness-observation -> read-trigger -> bulk-read\n");

    if (!preview_run_preamble_sequence(target_handle, &state))
    {
        goto fail;
    }

    if (!preview03_run_transition_phase(
            target_handle,
            &state,
            phase_timeout_ms,
            transition_iteration_cap,
            &transition_result))
    {
        goto fail;
    }

    if (!preview03_run_readiness_phase(
            target_handle,
            &state,
            phase_timeout_ms,
            readiness_iteration_cap,
            &readiness_result))
    {
        goto fail;
    }
    checkpoint_poll_pass = readiness_result.seen_4422_0e55 && readiness_result.seen_4522_7855;

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

    printf("[preview-attempt-03][phase-4-bulk] first bulk-IN checks begin (frame hints 3144/3146)\n");
    for (step_index = 0; step_index < kPreview03BulkFrameHintCount; ++step_index)
    {
        int transferred = 0;
        int timed_out = 0;
        size_t non_zero_count = 0U;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                kPreview03BulkFrameHints[step_index],
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            printf(
                "[preview-attempt-03][phase-4-bulk] frame_hint=%u timed_out=yes\n",
                kPreview03BulkFrameHints[step_index]);
            continue;
        }

        if (transferred > 0)
        {
            non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
        }

        if (non_zero_count > 0U)
        {
            checkpoint_bulk_non_zero_pass = 1;
        }

        printf(
            "[preview-attempt-03][phase-4-bulk] frame_hint=%u transferred=%d non_zero_bytes=%zu non_zero_seen=%s\n",
            kPreview03BulkFrameHints[step_index],
            transferred,
            non_zero_count,
            (non_zero_count > 0U) ? "yes" : "no");
    }

    printf(
        "[preview-attempt-03][phase-4-bulk] initial summary first_non_zero_bulk_seen=%s\n",
        checkpoint_bulk_non_zero_pass ? "yes" : "no");

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
                preview_set_failure(&state, "phase-4 capture-loop stopped after consecutive bulk IN timeouts");
                break;
            }
        }
        else
        {
            if (!checkpoint_bulk_non_zero_pass && transferred > 0)
            {
                size_t non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
                if (non_zero_count > 0U)
                {
                    checkpoint_bulk_non_zero_pass = 1;
                    printf(
                        "[preview-attempt-03][phase-4-bulk] capture-loop observed first non-zero bulk chunk non_zero_bytes=%zu\n",
                        non_zero_count);
                }
            }
            capture_loop_timeouts = 0U;
        }
    }

    fclose(state.output_file);
    state.output_file = NULL;
    preview_log_saved_file_summary(kPreviewDumpPath);

    printf(
        "[preview-attempt-03] checkpoint summary: readiness_observation=%s pointer_write=%s first_non_zero_bulk=%s\n",
        checkpoint_poll_pass ? "pass" : "fail",
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

    if (!(checkpoint_poll_pass && checkpoint_pointer_pass && checkpoint_bulk_non_zero_pass))
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
