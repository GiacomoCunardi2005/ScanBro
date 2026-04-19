#include "preview_attempt_io.h"

#include <errno.h>
#include <string.h>
#include <time.h>

#include "preview_attempt_data.h"

static int decode_hex_nibble(char ch, uint8_t *out_value)
{
    if (ch >= '0' && ch <= '9')
    {
        *out_value = (uint8_t)(ch - '0');
        return 1;
    }

    if (ch >= 'a' && ch <= 'f')
    {
        *out_value = (uint8_t)(10 + (ch - 'a'));
        return 1;
    }

    if (ch >= 'A' && ch <= 'F')
    {
        *out_value = (uint8_t)(10 + (ch - 'A'));
        return 1;
    }

    return 0;
}

int decode_hex_string(
    const char *hex_text,
    uint8_t *out_buffer,
    size_t out_buffer_size,
    size_t *out_length)
{
    size_t text_length;
    size_t out_index = 0U;
    size_t in_index;

    if (hex_text == NULL || out_buffer == NULL || out_length == NULL)
    {
        return 0;
    }

    text_length = strlen(hex_text);
    if ((text_length % 2U) != 0U)
    {
        return 0;
    }

    if ((text_length / 2U) > out_buffer_size)
    {
        return 0;
    }

    for (in_index = 0U; in_index < text_length; in_index += 2U)
    {
        uint8_t high_nibble;
        uint8_t low_nibble;

        if (!decode_hex_nibble(hex_text[in_index], &high_nibble))
        {
            return 0;
        }

        if (!decode_hex_nibble(hex_text[in_index + 1U], &low_nibble))
        {
            return 0;
        }

        out_buffer[out_index++] = (uint8_t)((high_nibble << 4U) | low_nibble);
    }

    *out_length = out_index;
    return 1;
}

int ensure_preview_output_directory(void)
{
    errno = 0;
    if (SB_PREVIEW_MKDIR("data") == 0 || errno == EEXIST)
    {
        return 1;
    }

    perror("[preview-attempt] mkdir data");
    return 0;
}

static void preview_format_first_bytes_hex(
    const uint8_t *buffer,
    size_t length,
    char *out_text,
    size_t out_text_size)
{
    size_t index;
    size_t write_offset = 0U;

    if (out_text == NULL || out_text_size == 0U)
    {
        return;
    }

    if (buffer == NULL || length == 0U)
    {
        snprintf(out_text, out_text_size, "<none>");
        return;
    }

    out_text[0] = '\0';

    for (index = 0U; index < length; ++index)
    {
        int written = snprintf(
            out_text + write_offset,
            out_text_size - write_offset,
            (index == 0U) ? "%02X" : " %02X",
            buffer[index]);

        if (written < 0 || (size_t)written >= (out_text_size - write_offset))
        {
            out_text[out_text_size - 1U] = '\0';
            return;
        }

        write_offset += (size_t)written;
    }
}

static void preview_format_compact_hex(
    const uint8_t *buffer,
    size_t length,
    char *out_text,
    size_t out_text_size)
{
    size_t index;
    size_t write_offset = 0U;

    if (out_text == NULL || out_text_size == 0U)
    {
        return;
    }

    if (buffer == NULL || length == 0U)
    {
        snprintf(out_text, out_text_size, "<none>");
        return;
    }

    out_text[0] = '\0';

    for (index = 0U; index < length; ++index)
    {
        int written = snprintf(
            out_text + write_offset,
            out_text_size - write_offset,
            "%02X",
            buffer[index]);

        if (written < 0 || (size_t)written >= (out_text_size - write_offset))
        {
            out_text[out_text_size - 1U] = '\0';
            return;
        }

        write_offset += (size_t)written;
    }
}

size_t preview_count_non_zero_bytes(const uint8_t *buffer, size_t length)
{
    size_t index;
    size_t non_zero_count = 0U;

    if (buffer == NULL)
    {
        return 0U;
    }

    for (index = 0U; index < length; ++index)
    {
        if (buffer[index] != 0U)
        {
            non_zero_count++;
        }
    }

    return non_zero_count;
}

