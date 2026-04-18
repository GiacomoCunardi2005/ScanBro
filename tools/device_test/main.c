#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "scanbro_usb.h"

static const unsigned int kTransferTimeoutMs = 2000U;

static const char *endpoint_type_to_text(uint8_t attributes)
{
    switch (attributes & LIBUSB_TRANSFER_TYPE_MASK)
    {
    case LIBUSB_TRANSFER_TYPE_CONTROL:
        return "control";
    case LIBUSB_TRANSFER_TYPE_ISOCHRONOUS:
        return "isochronous";
    case LIBUSB_TRANSFER_TYPE_BULK:
        return "bulk";
    case LIBUSB_TRANSFER_TYPE_INTERRUPT:
        return "interrupt";
#ifdef LIBUSB_TRANSFER_TYPE_BULK_STREAM
    case LIBUSB_TRANSFER_TYPE_BULK_STREAM:
        return "bulk-stream";
#endif
    default:
        return "unknown";
    }
}

static int parse_hex_u16(const char *text, uint16_t *out_value)
{
    char *end = NULL;
    unsigned long parsed;

    if (text == NULL || out_value == NULL)
    {
        return 0;
    }

    parsed = strtoul(text, &end, 16);
    if (*text == '\0' || end == NULL || *end != '\0' || parsed > 0xFFFFUL)
    {
        return 0;
    }

    *out_value = (uint16_t)parsed;
    return 1;
}

static void print_usage(const char *program_name)
{
    printf("Usage: %s [--vid HEX] [--pid HEX] [--safe-probe]\n", program_name);
    printf("Defaults: --vid 04A9 --pid 1906\n");
}

static void print_device_summary(libusb_device *device, const struct libusb_device_descriptor *desc)
{
    printf(
        "Device bus=%u addr=%u vid:pid=%04x:%04x class=%02x subclass=%02x proto=%02x configs=%u\n",
        libusb_get_bus_number(device),
        libusb_get_device_address(device),
        desc->idVendor,
        desc->idProduct,
        desc->bDeviceClass,
        desc->bDeviceSubClass,
        desc->bDeviceProtocol,
        desc->bNumConfigurations);
}

static void print_string_descriptor(
    libusb_device_handle *handle,
    uint8_t index,
    const char *label)
{
    unsigned char buffer[256];
    int status;

    if (index == 0U)
    {
        return;
    }

    status = libusb_get_string_descriptor_ascii(handle, index, buffer, (int)sizeof(buffer));
    if (status < 0)
    {
        sb_usb_log_libusb_error("libusb_get_string_descriptor_ascii", status);
        return;
    }

    printf("%s: %.*s\n", label, status, (const char *)buffer);
}

static int print_config_and_find_claimable_interface(
    libusb_device *device,
    const struct libusb_device_descriptor *desc)
{
    uint8_t config_index;
    int claim_interface = -1;

    for (config_index = 0; config_index < desc->bNumConfigurations; ++config_index)
    {
        struct libusb_config_descriptor *config = NULL;
        int status = libusb_get_config_descriptor(device, config_index, &config);
        uint8_t interface_index;

        if (status != LIBUSB_SUCCESS)
        {
            sb_usb_log_libusb_error("libusb_get_config_descriptor", status);
            continue;
        }

        printf(
            "Config[%u]: value=%u interfaces=%u attributes=0x%02x maxPower=%u\n",
            config_index,
            config->bConfigurationValue,
            config->bNumInterfaces,
            config->bmAttributes,
            config->MaxPower);

        for (interface_index = 0; interface_index < config->bNumInterfaces; ++interface_index)
        {
            const struct libusb_interface *iface = &config->interface[interface_index];
            int alt_index;

            for (alt_index = 0; alt_index < iface->num_altsetting; ++alt_index)
            {
                const struct libusb_interface_descriptor *alt = &iface->altsetting[alt_index];
                uint8_t endpoint_index;

                printf(
                    "  Interface #%u alt=%d class=%02x/%02x/%02x endpoints=%u\n",
                    alt->bInterfaceNumber,
                    alt->bAlternateSetting,
                    alt->bInterfaceClass,
                    alt->bInterfaceSubClass,
                    alt->bInterfaceProtocol,
                    alt->bNumEndpoints);

                if (claim_interface < 0)
                {
                    claim_interface = alt->bInterfaceNumber;
                }

                for (endpoint_index = 0; endpoint_index < alt->bNumEndpoints; ++endpoint_index)
                {
                    const struct libusb_endpoint_descriptor *ep = &alt->endpoint[endpoint_index];

                    printf(
                        "    EP 0x%02x %s maxPacket=%u interval=%u\n",
                        ep->bEndpointAddress,
                        endpoint_type_to_text(ep->bmAttributes),
                        ep->wMaxPacketSize,
                        ep->bInterval);
                }
            }
        }

        libusb_free_config_descriptor(config);
    }

    return claim_interface;
}

