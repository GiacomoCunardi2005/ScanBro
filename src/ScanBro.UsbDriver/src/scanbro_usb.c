#include "scanbro_usb.h"

#include <stdio.h>

void sb_usb_log_libusb_error(const char *operation, int status_code)
{
    fprintf(
        stderr,
        "[scanbro-usb] %s failed: %s (%d)\n",
        operation,
        libusb_error_name(status_code),
        status_code);
}

void sb_usb_hex_dump(const char *label, const uint8_t *data, size_t length)
{
    size_t index;

    printf("[scanbro-usb] %s (%zu bytes)\n", label, length);
    if (data == NULL || length == 0)
    {
        return;
    }

    for (index = 0; index < length; ++index)
    {
        if ((index % 16U) == 0U)
        {
            printf("  %04zx: ", index);
        }

        printf("%02x ", data[index]);

        if ((index % 16U) == 15U || (index + 1U) == length)
        {
            printf("\n");
        }
    }
}

int sb_usb_init(libusb_context **out_context)
{
    int status;

    if (out_context == NULL)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    *out_context = NULL;
    status = libusb_init(out_context);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_init", status);
    }

    return status;
}

void sb_usb_shutdown(libusb_context *context)
{
    if (context != NULL)
    {
        libusb_exit(context);
    }
}

int sb_usb_open_by_vid_pid(
    libusb_context *context,
    uint16_t vid,
    uint16_t pid,
    libusb_device_handle **out_handle)
{
    if (out_handle == NULL)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    *out_handle = libusb_open_device_with_vid_pid(context, vid, pid);
    if (*out_handle == NULL)
    {
        fprintf(
            stderr,
            "[scanbro-usb] device %04x:%04x not found or could not be opened.\n",
            vid,
            pid);
        return LIBUSB_ERROR_NO_DEVICE;
    }

    return LIBUSB_SUCCESS;
}

int sb_usb_claim_interface(libusb_device_handle *handle, int interface_number)
{
    int status;

    if (handle == NULL)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    status = libusb_set_auto_detach_kernel_driver(handle, 1);
    if (status != LIBUSB_SUCCESS && status != LIBUSB_ERROR_NOT_SUPPORTED)
    {
        sb_usb_log_libusb_error("libusb_set_auto_detach_kernel_driver", status);
    }

    status = libusb_claim_interface(handle, interface_number);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_claim_interface", status);
    }

    return status;
}

void sb_usb_release_interface(libusb_device_handle *handle, int interface_number)
{
    int status;

    if (handle == NULL)
    {
        return;
    }

    status = libusb_release_interface(handle, interface_number);
    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("libusb_release_interface", status);
    }
}

static int sb_usb_control_transfer(
    libusb_device_handle *handle,
    uint8_t bm_request_type,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    uint8_t *buffer,
    uint16_t buffer_size,
    unsigned int timeout_ms,
    const char *operation)
{
    int status;
    uint8_t setup[8];
    int direction_is_in;

    if (handle == NULL)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    if (buffer_size > 0U && buffer == NULL)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    setup[0] = bm_request_type;
    setup[1] = request;
    setup[2] = (uint8_t)(value & 0xFFU);
    setup[3] = (uint8_t)((value >> 8U) & 0xFFU);
    setup[4] = (uint8_t)(index & 0xFFU);
    setup[5] = (uint8_t)((index >> 8U) & 0xFFU);
    setup[6] = (uint8_t)(buffer_size & 0xFFU);
    setup[7] = (uint8_t)((buffer_size >> 8U) & 0xFFU);

    sb_usb_hex_dump(operation, setup, sizeof(setup));
    direction_is_in = (bm_request_type & LIBUSB_ENDPOINT_DIR_MASK) == LIBUSB_ENDPOINT_IN;

    if (!direction_is_in && buffer_size > 0U && buffer != NULL)
    {
        sb_usb_hex_dump("control OUT payload", buffer, buffer_size);
    }

    status = libusb_control_transfer(
        handle,
        bm_request_type,
        request,
        value,
        index,
        buffer,
        buffer_size,
        timeout_ms);

    if (status < 0)
    {
        sb_usb_log_libusb_error(operation, status);
        return status;
    }

    printf("[scanbro-usb] %s transferred %d bytes\n", operation, status);
    if (direction_is_in && status > 0)
    {
        sb_usb_hex_dump("control IN response", buffer, (size_t)status);
    }

    return status;
}

