#include "usb_device.h"

#include <string.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#include "device_test_logging.h"

static void usb_device_sleep_ms(unsigned int milliseconds)
{
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep((useconds_t)milliseconds * 1000U);
#endif
}

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

void usb_device_session_init(usb_device_session *session)
{
    if (session == NULL)
    {
        return;
    }

    memset(session, 0, sizeof(*session));
    session->claim_interface = -1;
}

void usb_device_session_close(usb_device_session *session)
{
    if (session == NULL)
    {
        return;
    }

    if (session->target_handle != NULL)
    {
        libusb_close(session->target_handle);
        session->target_handle = NULL;
    }

    if (session->target_device != NULL)
    {
        libusb_unref_device(session->target_device);
        session->target_device = NULL;
    }

    if (session->context != NULL)
    {
        sb_usb_shutdown(session->context);
        session->context = NULL;
    }

    session->claim_interface = -1;
    memset(&session->target_desc, 0, sizeof(session->target_desc));
}

int usb_device_session_open(usb_device_session *session, uint16_t target_vid, uint16_t target_pid)
{
    libusb_device **device_list = NULL;
    ssize_t device_count;
    int status;

    if (session == NULL)
    {
        return 0;
    }

    status = sb_usb_init(&session->context);
    if (status != LIBUSB_SUCCESS)
    {
        return 0;
    }

    printf("Enumerating USB devices...\n");
    device_count = libusb_get_device_list(session->context, &device_list);
    if (device_count < 0)
    {
        sb_usb_log_libusb_error("libusb_get_device_list", (int)device_count);
        usb_device_session_close(session);
        return 0;
    }

    for (ssize_t index = 0; index < device_count; ++index)
    {
        struct libusb_device_descriptor desc;
        status = libusb_get_device_descriptor(device_list[index], &desc);
        if (status != LIBUSB_SUCCESS)
        {
            sb_usb_log_libusb_error("libusb_get_device_descriptor", status);
            continue;
        }

        print_device_summary(device_list[index], &desc);

        if (desc.idVendor == target_vid && desc.idProduct == target_pid && session->target_device == NULL)
        {
            session->target_device = libusb_ref_device(device_list[index]);
            session->target_desc = desc;
        }
    }

    libusb_free_device_list(device_list, 1);
    device_list = NULL;

    if (session->target_device == NULL)
    {
        fprintf(stderr, "Target scanner %04x:%04x not found.\n", target_vid, target_pid);
        fprintf(stderr, "Check cable/power and verify which Windows driver is currently bound.\n");
        usb_device_session_close(session);
        return 0;
    }

    printf(
        "\nOpening scanner %04x:%04x on bus=%u addr=%u...\n",
        target_vid,
        target_pid,
        libusb_get_bus_number(session->target_device),
        libusb_get_device_address(session->target_device));

    status = libusb_open(session->target_device, &session->target_handle);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_open", status);
        fprintf(
            stderr,
            "Open failed. If Canon driver is still active, switch to WinUSB/libusb with Zadig for active-control tests.\n");
        usb_device_session_close(session);
        return 0;
    }

    printf(
        "Opened device descriptor: usb=%04x class=%02x/%02x/%02x configs=%u\n",
        session->target_desc.bcdUSB,
        session->target_desc.bDeviceClass,
        session->target_desc.bDeviceSubClass,
        session->target_desc.bDeviceProtocol,
        session->target_desc.bNumConfigurations);

    /*
     * Skip optional string-descriptor reads during active debugging:
     * they are not required for protocol replay and can add extra EP0 traffic
     * while the device is transitioning to ready state.
     */

    printf("\nConfiguration/interface/endpoint tree:\n");
    session->claim_interface = print_config_and_find_claimable_interface(
        session->target_device,
        &session->target_desc);

    if (session->claim_interface >= 0)
    {
        printf("\nClaimable interface detected: #%d\n", session->claim_interface);
    }
    else
    {
        printf("No interface found to claim.\n");
    }

    return 1;
}

int usb_device_claim_for_active_mode(usb_device_session *session)
{
    int status;

    if (session == NULL || session->target_handle == NULL || session->claim_interface < 0)
    {
        return 0;
    }

    status = sb_usb_claim_interface(session->target_handle, session->claim_interface);
    if (status != LIBUSB_SUCCESS)
    {
        return 0;
    }

    return 1;
}

int usb_device_prepare_active_mode(usb_device_session *session)
{
    uint8_t probe_response[2] = {0U, 0U};
    int status;

    if (session == NULL || session->target_handle == NULL || session->claim_interface < 0)
    {
        return 0;
    }

    status = libusb_set_configuration(session->target_handle, 1);
    if (status != LIBUSB_SUCCESS && status != LIBUSB_ERROR_BUSY)
    {
        sb_usb_log_libusb_error("libusb_set_configuration", status);
    }

    status = libusb_set_interface_alt_setting(session->target_handle, session->claim_interface, 0);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_set_interface_alt_setting", status);
    }

    status = sb_usb_vendor_control_in(
        session->target_handle,
        0x04U,
        0x008EU,
        0x0622U,
        probe_response,
        (uint16_t)sizeof(probe_response),
        500U);
    if (status >= 0)
    {
        return 1;
    }

    fprintf(stderr, "[preview-attempt] active-mode prepare probe failed, waiting and retrying.\n");
    usb_device_sleep_ms(1200U);

    status = libusb_set_configuration(session->target_handle, 1);
    if (status != LIBUSB_SUCCESS && status != LIBUSB_ERROR_BUSY)
    {
        sb_usb_log_libusb_error("libusb_set_configuration", status);
    }

    status = libusb_set_interface_alt_setting(session->target_handle, session->claim_interface, 0);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_set_interface_alt_setting", status);
    }

    status = sb_usb_vendor_control_in(
        session->target_handle,
        0x04U,
        0x008EU,
        0x0622U,
        probe_response,
        (uint16_t)sizeof(probe_response),
        1200U);
    if (status >= 0)
    {
        return 1;
    }

    fprintf(stderr, "[preview-attempt] active-mode prepare second probe failed, final retry.\n");
    usb_device_sleep_ms(2000U);

    status = sb_usb_vendor_control_in(
        session->target_handle,
        0x04U,
        0x008EU,
        0x0622U,
        probe_response,
        (uint16_t)sizeof(probe_response),
        2000U);
    if (status < 0)
    {
        return 0;
    }

    return 1;
}

void usb_device_release_after_active_mode(usb_device_session *session)
{
    if (session == NULL || session->target_handle == NULL || session->claim_interface < 0)
    {
        return;
    }

    sb_usb_release_interface(session->target_handle, session->claim_interface);
}