int main(int argc, char **argv)
{
    libusb_context *context = NULL;
    libusb_device **device_list = NULL;
    libusb_device *target_device = NULL;
    libusb_device_handle *target_handle = NULL;
    struct libusb_device_descriptor target_desc;
    ssize_t device_count;
    uint16_t target_vid = SB_CANON_5600F_VID;
    uint16_t target_pid = SB_CANON_5600F_PID;
    int run_safe_probe = 0;
    int claim_interface;
    int status;
    int arg_index;

    memset(&target_desc, 0, sizeof(target_desc));

    for (arg_index = 1; arg_index < argc; ++arg_index)
    {
        if (strcmp(argv[arg_index], "--vid") == 0 && (arg_index + 1) < argc)
        {
            if (!parse_hex_u16(argv[arg_index + 1], &target_vid))
            {
                fprintf(stderr, "Invalid VID value: %s\n", argv[arg_index + 1]);
                return 2;
            }
            ++arg_index;
            continue;
        }

        if (strcmp(argv[arg_index], "--pid") == 0 && (arg_index + 1) < argc)
        {
            if (!parse_hex_u16(argv[arg_index + 1], &target_pid))
            {
                fprintf(stderr, "Invalid PID value: %s\n", argv[arg_index + 1]);
                return 2;
            }
            ++arg_index;
            continue;
        }

        if (strcmp(argv[arg_index], "--safe-probe") == 0)
        {
            run_safe_probe = 1;
            continue;
        }

        print_usage(argv[0]);
        return 2;
    }

    status = sb_usb_init(&context);
    if (status != LIBUSB_SUCCESS)
    {
        return 1;
    }

    printf("Enumerating USB devices...\n");
    device_count = libusb_get_device_list(context, &device_list);
    if (device_count < 0)
    {
        sb_usb_log_libusb_error("libusb_get_device_list", (int)device_count);
        sb_usb_shutdown(context);
        return 1;
    }

    for (ssize_t i = 0; i < device_count; ++i)
    {
        struct libusb_device_descriptor desc;
        status = libusb_get_device_descriptor(device_list[i], &desc);
        if (status != LIBUSB_SUCCESS)
        {
            sb_usb_log_libusb_error("libusb_get_device_descriptor", status);
            continue;
        }

        print_device_summary(device_list[i], &desc);

        if (desc.idVendor == target_vid && desc.idProduct == target_pid && target_device == NULL)
        {
            target_device = libusb_ref_device(device_list[i]);
            target_desc = desc;
        }
    }

    libusb_free_device_list(device_list, 1);
    device_list = NULL;

    if (target_device == NULL)
    {
        fprintf(
            stderr,
            "Target scanner %04x:%04x not found.\n",
            target_vid,
            target_pid);
        fprintf(
            stderr,
            "Check cable/power and verify which Windows driver is currently bound.\n");
        sb_usb_shutdown(context);
        return 1;
    }

    printf(
        "\nOpening scanner %04x:%04x on bus=%u addr=%u...\n",
        target_vid,
        target_pid,
        libusb_get_bus_number(target_device),
        libusb_get_device_address(target_device));

    status = libusb_open(target_device, &target_handle);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_open", status);
        fprintf(
            stderr,
            "Open failed. If Canon driver is still active, switch to WinUSB/libusb with Zadig for active-control tests.\n");
        libusb_unref_device(target_device);
        sb_usb_shutdown(context);
        return 1;
    }

    printf(
        "Opened device descriptor: usb=%04x class=%02x/%02x/%02x configs=%u\n",
        target_desc.bcdUSB,
        target_desc.bDeviceClass,
        target_desc.bDeviceSubClass,
        target_desc.bDeviceProtocol,
        target_desc.bNumConfigurations);

    print_string_descriptor(target_handle, target_desc.iManufacturer, "Manufacturer");
    print_string_descriptor(target_handle, target_desc.iProduct, "Product");
    print_string_descriptor(target_handle, target_desc.iSerialNumber, "Serial");

    printf("\nConfiguration/interface/endpoint tree:\n");
    claim_interface = print_config_and_find_claimable_interface(target_device, &target_desc);

    if (claim_interface >= 0)
    {
        int kernel_state = libusb_kernel_driver_active(target_handle, claim_interface);

        printf("\nAttempting interface claim for interface #%d...\n", claim_interface);
        if (kernel_state == 1)
        {
            printf("Kernel driver is attached on interface #%d.\n", claim_interface);
        }
        else if (kernel_state == 0)
        {
            printf("No kernel driver attached on interface #%d.\n", claim_interface);
        }
        else if (kernel_state != LIBUSB_ERROR_NOT_SUPPORTED)
        {
            sb_usb_log_libusb_error("libusb_kernel_driver_active", kernel_state);
        }
        else
        {
            printf("Kernel-driver activity query is not supported on this platform/backend.\n");
        }

        status = sb_usb_claim_interface(target_handle, claim_interface);
        if (status == LIBUSB_SUCCESS)
        {
            printf("Interface claim succeeded.\n");
            sb_usb_release_interface(target_handle, claim_interface);
        }
        else
        {
            printf(
                "Interface claim failed. If status is BUSY/ACCESS, close Canon apps and switch driver state before retrying.\n");
        }
    }
    else
    {
        printf("No interface found to claim.\n");
    }

    if (run_safe_probe)
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

        libusb_close(target_handle);
        libusb_unref_device(target_device);
        sb_usb_shutdown(context);
        return probe_status >= 0 ? 0 : 1;
    }

    printf("\nProtocol replay scaffold now available in src/ScanBro.UsbDriver:\n");
    printf("  - sb_usb_standard_control_in / sb_usb_standard_control_out\n");
    printf("  - sb_usb_vendor_control_in / sb_usb_vendor_control_out\n");
    printf("  - sb_usb_bulk_out / sb_usb_bulk_in\n");
    printf("  - sb_usb_hex_dump for request/response logging\n");
    printf("No preview replay is executed by this tool yet.\n");
    printf("Default transfer timeout configured to %u ms.\n", kTransferTimeoutMs);

    libusb_close(target_handle);
    libusb_unref_device(target_device);
    sb_usb_shutdown(context);
    return 0;
}