int sb_usb_standard_control_in(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    uint8_t *response_buffer,
    uint16_t response_buffer_size,
    unsigned int timeout_ms)
{
    const uint8_t request_type = (uint8_t)(LIBUSB_ENDPOINT_IN | LIBUSB_REQUEST_TYPE_STANDARD | LIBUSB_RECIPIENT_DEVICE);
    return sb_usb_control_transfer(
        handle,
        request_type,
        request,
        value,
        index,
        response_buffer,
        response_buffer_size,
        timeout_ms,
        "standard control IN");
}

int sb_usb_standard_control_out(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    const uint8_t *payload,
    uint16_t payload_size,
    unsigned int timeout_ms)
{
    const uint8_t request_type = (uint8_t)(LIBUSB_ENDPOINT_OUT | LIBUSB_REQUEST_TYPE_STANDARD | LIBUSB_RECIPIENT_DEVICE);
    return sb_usb_control_transfer(
        handle,
        request_type,
        request,
        value,
        index,
        (uint8_t *)payload,
        payload_size,
        timeout_ms,
        "standard control OUT");
}

int sb_usb_vendor_control_in(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    uint8_t *response_buffer,
    uint16_t response_buffer_size,
    unsigned int timeout_ms)
{
    const uint8_t request_type = (uint8_t)(LIBUSB_ENDPOINT_IN | LIBUSB_REQUEST_TYPE_VENDOR | LIBUSB_RECIPIENT_DEVICE);
    return sb_usb_control_transfer(
        handle,
        request_type,
        request,
        value,
        index,
        response_buffer,
        response_buffer_size,
        timeout_ms,
        "vendor control IN");
}

int sb_usb_vendor_control_out(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    const uint8_t *payload,
    uint16_t payload_size,
    unsigned int timeout_ms)
{
    const uint8_t request_type = (uint8_t)(LIBUSB_ENDPOINT_OUT | LIBUSB_REQUEST_TYPE_VENDOR | LIBUSB_RECIPIENT_DEVICE);
    return sb_usb_control_transfer(
        handle,
        request_type,
        request,
        value,
        index,
        (uint8_t *)payload,
        payload_size,
        timeout_ms,
        "vendor control OUT");
}

int sb_usb_bulk_out(
    libusb_device_handle *handle,
    uint8_t endpoint,
    const uint8_t *payload,
    int payload_size,
    int *transferred,
    unsigned int timeout_ms)
{
    int status;

    if (handle == NULL || payload_size < 0)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    if (payload != NULL && payload_size > 0)
    {
        sb_usb_hex_dump("bulk OUT payload", payload, (size_t)payload_size);
    }

    status = libusb_bulk_transfer(
        handle,
        endpoint,
        (uint8_t *)payload,
        payload_size,
        transferred,
        timeout_ms);

    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("bulk OUT", status);
    }
    else
    {
        printf(
            "[scanbro-usb] bulk OUT endpoint 0x%02x transferred %d bytes\n",
            endpoint,
            transferred != NULL ? *transferred : payload_size);
    }

    return status;
}

int sb_usb_bulk_in(
    libusb_device_handle *handle,
    uint8_t endpoint,
    uint8_t *buffer,
    int buffer_size,
    int *transferred,
    unsigned int timeout_ms)
{
    int status;
    int bytes_transferred;

    if (handle == NULL || buffer == NULL || buffer_size <= 0)
    {
        return LIBUSB_ERROR_INVALID_PARAM;
    }

    bytes_transferred = 0;
    status = libusb_bulk_transfer(
        handle,
        endpoint,
        buffer,
        buffer_size,
        &bytes_transferred,
        timeout_ms);

    if (transferred != NULL)
    {
        *transferred = bytes_transferred;
    }

    if (status != LIBUSB_SUCCESS)
    {
        sb_usb_log_libusb_error("bulk IN", status);
        return status;
    }

    printf(
        "[scanbro-usb] bulk IN endpoint 0x%02x transferred %d bytes\n",
        endpoint,
        bytes_transferred);

    if (bytes_transferred > 0)
    {
        sb_usb_hex_dump("bulk IN payload", buffer, (size_t)bytes_transferred);
    }

    return status;
}
