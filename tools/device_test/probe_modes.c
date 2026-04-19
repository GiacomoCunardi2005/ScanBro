#include "probe_modes.h"

#include <stdint.h>

#include "device_test_logging.h"

static const unsigned int kTransferTimeoutMs = 2000U;

static void print_status_stage_only(const char *label)
{
    printf("[scanbro-usb] %s: <none> (status stage only)\n", label);
}

int run_safe_probe_mode(libusb_device_handle *target_handle)
{
    const uint8_t safe_probe_setup[8] = {0xC0, 0x0C, 0x8E, 0x00, 0x00, 0x00, 0x01, 0x00};
    uint8_t safe_probe_response[1] = {0};
    int probe_status;

    printf("\nSafe probe mode enabled: sending one observed vendor IN request only.\n");
    printf("No multi-step replay will be executed.\n");
    sb_usb_hex_dump("safe-probe request bytes", safe_probe_setup, sizeof(safe_probe_setup));

    probe_status = sb_usb_vendor_control_in(
        target_handle,
        0x0C,
        0x008E,
        0x0000,
        safe_probe_response,
        (uint16_t)sizeof(safe_probe_response),
        kTransferTimeoutMs);

    if (probe_status >= 0)
    {
        sb_usb_hex_dump("safe-probe response bytes", safe_probe_response, (size_t)probe_status);
    }
    else
    {
        fprintf(stderr, "Safe probe failed.\n");
    }

    return probe_status >= 0 ? 0 : 1;
}

int run_sequence_probe_mode(libusb_device_handle *target_handle, int extended)
{
    const uint8_t step1_setup[8] = {0xC0, 0x0C, 0x8E, 0x00, 0x00, 0x00, 0x01, 0x00};
    const uint8_t step2_setup[8] = {0xC0, 0x04, 0x8E, 0x00, 0x22, 0x06, 0x02, 0x00};
    const uint8_t step3_setup[8] = {0x40, 0x04, 0x83, 0x00, 0x00, 0x00, 0x02, 0x00};
    const uint8_t step3_payload[2] = {0x0E, 0x01};
    const uint8_t step4_setup[8] = {0x40, 0x04, 0x83, 0x00, 0x00, 0x00, 0x02, 0x00};
    const uint8_t step4_payload[2] = {0x0E, 0x00};
    const uint8_t step5_setup[8] = {0x40, 0x04, 0x83, 0x00, 0x00, 0x00, 0x02, 0x00};
    const uint8_t step5_payload[2] = {0x01, 0x40};
    uint8_t step1_response[1] = {0};
    uint8_t step2_response[2] = {0};
    int step_status;

    printf(
        "\n%s mode enabled: running one short observed raw sequence only.\n",
        extended ? "Sequence probe extended" : "Sequence probe");
    printf("No preview replay and no bulk streaming will be executed.\n");

    sb_usb_hex_dump("sequence-probe step1 request bytes", step1_setup, sizeof(step1_setup));
    step_status = sb_usb_vendor_control_in(
        target_handle,
        0x0C,
        0x008E,
        0x0000,
        step1_response,
        (uint16_t)sizeof(step1_response),
        kTransferTimeoutMs);
    if (step_status < 0)
    {
        fprintf(stderr, "Sequence probe failed at step 1.\n");
        return 1;
    }
    sb_usb_hex_dump("sequence-probe step1 response bytes", step1_response, (size_t)step_status);

    sb_usb_hex_dump("sequence-probe step2 request bytes", step2_setup, sizeof(step2_setup));
    step_status = sb_usb_vendor_control_in(
        target_handle,
        0x04,
        0x008E,
        0x0622,
        step2_response,
        (uint16_t)sizeof(step2_response),
        kTransferTimeoutMs);
    if (step_status < 0)
    {
        fprintf(stderr, "Sequence probe failed at step 2.\n");
        return 1;
    }
    sb_usb_hex_dump("sequence-probe step2 response bytes", step2_response, (size_t)step_status);

    sb_usb_hex_dump("sequence-probe step3 request bytes", step3_setup, sizeof(step3_setup));
    sb_usb_hex_dump("sequence-probe step3 payload bytes", step3_payload, sizeof(step3_payload));
    step_status = sb_usb_vendor_control_out(
        target_handle,
        0x04,
        0x0083,
        0x0000,
        step3_payload,
        (uint16_t)sizeof(step3_payload),
        kTransferTimeoutMs);
    if (step_status < 0)
    {
        fprintf(stderr, "Sequence probe failed at step 3.\n");
        return 1;
    }
    print_status_stage_only("sequence-probe step3 response bytes");

    if (extended)
    {
        sb_usb_hex_dump("sequence-probe step4 request bytes", step4_setup, sizeof(step4_setup));
        sb_usb_hex_dump("sequence-probe step4 payload bytes", step4_payload, sizeof(step4_payload));
        step_status = sb_usb_vendor_control_out(
            target_handle,
            0x04,
            0x0083,
            0x0000,
            step4_payload,
            (uint16_t)sizeof(step4_payload),
            kTransferTimeoutMs);
        if (step_status < 0)
        {
            fprintf(stderr, "Sequence probe failed at step 4.\n");
            return 1;
        }
        print_status_stage_only("sequence-probe step4 response bytes");

        sb_usb_hex_dump("sequence-probe step5 request bytes", step5_setup, sizeof(step5_setup));
        sb_usb_hex_dump("sequence-probe step5 payload bytes", step5_payload, sizeof(step5_payload));
        step_status = sb_usb_vendor_control_out(
            target_handle,
            0x04,
            0x0083,
            0x0000,
            step5_payload,
            (uint16_t)sizeof(step5_payload),
            kTransferTimeoutMs);
        if (step_status < 0)
        {
            fprintf(stderr, "Sequence probe failed at step 5.\n");
            return 1;
        }
        print_status_stage_only("sequence-probe step5 response bytes");
    }

    printf("%s completed. Exiting immediately.\n", extended ? "Sequence probe extended" : "Sequence probe");
    return 0;
}