static void preview_log_payload_summary(
    const char *label,
    const uint8_t *buffer,
    size_t length)
{
    size_t index;
    size_t zero_bytes = 0U;
    size_t non_zero_bytes = 0U;
    size_t first_sample_length = length;
    char first_bytes_hex[96];

    if (first_sample_length > kPreviewSummarySampleBytes)
    {
        first_sample_length = kPreviewSummarySampleBytes;
    }

    preview_format_first_bytes_hex(buffer, first_sample_length, first_bytes_hex, sizeof(first_bytes_hex));

    for (index = 0U; index < length; ++index)
    {
        if (buffer[index] == 0U)
        {
            zero_bytes++;
        }
        else
        {
            non_zero_bytes++;
        }
    }

    printf(
        "[preview-attempt] %s bytes=%zu first32=%s zero_bytes=%zu non_zero_bytes=%zu\n",
        label,
        length,
        first_bytes_hex,
        zero_bytes,
        non_zero_bytes);
}

void preview_log_saved_file_summary(const char *path)
{
    FILE *file;
    uint8_t read_buffer[4096];
    uint8_t first_bytes[32];
    size_t first_bytes_length = 0U;
    size_t total_bytes = 0U;
    size_t zero_bytes = 0U;
    size_t non_zero_bytes = 0U;
    char first_bytes_hex[96];

    file = fopen(path, "rb");
    if (file == NULL)
    {
        fprintf(stderr, "[preview-attempt] saved-file summary failed: cannot open %s\n", path);
        return;
    }

    while (1)
    {
        size_t chunk_size = fread(read_buffer, 1U, sizeof(read_buffer), file);
        size_t index;

        if (chunk_size == 0U)
        {
            break;
        }

        for (index = 0U; index < chunk_size; ++index)
        {
            if (first_bytes_length < sizeof(first_bytes))
            {
                first_bytes[first_bytes_length++] = read_buffer[index];
            }

            if (read_buffer[index] == 0U)
            {
                zero_bytes++;
            }
            else
            {
                non_zero_bytes++;
            }
        }

        total_bytes += chunk_size;
    }

    if (ferror(file))
    {
        fclose(file);
        fprintf(stderr, "[preview-attempt] saved-file summary failed while reading %s\n", path);
        return;
    }

    fclose(file);

    preview_format_first_bytes_hex(first_bytes, first_bytes_length, first_bytes_hex, sizeof(first_bytes_hex));
    printf(
        "[preview-attempt] saved-file summary path=%s total_bytes=%zu first32=%s zero_bytes=%zu non_zero_bytes=%zu\n",
        path,
        total_bytes,
        first_bytes_hex,
        zero_bytes,
        non_zero_bytes);
}

void preview_set_failure(preview_runtime_state *state, const char *stage_text)
{
    if (state == NULL || stage_text == NULL)
    {
        return;
    }

    if (state->failure_stage[0] != '\0')
    {
        return;
    }

    snprintf(state->failure_stage, sizeof(state->failure_stage), "%s", stage_text);
}

int preview_record_transfer(preview_runtime_state *state, const char *stage_text)
{
    if (state->total_transfers >= kPreviewMaxTotalTransfers)
    {
        char message[256];
        snprintf(
            message,
            sizeof(message),
            "transfer cap reached before %s (max total transfers=%u)",
            stage_text,
            kPreviewMaxTotalTransfers);
        preview_set_failure(state, message);
        return 0;
    }

    state->total_transfers++;
    return 1;
}

int preview_record_bulk_in_transfer(preview_runtime_state *state, const char *stage_text)
{
    if (state->bulk_in_transfers >= kPreviewMaxBulkInTransfers)
    {
        char message[256];
        snprintf(
            message,
            sizeof(message),
            "bulk IN transfer cap reached before %s (max bulk IN transfers=%u)",
            stage_text,
            kPreviewMaxBulkInTransfers);
        preview_set_failure(state, message);
        return 0;
    }

    state->bulk_in_transfers++;
    return 1;
}

