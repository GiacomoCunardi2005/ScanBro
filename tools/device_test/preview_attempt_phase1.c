#include "preview_attempt_phase1.h"

#include <string.h>

#include "preview_attempt_data.h"
#include "preview_attempt_io.h"

static int preview03_log_post_0140_status_snapshots(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int iteration,
    preview03_transition_result *out_result)
{
    unsigned int snapshot_index;
    const unsigned int snapshot_count = 5U;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    for (snapshot_index = 0U; snapshot_index < snapshot_count; ++snapshot_index)
    {
        preview_state_poll_step poll_6c22;
        preview_state_poll_step poll_6b22;
        preview_state_poll_step poll_0122;
        preview_state_poll_step poll_0d22;
        uint8_t response_6c22[8];
        uint8_t response_6b22[8];
        uint8_t response_0122[8];
        uint8_t response_0d22[8];
        size_t response_6c22_length = 0U;
        size_t response_6b22_length = 0U;
        size_t response_0122_length = 0U;
        size_t response_0d22_length = 0U;
        char post_6c22_hex[32];
        char post_6b22_hex[32];
        char post_0122_hex[32];
        char post_0d22_hex[32];
        unsigned int base_frame = kPreview03Write0140Step.frame_number + 1U + (snapshot_index * 4U);

        memset(&poll_6c22, 0, sizeof(poll_6c22));
        memset(&poll_6b22, 0, sizeof(poll_6b22));
        memset(&poll_0122, 0, sizeof(poll_0122));
        memset(&poll_0d22, 0, sizeof(poll_0d22));

        poll_6c22.frame_number = base_frame;
        poll_6c22.index = 0x6C22U;
        poll_6c22.label = "post-0140 0x6C22";

        poll_6b22.frame_number = base_frame + 1U;
        poll_6b22.index = 0x6B22U;
        poll_6b22.label = "post-0140 0x6B22";

        poll_0122.frame_number = base_frame + 2U;
        poll_0122.index = 0x0122U;
        poll_0122.label = "post-0140 0x0122";

        poll_0d22.frame_number = base_frame + 3U;
        poll_0d22.index = 0x0D22U;
        poll_0d22.label = "post-0140 0x0D22";

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_6c22,
                response_6c22,
                sizeof(response_6c22),
                &response_6c22_length,
                post_6c22_hex,
                sizeof(post_6c22_hex)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_6b22,
                response_6b22,
                sizeof(response_6b22),
                &response_6b22_length,
                post_6b22_hex,
                sizeof(post_6b22_hex)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_0122,
                response_0122,
                sizeof(response_0122),
                &response_0122_length,
                post_0122_hex,
                sizeof(post_0122_hex)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_0d22,
                response_0d22,
                sizeof(response_0d22),
                &response_0d22_length,
                post_0d22_hex,
                sizeof(post_0d22_hex)))
        {
            return 0;
        }

        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF1U, 0x55U))
        {
            out_result->seen_6c22_f155 = 1;
        }
        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF0U, 0x55U))
        {
            out_result->seen_6c22_f055 = 1;
        }

        snprintf(out_result->last_6c22, sizeof(out_result->last_6c22), "%s", post_6c22_hex);
        snprintf(out_result->last_6b22, sizeof(out_result->last_6b22), "%s", post_6b22_hex);
        snprintf(out_result->last_0122, sizeof(out_result->last_0122), "%s", post_0122_hex);
        snprintf(out_result->last_0d22, sizeof(out_result->last_0d22), "%s", post_0d22_hex);
        out_result->post_0140_snapshot_count++;

        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u post-0140 snapshot=%u/5 6c22=%s 6b22=%s 0122=%s 0d22=%s\n",
            iteration,
            snapshot_index + 1U,
            post_6c22_hex,
            post_6b22_hex,
            post_0122_hex,
            post_0d22_hex);
    }

    if (!out_result->seen_6c22_f155 && !out_result->seen_6c22_f055)
    {
        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u post-0140 no REG6C progression after %u snapshots (last_6c22=%s last_6b22=%s last_0122=%s last_0d22=%s); expected transition toward f155/f055\n",
            iteration,
            out_result->post_0140_snapshot_count,
            out_result->last_6c22,
            out_result->last_6b22,
            out_result->last_0122,
            out_result->last_0d22);
    }

    return 1;
}

