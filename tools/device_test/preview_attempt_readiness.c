#include "preview_attempt_readiness.h"

#include <string.h>

#include "preview_attempt_data.h"
#include "preview_attempt_io.h"

int preview03_run_readiness_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_readiness_result *out_result)
{
    unsigned int iteration = 0U;
    uint64_t started_ms;
    uint64_t deadline_ms;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    memset(out_result, 0, sizeof(*out_result));
    snprintf(out_result->last_4222, sizeof(out_result->last_4222), "<missing>");
    snprintf(out_result->last_4322, sizeof(out_result->last_4322), "<missing>");
    snprintf(out_result->last_4422, sizeof(out_result->last_4422), "<missing>");
    snprintf(out_result->last_4522, sizeof(out_result->last_4522), "<missing>");

    printf("[preview-attempt-03][phase-2-readiness] begin 0x4222..0x4522 readiness observation\n");
    started_ms = preview_now_ms();
    deadline_ms = started_ms + phase_timeout_ms;

    while (!(out_result->seen_4422_0e55 && out_result->seen_4522_7855))
    {
        uint8_t response_4222[8];
        uint8_t response_4322[8];
        uint8_t response_4422[8];
        uint8_t response_4522[8];
        size_t response_4222_length = 0U;
        size_t response_4322_length = 0U;
        size_t response_4422_length = 0U;
        size_t response_4522_length = 0U;
        char failure_message[256];

        iteration++;
        if (iteration > iteration_cap)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-2 readiness not satisfied before iteration cap (iter_cap=%u last_4222=%s last_4322=%s last_4422=%s last_4522=%s seen_4422_0e55=%s seen_4522_7855=%s)",
                iteration_cap,
                out_result->last_4222,
                out_result->last_4322,
                out_result->last_4422,
                out_result->last_4522,
                out_result->seen_4422_0e55 ? "yes" : "no",
                out_result->seen_4522_7855 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (preview_now_ms() >= deadline_ms)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-2 readiness timed out (limit=%llu ms last_4222=%s last_4322=%s last_4422=%s last_4522=%s seen_4422_0e55=%s seen_4522_7855=%s)",
                (unsigned long long)phase_timeout_ms,
                out_result->last_4222,
                out_result->last_4322,
                out_result->last_4422,
                out_result->last_4522,
                out_result->seen_4422_0e55 ? "yes" : "no",
                out_result->seen_4522_7855 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[0],
                response_4222,
                sizeof(response_4222),
                &response_4222_length,
                out_result->last_4222,
                sizeof(out_result->last_4222)))
        {
            return 0;
        }
        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[1],
                response_4322,
                sizeof(response_4322),
                &response_4322_length,
                out_result->last_4322,
                sizeof(out_result->last_4322)))
        {
            return 0;
        }
        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[2],
                response_4422,
                sizeof(response_4422),
                &response_4422_length,
                out_result->last_4422,
                sizeof(out_result->last_4422)))
        {
            return 0;
        }
        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[3],
                response_4522,
                sizeof(response_4522),
                &response_4522_length,
                out_result->last_4522,
                sizeof(out_result->last_4522)))
        {
            return 0;
        }

        if (!out_result->seen_4422_0e55 &&
            preview_response_is_two_byte_value(response_4422, response_4422_length, 0x0EU, 0x55U))
        {
            out_result->seen_4422_0e55 = 1;
            out_result->seen_4422_iteration = iteration;
        }

        if (!out_result->seen_4522_7855 &&
            preview_response_is_two_byte_value(response_4522, response_4522_length, 0x78U, 0x55U))
        {
            out_result->seen_4522_7855 = 1;
            out_result->seen_4522_iteration = iteration;
        }

        printf(
            "[preview-attempt-03][phase-2-readiness] iter=%u summary 4222=%s 4322=%s 4422=%s 4522=%s seen_4422_0e55=%s seen_4522_7855=%s\n",
            iteration,
            out_result->last_4222,
            out_result->last_4322,
            out_result->last_4422,
            out_result->last_4522,
            out_result->seen_4422_0e55 ? "yes" : "no",
            out_result->seen_4522_7855 ? "yes" : "no");
    }

    printf(
        "[preview-attempt-03][phase-2-readiness] complete first_seen_4422_iter=%u first_seen_4522_iter=%u elapsed_ms=%llu\n",
        out_result->seen_4422_iteration,
        out_result->seen_4522_iteration,
        (unsigned long long)(preview_now_ms() - started_ms));
    return 1;
}