int preview_run_control_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const preview_control_step *step)
{
    char stage_label[192];
    int status;

    if (step->is_in)
    {
        uint8_t response_buffer[64];

        if (step->length > (uint16_t)sizeof(response_buffer))
        {
            snprintf(
                stage_label,
                sizeof(stage_label),
                "frame %u control IN response buffer too small",
                step->frame_number);
            preview_set_failure(state, stage_label);
            return 0;
        }

        snprintf(
            stage_label,
            sizeof(stage_label),
            "frame %u control IN request=0x%02x value=0x%04x index=0x%04x len=%u",
            step->frame_number,
            step->request,
            step->value,
            step->index,
            step->length);

        if (!preview_record_transfer(state, stage_label))
        {
            return 0;
        }

        printf("[preview-attempt] %s\n", stage_label);

        status = sb_usb_vendor_control_in(
            target_handle,
            step->request,
            step->value,
            step->index,
            response_buffer,
            step->length,
            kTransferTimeoutMs);

        if (status < 0)
        {
            preview_set_failure(state, stage_label);
            return 0;
        }

        return 1;
    }
    else
    {
        uint8_t payload_buffer[1024];
        size_t payload_length = 0U;

        if (step->payload_hex == NULL)
        {
            snprintf(
                stage_label,
                sizeof(stage_label),
                "frame %u control OUT payload missing",
                step->frame_number);
            preview_set_failure(state, stage_label);
            return 0;
        }

        if (!decode_hex_string(step->payload_hex, payload_buffer, sizeof(payload_buffer), &payload_length))
        {
            snprintf(
                stage_label,
                sizeof(stage_label),
                "frame %u control OUT payload decode failed",
                step->frame_number);
            preview_set_failure(state, stage_label);
            return 0;
        }

        if (payload_length != step->length)
        {
            snprintf(
                stage_label,
                sizeof(stage_label),
                "frame %u control OUT length mismatch expected=%u actual=%zu",
                step->frame_number,
                step->length,
                payload_length);
            preview_set_failure(state, stage_label);
            return 0;
        }

        snprintf(
            stage_label,
            sizeof(stage_label),
            "frame %u control OUT request=0x%02x value=0x%04x index=0x%04x len=%u",
            step->frame_number,
            step->request,
            step->value,
            step->index,
            step->length);

        if (!preview_record_transfer(state, stage_label))
        {
            return 0;
        }

        printf("[preview-attempt] %s\n", stage_label);

        status = sb_usb_vendor_control_out(
            target_handle,
            step->request,
            step->value,
            step->index,
            payload_buffer,
            step->length,
            kTransferTimeoutMs);

        if (status < 0)
        {
            preview_set_failure(state, stage_label);
            return 0;
        }

        return 1;
    }
}

static int preview_run_control_in_step_with_capture_unbounded(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const preview_control_step *step,
    uint8_t *out_response,
    size_t out_response_size,
    size_t *out_response_length)
{
    uint8_t response_buffer[64];
    int status;
    char stage_label[192];

    if (step == NULL || out_response == NULL || out_response_length == NULL)
    {
        return 0;
    }

    if (!step->is_in)
    {
        preview_set_failure(state, "control IN capture helper used with OUT step");
        return 0;
    }

    if (step->length > (uint16_t)sizeof(response_buffer))
    {
        snprintf(
            stage_label,
            sizeof(stage_label),
            "frame %u control IN response buffer too small",
            step->frame_number);
        preview_set_failure(state, stage_label);
        return 0;
    }

    snprintf(
        stage_label,
        sizeof(stage_label),
        "frame %u control IN request=0x%02x value=0x%04x index=0x%04x len=%u",
        step->frame_number,
        step->request,
        step->value,
        step->index,
        step->length);

    printf("[preview-attempt] %s\n", stage_label);

    status = sb_usb_vendor_control_in(
        target_handle,
        step->request,
        step->value,
        step->index,
        response_buffer,
        step->length,
        kTransferTimeoutMs);

    if (status < 0)
    {
        preview_set_failure(state, stage_label);
        return 0;
    }

    if ((size_t)status > out_response_size)
    {
        preview_set_failure(state, "control IN capture output buffer too small");
        return 0;
    }

    memcpy(out_response, response_buffer, (size_t)status);
    *out_response_length = (size_t)status;
    return 1;
}

uint64_t preview_now_ms(void)
{
    struct timespec now;
    if (timespec_get(&now, TIME_UTC) != TIME_UTC)
    {
        return 0U;
    }

    return ((uint64_t)now.tv_sec * 1000U) + ((uint64_t)now.tv_nsec / 1000000U);
}

