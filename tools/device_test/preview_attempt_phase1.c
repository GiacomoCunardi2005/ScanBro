#include "preview_attempt_phase1.h"

#include <string.h>

#if defined(_WIN32)
#include <windows.h>
#else
#include <unistd.h>
#endif

#include "preview_attempt_data.h"
#include "preview_attempt_io.h"

static void preview03_sleep_ms(unsigned int milliseconds)
{
#if defined(_WIN32)
    Sleep(milliseconds);
#else
    usleep((useconds_t)(milliseconds * 1000U));
#endif
}

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
    int post_6cf0_window_complete = 0;
    unsigned int post_6cf0_window_attempts = 0U;
    int pre_6c22_prime_attempted = 0;

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
            const preview_state_write_step *gpio_profile_steps[] = {
                &kPreview03Write6EFFGpioProfilePrimeStep,
                &kPreview03Write6C00GpioProfileStep,
                &kPreview03Write6B02GpioProfileStep,
                &kPreview03Write6CF9GpioProfileStep,
                &kPreview03Write6D20GpioProfileStep,
                &kPreview03Write6EFFGpioProfileFinalStep,
                &kPreview03Write6F00GpioProfileStep};
            const size_t gpio_profile_step_count =
                sizeof(gpio_profile_steps) / sizeof(gpio_profile_steps[0]);
            size_t gpio_profile_step_index;
            preview_state_poll_step pre_6c_poll_4b22;
            preview_state_poll_step pre_6c_poll_4c22;
            preview_state_poll_step pre_6c_poll_4d22;
            preview_state_poll_step post_gpio_poll_0b22;
            preview_state_poll_step post_gpio_poll_6b22;
            preview_state_poll_step post_gpio_poll_6c22;
            uint8_t response_4b22[8];
            uint8_t response_4c22[8];
            uint8_t response_4d22[8];
            uint8_t response_post_0b22[8];
            uint8_t response_post_6b22[8];
            uint8_t response_post_6c22[8];
            size_t response_4b22_length = 0U;
            size_t response_4c22_length = 0U;
            size_t response_4d22_length = 0U;
            size_t response_post_0b22_length = 0U;
            size_t response_post_6b22_length = 0U;
            size_t response_post_6c22_length = 0U;
            char response_4b22_hex[32];
            char response_4c22_hex[32];
            char response_4d22_hex[32];
            char response_post_0b22_hex[32];
            char response_post_6b22_hex[32];
            char response_post_6c22_hex[32];

            memset(&pre_6c_poll_4b22, 0, sizeof(pre_6c_poll_4b22));
            pre_6c_poll_4b22.frame_number = 2637U;
            pre_6c_poll_4b22.index = 0x4B22U;
            pre_6c_poll_4b22.label = "pre-6c 0x4B22";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &pre_6c_poll_4b22,
                    response_4b22,
                    sizeof(response_4b22),
                    &response_4b22_length,
                    response_4b22_hex,
                    sizeof(response_4b22_hex)))
            {
                return 0;
            }

            memset(&pre_6c_poll_4c22, 0, sizeof(pre_6c_poll_4c22));
            pre_6c_poll_4c22.frame_number = 2639U;
            pre_6c_poll_4c22.index = 0x4C22U;
            pre_6c_poll_4c22.label = "pre-6c 0x4C22";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &pre_6c_poll_4c22,
                    response_4c22,
                    sizeof(response_4c22),
                    &response_4c22_length,
                    response_4c22_hex,
                    sizeof(response_4c22_hex)))
            {
                return 0;
            }

            memset(&pre_6c_poll_4d22, 0, sizeof(pre_6c_poll_4d22));
            pre_6c_poll_4d22.frame_number = 2641U;
            pre_6c_poll_4d22.index = 0x4D22U;
            pre_6c_poll_4d22.label = "pre-6c 0x4D22";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &pre_6c_poll_4d22,
                    response_4d22,
                    sizeof(response_4d22),
                    &response_4d22_length,
                    response_4d22_hex,
                    sizeof(response_4d22_hex)))
            {
                return 0;
            }

            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u pre-6c poll summary 4b22=%s 4c22=%s 4d22=%s\n",
                iteration,
                response_4b22_hex,
                response_4c22_hex,
                response_4d22_hex);

            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u applying GL847 gpio-profile writes before first legal 6cf0 window\n",
                iteration);
            for (gpio_profile_step_index = 0U;
                 gpio_profile_step_index < gpio_profile_step_count;
                 ++gpio_profile_step_index)
            {
                if (!preview_run_state_write_step(
                        target_handle,
                        state,
                        "phase-1-transition",
                        iteration,
                        gpio_profile_steps[gpio_profile_step_index]))
                {
                    return 0;
                }
            }

            memset(&post_gpio_poll_0b22, 0, sizeof(post_gpio_poll_0b22));
            post_gpio_poll_0b22.frame_number = 2642U;
            post_gpio_poll_0b22.index = 0x0B22U;
            post_gpio_poll_0b22.label = "post-gpio-profile 0x0B22";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &post_gpio_poll_0b22,
                    response_post_0b22,
                    sizeof(response_post_0b22),
                    &response_post_0b22_length,
                    response_post_0b22_hex,
                    sizeof(response_post_0b22_hex)))
            {
                return 0;
            }

            memset(&post_gpio_poll_6b22, 0, sizeof(post_gpio_poll_6b22));
            post_gpio_poll_6b22.frame_number = 2643U;
            post_gpio_poll_6b22.index = 0x6B22U;
            post_gpio_poll_6b22.label = "post-gpio-profile 0x6B22";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &post_gpio_poll_6b22,
                    response_post_6b22,
                    sizeof(response_post_6b22),
                    &response_post_6b22_length,
                    response_post_6b22_hex,
                    sizeof(response_post_6b22_hex)))
            {
                return 0;
            }

            memset(&post_gpio_poll_6c22, 0, sizeof(post_gpio_poll_6c22));
            post_gpio_poll_6c22.frame_number = 2644U;
            post_gpio_poll_6c22.index = 0x6C22U;
            post_gpio_poll_6c22.label = "post-gpio-profile 0x6C22";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &post_gpio_poll_6c22,
                    response_post_6c22,
                    sizeof(response_post_6c22),
                    &response_post_6c22_length,
                    response_post_6c22_hex,
                    sizeof(response_post_6c22_hex)))
            {
                return 0;
            }

            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u post-gpio-profile snapshot 0b22=%s 6b22=%s 6c22=%s\n",
                iteration,
                response_post_0b22_hex,
                response_post_6b22_hex,
                response_post_6c22_hex);

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

        if (!pre_6c22_prime_attempted &&
            out_result->wrote_0d01_pre &&
            out_result->wrote_6b87 &&
            response_6c22_length == 2U &&
            response_6c22[1] == 0x55U)
        {
            preview_state_poll_step pre_prime_poll_a;
            preview_state_poll_step pre_prime_poll_b;
            uint8_t response_pre_prime_a[8];
            uint8_t response_pre_prime_b[8];
            size_t response_pre_prime_a_length = 0U;
            size_t response_pre_prime_b_length = 0U;
            char response_pre_prime_a_hex[32];
            char response_pre_prime_b_hex[32];

            pre_6c22_prime_attempted = 1;
            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u pre-6cf0 prime attempt: replaying capture window 2515/2517/2519/2521 from current_6c22=%s\n",
                iteration,
                out_result->last_6c22);

            memset(&pre_prime_poll_a, 0, sizeof(pre_prime_poll_a));
            pre_prime_poll_a.frame_number = 2515U;
            pre_prime_poll_a.index = 0x6C22U;
            pre_prime_poll_a.label = "pre-6cf0 0x6C22 (2515)";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &pre_prime_poll_a,
                    response_pre_prime_a,
                    sizeof(response_pre_prime_a),
                    &response_pre_prime_a_length,
                    response_pre_prime_a_hex,
                    sizeof(response_pre_prime_a_hex)))
            {
                return 0;
            }

            if (preview_response_is_two_byte_value(
                    response_pre_prime_a,
                    response_pre_prime_a_length,
                    0xF1U,
                    0x55U))
            {
                out_result->seen_6c22_f155 = 1;
            }
            if (preview_response_is_two_byte_value(
                    response_pre_prime_a,
                    response_pre_prime_a_length,
                    0xF0U,
                    0x55U))
            {
                out_result->seen_6c22_f055 = 1;
            }

            if (response_pre_prime_a_length == 2U && response_pre_prime_a[1] == 0x55U)
            {
                if (!preview_run_phase1_reg6c_gpio10_write(
                        target_handle,
                        state,
                        iteration,
                        2517U,
                        response_pre_prime_a[0],
                        0,
                        NULL))
                {
                    return 0;
                }
            }

            memset(&pre_prime_poll_b, 0, sizeof(pre_prime_poll_b));
            pre_prime_poll_b.frame_number = 2519U;
            pre_prime_poll_b.index = 0x6C22U;
            pre_prime_poll_b.label = "pre-6cf0 0x6C22 (2519)";
            if (!preview_poll_state_register(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &pre_prime_poll_b,
                    response_pre_prime_b,
                    sizeof(response_pre_prime_b),
                    &response_pre_prime_b_length,
                    response_pre_prime_b_hex,
                    sizeof(response_pre_prime_b_hex)))
            {
                return 0;
            }

            if (preview_response_is_two_byte_value(
                    response_pre_prime_b,
                    response_pre_prime_b_length,
                    0xF1U,
                    0x55U))
            {
                out_result->seen_6c22_f155 = 1;
            }
            if (preview_response_is_two_byte_value(
                    response_pre_prime_b,
                    response_pre_prime_b_length,
                    0xF0U,
                    0x55U))
            {
                out_result->seen_6c22_f055 = 1;
            }

            if (response_pre_prime_b_length == 2U && response_pre_prime_b[1] == 0x55U)
            {
                if (!preview_run_phase1_reg6c_gpio10_write(
                        target_handle,
                        state,
                        iteration,
                        2521U,
                        response_pre_prime_b[0],
                        0,
                        NULL))
                {
                    return 0;
                }
            }

            snprintf(out_result->last_6c22, sizeof(out_result->last_6c22), "%s", response_pre_prime_b_hex);
            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u pre-6cf0 prime summary 2515=%s 2519=%s seen_f155=%s seen_f055=%s\n",
                iteration,
                response_pre_prime_a_hex,
                response_pre_prime_b_hex,
                out_result->seen_6c22_f155 ? "yes" : "no",
                out_result->seen_6c22_f055 ? "yes" : "no");
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

        {
            const int reg6c_status_valid = (response_6c22_length == 2U && response_6c22[1] == 0x55U);
            const int reg6c_hw_ready =
                reg6c_status_valid &&
                ((response_6c22[0] & 0x80U) != 0U);
            const int response_6b22_latched =
                preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U);

            if (!out_result->wrote_6cf0 &&
                out_result->prepared_6c_gpio10_high &&
                response_6b22_latched &&
                reg6c_hw_ready)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 6cf0 trigger: gate met (6b22=%s 0122=%s 0d22=%s 6c22=%s mode=ghidra-reg6c-bit7)\n",
                    iteration,
                    out_result->last_6b22,
                    out_result->last_0122,
                    out_result->last_0d22,
                    out_result->last_6c22);
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
            else if (!out_result->wrote_6cf0 &&
                     out_result->prepared_6c_gpio10_high &&
                     response_6b22_latched &&
                     reg6c_status_valid)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 6cf0 pending: REG6C status valid but not hw-ready (need bit7=1, current=%s)\n",
                    iteration,
                    out_result->last_6c22);
            }
        }

        if (out_result->wrote_6cf0 && !post_6cf0_window_complete)
        {
            const unsigned int max_attempts_per_iteration = 3U;
            unsigned int post_attempt;

            for (post_attempt = 0U;
                 post_attempt < max_attempts_per_iteration && !post_6cf0_window_complete;
                 ++post_attempt)
            {
                preview_state_poll_step post_6cf0_poll_4122;
                preview_state_poll_step post_6cf0_poll_0122;
                uint8_t response_4122[8];
                uint8_t response_0122_post[8];
                size_t response_4122_length = 0U;
                size_t response_0122_post_length = 0U;
                char response_4122_hex[32];
                char response_0122_post_hex[32];
                int response_4122_ready;
                int response_0122_ready;

                post_6cf0_window_attempts++;

                if (post_attempt > 0U)
                {
                    preview03_sleep_ms(1U);
                }

                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u post-6cf0 readiness poll attempt=%u\n",
                    iteration,
                    post_6cf0_window_attempts);

                memset(&post_6cf0_poll_4122, 0, sizeof(post_6cf0_poll_4122));
                post_6cf0_poll_4122.frame_number = 2649U;
                post_6cf0_poll_4122.index = 0x4122U;
                post_6cf0_poll_4122.label = "post-6cf0 0x4122";
                if (!preview_poll_state_register(
                        target_handle,
                        state,
                        "phase-1-transition",
                        iteration,
                        &post_6cf0_poll_4122,
                        response_4122,
                        sizeof(response_4122),
                        &response_4122_length,
                        response_4122_hex,
                        sizeof(response_4122_hex)))
                {
                    return 0;
                }

                memset(&post_6cf0_poll_0122, 0, sizeof(post_6cf0_poll_0122));
                post_6cf0_poll_0122.frame_number = 2651U;
                post_6cf0_poll_0122.index = 0x0122U;
                post_6cf0_poll_0122.label = "post-6cf0 0x0122";
                if (!preview_poll_state_register(
                        target_handle,
                        state,
                        "phase-1-transition",
                        iteration,
                        &post_6cf0_poll_0122,
                        response_0122_post,
                        sizeof(response_0122_post),
                        &response_0122_post_length,
                        response_0122_post_hex,
                        sizeof(response_0122_post_hex)))
                {
                    return 0;
                }

                memset(response_0122, 0, sizeof(response_0122));
                if (response_0122_post_length > sizeof(response_0122))
                {
                    preview_set_failure(state, "post-6cf0 0x0122 poll returned oversized response");
                    return 0;
                }
                memcpy(response_0122, response_0122_post, response_0122_post_length);
                response_0122_length = response_0122_post_length;
                snprintf(out_result->last_0122, sizeof(out_result->last_0122), "%s", response_0122_post_hex);

                response_4122_ready =
                    response_4122_length == 2U &&
                    response_4122[1] == 0x55U &&
                    ((response_4122[0] & 0x40U) != 0U) &&
                    ((response_4122[0] & 0x01U) == 0U);
                response_0122_ready =
                    preview_response_is_two_byte_value(response_0122_post, response_0122_post_length, 0x40U, 0x55U) ||
                    preview_response_is_two_byte_value(response_0122_post, response_0122_post_length, 0x41U, 0x55U);

                if (response_4122_ready && response_0122_ready)
                {
                    printf(
                        "[preview-attempt-03][phase-1-transition] iter=%u post-6cf0 readiness ready attempt=%u 4122=%s 0122=%s\n",
                        iteration,
                        post_6cf0_window_attempts,
                        response_4122_hex,
                        response_0122_post_hex);
                    post_6cf0_window_complete = 1;
                }
                else
                {
                    printf(
                        "[preview-attempt-03][phase-1-transition] iter=%u post-6cf0 readiness pending attempt=%u 4122=%s 0122=%s (need 4122 bit6=1 bit0=0, 0122=4055/4155 before 0140)\n",
                        iteration,
                        post_6cf0_window_attempts,
                        response_4122_hex,
                        response_0122_post_hex);
                }
            }
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
            else if (!post_6cf0_window_complete)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: waiting for post-6cf0 capture-window polls (0x6C22=%s)\n",
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
            out_result->wrote_6cf0)
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
