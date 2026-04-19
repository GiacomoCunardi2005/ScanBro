#include "preview_attempt_preamble.h"

#include <string.h>

#include "preview_attempt_data.h"
#include "preview_attempt_io.h"

int preview_run_preamble_sequence(
    libusb_device_handle *target_handle,
    preview_runtime_state *state)
{
    size_t step_index;

    for (step_index = 0; step_index < kPreviewInitialControlStepCount; ++step_index)
    {
        if (!preview_run_control_step(target_handle, state, &kPreviewInitialControlSteps[step_index]))
        {
            return 0;
        }
    }

    for (step_index = 0; step_index < kPreviewTransitionControlStepCount; ++step_index)
    {
        if (!preview_run_control_step(target_handle, state, &kPreviewTransitionControlSteps[step_index]))
        {
            return 0;
        }
    }

    for (step_index = 0; step_index < kPreviewBulkPairCount; ++step_index)
    {
        preview_control_step control_step;

        memset(&control_step, 0, sizeof(control_step));
        control_step.frame_number = kPreviewBulkPairs[step_index].control_frame;
        control_step.is_in = 0;
        control_step.request = 0x04;
        control_step.value = 0x0082U;
        control_step.index = 0x0001U;
        control_step.length = 8U;
        control_step.payload_hex = kPreviewBulkPairs[step_index].control_payload_hex;

        if (!preview_run_control_step(target_handle, state, &control_step))
        {
            return 0;
        }

        if (!preview_run_bulk_out_step(
                target_handle,
                state,
                kPreviewBulkPairs[step_index].bulk_frame,
                kPreviewBulkPairs[step_index].bulk_payload_hex))
        {
            return 0;
        }
    }

    return 1;
}