int preview_response_is_two_byte_value(
    const uint8_t *response,
    size_t response_length,
    uint8_t byte0,
    uint8_t byte1)
{
    return response != NULL &&
           response_length == 2U &&
           response[0] == byte0 &&
           response[1] == byte1;
}

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
    size_t out_response_hex_size)
{
    preview_control_step poll_step;
    char failure_message[256];

    if (target_handle == NULL ||
        state == NULL ||
        phase_label == NULL ||
        poll_spec == NULL ||
        out_response == NULL ||
        out_response_length == NULL ||
        out_response_hex == NULL)
    {
        return 0;
    }

    memset(&poll_step, 0, sizeof(poll_step));
    memset(out_response, 0, out_response_size);
    *out_response_length = 0U;
    snprintf(out_response_hex, out_response_hex_size, "<none>");

    poll_step.frame_number = poll_spec->frame_number;
    poll_step.is_in = 1;
    poll_step.request = 0x04;
    poll_step.value = 0x008EU;
    poll_step.index = poll_spec->index;
    poll_step.length = 2U;
    poll_step.payload_hex = NULL;

    if (!preview_run_control_in_step_with_capture_unbounded(
            target_handle,
            state,
            &poll_step,
            out_response,
            out_response_size,
            out_response_length))
    {
        return 0;
    }

    preview_format_compact_hex(out_response, *out_response_length, out_response_hex, out_response_hex_size);

    if (*out_response_length != 2U)
    {
        snprintf(
            failure_message,
            sizeof(failure_message),
            "%s poll returned unexpected length (index=0x%04X actual=%zu expected=2)",
            phase_label,
            poll_spec->index,
            *out_response_length);
        preview_set_failure(state, failure_message);
        return 0;
    }

    printf(
        "[preview-attempt-03][%s] iter=%u frame=%u %s response=%s\n",
        phase_label,
        iteration,
        poll_spec->frame_number,
        poll_spec->label,
        out_response_hex);
    return 1;
}

int preview_run_state_write_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    const char *phase_label,
    unsigned int iteration,
    const preview_state_write_step *write_spec)
{
    preview_control_step write_step;

    if (target_handle == NULL ||
        state == NULL ||
        phase_label == NULL ||
        write_spec == NULL)
    {
        return 0;
    }

    memset(&write_step, 0, sizeof(write_step));
    write_step.frame_number = write_spec->frame_number;
    write_step.is_in = 0;
    write_step.request = write_spec->request;
    write_step.value = write_spec->value;
    write_step.index = write_spec->index;
    write_step.length = write_spec->length;
    write_step.payload_hex = write_spec->payload_hex;

    printf(
        "[preview-attempt-03][%s] iter=%u frame=%u action=%s payload=%s\n",
        phase_label,
        iteration,
        write_spec->frame_number,
        write_spec->label,
        write_spec->payload_hex);

    return preview_run_control_step(target_handle, state, &write_step);
}

int preview_run_phase1_reg6c_gpio10_write(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int iteration,
    unsigned int frame_number,
    uint8_t source_reg6c,
    int set_gpio10,
    uint8_t *out_written_reg6c)
{
    preview_control_step write_step;
    char payload_hex[5];
    const char *action_label = NULL;
    uint8_t next_reg6c = 0U;

    if (target_handle == NULL || state == NULL)
    {
        return 0;
    }

    if (set_gpio10)
    {
        action_label = "write 6c gpio10 pre-arm (rmw set)";
        next_reg6c = (uint8_t)(source_reg6c | kPreview03Reg6CGpio10Mask);
    }
    else
    {
        /* Capture at frame 2645 carries literal payload 6cf0 on the consume edge. */
        action_label = "write 6cf0 (capture-literal consume)";
        next_reg6c = 0xF0U;
    }

    snprintf(payload_hex, sizeof(payload_hex), "6c%02x", (unsigned int)next_reg6c);

    memset(&write_step, 0, sizeof(write_step));
    write_step.frame_number = frame_number;
    write_step.is_in = 0;
    write_step.request = 0x04U;
    write_step.value = 0x0083U;
    write_step.index = 0x0000U;
    write_step.length = 2U;
    write_step.payload_hex = payload_hex;

    printf(
        "[preview-attempt-03][phase-1-transition] iter=%u frame=%u action=%s payload=%s source_6c=0x%02x\n",
        iteration,
        frame_number,
        action_label,
        payload_hex,
        source_reg6c);

    if (!preview_run_control_step(target_handle, state, &write_step))
    {
        return 0;
    }

    if (out_written_reg6c != NULL)
    {
        *out_written_reg6c = next_reg6c;
    }

    return 1;
}