int preview03_run_transition_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_transition_result *out_result)
{
    unsigned int iteration = 0U;
    uint64_t started_ms;
    uint64_t deadline_ms;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    memset(out_result, 0, sizeof(*out_result));
    snprintf(out_result->last_0c22, sizeof(out_result->last_0c22), "<missing>");
    snprintf(out_result->last_6b22, sizeof(out_result->last_6b22), "<missing>");
    snprintf(out_result->last_0122, sizeof(out_result->last_0122), "<missing>");
    snprintf(out_result->last_0d22, sizeof(out_result->last_0d22), "<missing>");
    snprintf(out_result->last_6c22, sizeof(out_result->last_6c22), "<missing>");

    printf("[preview-attempt-03][phase-1-transition] begin causal transition driving\n");
    started_ms = preview_now_ms();
    deadline_ms = started_ms + phase_timeout_ms;

    while (1)
    {
        uint8_t response_0c22[8];
        uint8_t response_6b22[8];
        uint8_t response_0122[8];
        uint8_t response_0d22[8];
        uint8_t response_6c22[8];
        size_t response_0c22_length = 0U;
        size_t response_6b22_length = 0U;
        size_t response_0122_length = 0U;
        size_t response_0d22_length = 0U;
        size_t response_6c22_length = 0U;
        char failure_message[256];

        iteration++;
        if (iteration > iteration_cap)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-1 transition gate not satisfied before iteration cap (iter_cap=%u last_0c22=%s last_6b22=%s last_0122=%s last_0d22=%s last_6c22=%s writes=[0c00:%s,0d01-pre:%s,gpio-profile:%s,6c10-pre:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s])",
                iteration_cap,
                out_result->last_0c22,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->wrote_0c00 ? "yes" : "no",
                out_result->wrote_0d01_pre ? "yes" : "no",
                out_result->applied_gl847_gpio_profile ? "yes" : "no",
                out_result->prepared_6c_gpio10_high ? "yes" : "no",
                out_result->wrote_6b87 ? "yes" : "no",
                out_result->wrote_0141 ? "yes" : "no",
                out_result->wrote_0d01 ? "yes" : "no",
                out_result->wrote_0fff ? "yes" : "no",
                out_result->wrote_0140 ? "yes" : "no",
                out_result->wrote_6cf0 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (preview_now_ms() >= deadline_ms)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-1 transition gate timed out (limit=%llu ms last_0c22=%s last_6b22=%s last_0122=%s last_0d22=%s last_6c22=%s writes=[0c00:%s,0d01-pre:%s,gpio-profile:%s,6c10-pre:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s])",
                (unsigned long long)phase_timeout_ms,
                out_result->last_0c22,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->wrote_0c00 ? "yes" : "no",
                out_result->wrote_0d01_pre ? "yes" : "no",
                out_result->applied_gl847_gpio_profile ? "yes" : "no",
                out_result->prepared_6c_gpio10_high ? "yes" : "no",
                out_result->wrote_6b87 ? "yes" : "no",
                out_result->wrote_0141 ? "yes" : "no",
                out_result->wrote_0d01 ? "yes" : "no",
                out_result->wrote_0fff ? "yes" : "no",
                out_result->wrote_0140 ? "yes" : "no",
                out_result->wrote_6cf0 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (!out_result->applied_gl847_gpio_profile &&
            out_result->wrote_0d01_pre)
        {
            /* Mirror gl847_init_gpio() for GPO_CANONLIDE200: stabilize REG6B/6C/6D/6E/6F before start edges. */
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6EFFGpioProfilePrimeStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6C00GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6B02GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6CF9GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6D20GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6EFFGpioProfileFinalStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6F00GpioProfileStep))
            {
                return 0;
            }
            out_result->applied_gl847_gpio_profile = 1;
            out_result->prepared_6c_gpio10_high = 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[0],
                response_0c22,
                sizeof(response_0c22),
                &response_0c22_length,
                out_result->last_0c22,
                sizeof(out_result->last_0c22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[1],
                response_6b22,
                sizeof(response_6b22),
                &response_6b22_length,
                out_result->last_6b22,
                sizeof(out_result->last_6b22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[2],
                response_0122,
                sizeof(response_0122),
                &response_0122_length,
                out_result->last_0122,
                sizeof(out_result->last_0122)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[3],
                response_0d22,
                sizeof(response_0d22),
                &response_0d22_length,
                out_result->last_0d22,
                sizeof(out_result->last_0d22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[4],
                response_6c22,
                sizeof(response_6c22),
                &response_6c22_length,
                out_result->last_6c22,
                sizeof(out_result->last_6c22)))
        {
            return 0;
        }

        if (!out_result->wrote_0c00 &&
            preview_response_is_two_byte_value(response_0c22, response_0c22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0C00Step))
            {
                return 0;
            }
            out_result->wrote_0c00 = 1;
        }

        if (!out_result->wrote_0d01_pre &&
            out_result->wrote_0c00 &&
            preview_response_is_two_byte_value(response_0d22, response_0d22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0D01PreStep))
            {
                return 0;
            }
            out_result->wrote_0d01_pre = 1;
        }

        if (!out_result->wrote_6b87 &&
            out_result->wrote_0d01_pre &&
            out_result->applied_gl847_gpio_profile &&
            (preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x00U, 0x55U) ||
             preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x02U, 0x55U) ||
             preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U)))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6B87Step))
            {
                return 0;
            }
            out_result->wrote_6b87 = 1;
        }

        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF1U, 0x55U))
        {
            out_result->seen_6c22_f155 = 1;
        }
        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF0U, 0x55U))
        {
            out_result->seen_6c22_f055 = 1;
        }

        if (!out_result->prepared_6c_gpio10_high &&
            out_result->wrote_0d01_pre &&
            preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U) &&
            response_6c22_length == 2U &&
            response_6c22[1] == 0x55U)
        {
            if ((response_6c22[0] & kPreview03Reg6CGpio10Mask) != 0U)
            {
                out_result->prepared_6c_gpio10_high = 1;
            }
            else
            {
                uint8_t written_reg6c = response_6c22[0];
                if (!preview_run_phase1_reg6c_gpio10_write(
                        target_handle,
                        state,
                        iteration,
                        kPreview03Write6CGpio10PreArmFrame,
                        response_6c22[0],
                        1,
                        &written_reg6c))
                {
                    return 0;
                }
                out_result->prepared_6c_gpio10_high =
                    (written_reg6c & kPreview03Reg6CGpio10Mask) != 0U;
            }
        }

        if (!out_result->wrote_6cf0 &&
            out_result->prepared_6c_gpio10_high &&
            response_6c22_length == 2U &&
            response_6c22[1] == 0x55U &&
            (response_6c22[0] & kPreview03Reg6CGpio10Mask) != 0U &&
            (out_result->seen_6c22_f155 ||
             (out_result->wrote_0d01_pre &&
              /* Keep 6C consume edge tied to the latched 6B path; iter=1 writes at 6B22=0055 were accepted but inert. */
              preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U) &&
              /* Consume once 6B has latched and GPIO10 is high; do not hard-code one REG6C image. */
              response_6c22[1] == 0x55U)))
        {
            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u 6cf0 trigger: gate met (6b22=%s 0122=%s 0d22=%s 6c22=%s seen_f155=%s mode=literal-6cf0)\n",
                iteration,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->seen_6c22_f155 ? "yes" : "no");
            if (!preview_run_phase1_reg6c_gpio10_write(
                    target_handle,
                    state,
                    iteration,
                    kPreview03Write6CF0Step.frame_number,
                    response_6c22[0],
                    0,
                    NULL))
            {
                return 0;
            }
            out_result->wrote_6cf0 = 1;
        }

        if (!out_result->wrote_0140)
        {
            const int response_0122_ready =
                preview_response_is_two_byte_value(response_0122, response_0122_length, 0x41U, 0x55U) ||
                preview_response_is_two_byte_value(response_0122, response_0122_length, 0x40U, 0x55U);
            const int response_6b22_ready =
                preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U);

            out_result->attempts_0140++;

            if (!out_result->wrote_0d01_pre)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: 0d01-pre not emitted yet\n",
                    iteration);
            }
            else if (!response_6b22_ready)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: 0x6B22 not latched (0x6B22=%s)\n",
                    iteration,
                    out_result->last_6b22);
            }
            else if (!response_0122_ready)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: 0x0122 not ready (0x0122=%s)\n",
                    iteration,
                    out_result->last_0122);
            }
            else if (!out_result->wrote_6cf0)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: waiting for 6cf0 (0x6C22=%s)\n",
                    iteration,
                    out_result->last_6c22);
            }
            else
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 emit reason: pre-kickoff gate met (0d01-pre=yes 6b22=%s 0122=%s 6c22=%s 6cf0=yes 0fff=%s attempts=%u)\n",
                    iteration,
                    out_result->last_6b22,
                    out_result->last_0122,
                    out_result->last_6c22,
                    out_result->wrote_0fff ? "yes" : "no",
                    out_result->attempts_0140);
                if (!preview_run_state_write_step(
                        target_handle,
                        state,
                        "phase-1-transition",
                        iteration,
                        &kPreview03Write0140Step))
                {
                    return 0;
                }
                out_result->wrote_0140 = 1;
                out_result->emitted_0140_iteration = iteration;
                if (!preview03_log_post_0140_status_snapshots(
                        target_handle,
                        state,
                        iteration,
                        out_result))
                {
                    return 0;
                }
            }
        }
        else if (!out_result->logged_0140_retry_policy)
        {
            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u 0140 retry policy: single-shot (emitted_iter=%u retries=disabled)\n",
                iteration,
                out_result->emitted_0140_iteration);
            out_result->logged_0140_retry_policy = 1;
        }

        if (out_result->wrote_0140 &&
            out_result->wrote_0d01_pre &&
            out_result->wrote_6cf0 &&
            !out_result->wrote_0141 &&
            /* Keep kickoff writes after the pre-kickoff 6cf0->0140 window. */
            preview_response_is_two_byte_value(response_0122, response_0122_length, 0x40U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0141Step))
            {
                return 0;
            }
            out_result->wrote_0141 = 1;
        }

        if (out_result->wrote_0141 &&
            !out_result->wrote_0d01 &&
            preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U) &&
            preview_response_is_two_byte_value(response_0d22, response_0d22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0D01Step))
            {
                return 0;
            }
            out_result->wrote_0d01 = 1;
        }

        if (out_result->wrote_0d01 && !out_result->wrote_0fff)
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0FFFStep))
            {
                return 0;
            }
            out_result->wrote_0fff = 1;
        }

        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u summary 0c22=%s 6b22=%s 0122=%s 0d22=%s 6c22=%s writes=[0c00:%s,0d01-pre:%s,gpio-profile:%s,6c10-pre:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s] seen_6c22_f155=%s seen_6c22_f055=%s 0140_attempts=%u 0140_emitted_iter=%u post0140_snapshots=%u\n",
            iteration,
            out_result->last_0c22,
            out_result->last_6b22,
            out_result->last_0122,
            out_result->last_0d22,
            out_result->last_6c22,
            out_result->wrote_0c00 ? "yes" : "no",
            out_result->wrote_0d01_pre ? "yes" : "no",
            out_result->applied_gl847_gpio_profile ? "yes" : "no",
            out_result->prepared_6c_gpio10_high ? "yes" : "no",
            out_result->wrote_6b87 ? "yes" : "no",
            out_result->wrote_0141 ? "yes" : "no",
            out_result->wrote_0d01 ? "yes" : "no",
            out_result->wrote_0fff ? "yes" : "no",
            out_result->wrote_0140 ? "yes" : "no",
            out_result->wrote_6cf0 ? "yes" : "no",
            out_result->seen_6c22_f155 ? "yes" : "no",
            out_result->seen_6c22_f055 ? "yes" : "no",
            out_result->attempts_0140,
            out_result->emitted_0140_iteration,
            out_result->post_0140_snapshot_count);

        if (out_result->wrote_0c00 &&
            out_result->wrote_6b87 &&
            out_result->wrote_0141 &&
            out_result->wrote_0d01 &&
            out_result->wrote_0fff &&
            out_result->wrote_0140 &&
            out_result->seen_6c22_f055)
        {
            break;
        }
    }

    printf(
        "[preview-attempt-03][phase-1-transition] complete elapsed_ms=%llu last_6c22=%s\n",
        (unsigned long long)(preview_now_ms() - started_ms),
        out_result->last_6c22);
    return 1;
}