int preview_run_bulk_out_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int frame_number,
    const char *payload_hex)
{
    uint8_t payload_buffer[1024];
    size_t payload_length = 0U;
    int status;
    int transferred = 0;
    char stage_label[192];

    if (!decode_hex_string(payload_hex, payload_buffer, sizeof(payload_buffer), &payload_length))
    {
        snprintf(stage_label, sizeof(stage_label), "frame %u bulk OUT payload decode failed", frame_number);
        preview_set_failure(state, stage_label);
        return 0;
    }

    snprintf(
        stage_label,
        sizeof(stage_label),
        "frame %u bulk OUT endpoint=0x%02x len=%zu",
        frame_number,
        SB_CANON_EP_BULK_OUT,
        payload_length);

    if (!preview_record_transfer(state, stage_label))
    {
        return 0;
    }

    printf("[preview-attempt] %s\n", stage_label);

    status = libusb_bulk_transfer(
        target_handle,
        SB_CANON_EP_BULK_OUT,
        payload_buffer,
        (int)payload_length,
        &transferred,
        kTransferTimeoutMs);

    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("preview bulk OUT", status);
        preview_set_failure(state, stage_label);
        return 0;
    }

    if (transferred != (int)payload_length)
    {
        snprintf(
            stage_label,
            sizeof(stage_label),
            "frame %u bulk OUT short transfer expected=%zu actual=%d",
            frame_number,
            payload_length,
            transferred);
        preview_set_failure(state, stage_label);
        return 0;
    }

    return 1;
}

int preview_run_bulk_in_step(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int frame_number,
    uint8_t *buffer,
    int buffer_size,
    int *out_transferred,
    int *out_timed_out)
{
    int status;
    int transferred = 0;
    char stage_label[192];

    if (frame_number != 0U)
    {
        snprintf(
            stage_label,
            sizeof(stage_label),
            "frame %u bulk IN endpoint=0x%02x request_len=%d",
            frame_number,
            SB_CANON_EP_BULK_IN,
            buffer_size);
    }
    else
    {
        snprintf(
            stage_label,
            sizeof(stage_label),
            "capture-loop bulk IN endpoint=0x%02x request_len=%d",
            SB_CANON_EP_BULK_IN,
            buffer_size);
    }

    if (!preview_record_transfer(state, stage_label))
    {
        return 0;
    }

    if (!preview_record_bulk_in_transfer(state, stage_label))
    {
        return 0;
    }

    printf("[preview-attempt] %s\n", stage_label);

    status = libusb_bulk_transfer(
        target_handle,
        SB_CANON_EP_BULK_IN,
        buffer,
        buffer_size,
        &transferred,
        kPreviewBulkInTimeoutMs);

    if (status == LIBUSB_ERROR_TIMEOUT)
    {
        printf(
            "[preview-attempt] bulk IN timeout (frame hint %u, timeout=%u ms)\n",
            frame_number,
            kPreviewBulkInTimeoutMs);
        *out_timed_out = 1;
        *out_transferred = 0;
        return 1;
    }

    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("preview bulk IN", status);
        preview_set_failure(state, stage_label);
        return 0;
    }

    *out_timed_out = 0;
    *out_transferred = transferred;

    preview_log_payload_summary("bulk IN chunk summary", buffer, transferred > 0 ? (size_t)transferred : 0U);

    if (transferred > 0)
    {
        size_t bytes_to_write = (size_t)transferred;
        size_t remaining_capacity = 0U;

        if (state->total_bytes < kPreviewMaxBytes)
        {
            remaining_capacity = kPreviewMaxBytes - state->total_bytes;
        }

        if (bytes_to_write > remaining_capacity)
        {
            bytes_to_write = remaining_capacity;
        }

        if (bytes_to_write > 0U)
        {
            size_t written = fwrite(buffer, 1U, bytes_to_write, state->output_file);
            if (written != bytes_to_write)
            {
                preview_set_failure(state, "failed to write raw dump file");
                return 0;
            }
            state->total_bytes += written;
        }

        printf(
            "[preview-attempt] bulk IN received=%d wrote=%zu total_saved=%zu\n",
            transferred,
            bytes_to_write,
            state->total_bytes);
    }
    else
    {
        printf("[preview-attempt] bulk IN completed with zero bytes\n");
    }

    return 1;
}
