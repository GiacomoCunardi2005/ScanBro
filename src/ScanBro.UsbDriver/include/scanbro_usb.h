#ifndef SCANBRO_USB_H
#define SCANBRO_USB_H

#include <stddef.h>
#include <stdint.h>

#include <libusb.h>

#ifdef __cplusplus
extern "C" {
#endif

enum
{
    SB_CANON_5600F_VID = 0x04A9,
    SB_CANON_5600F_PID = 0x1906,
    SB_CANON_EP_BULK_IN = 0x81,
    SB_CANON_EP_BULK_OUT = 0x02,
    SB_CANON_EP_INTERRUPT_IN = 0x83
};

int sb_usb_init(libusb_context **out_context);
void sb_usb_shutdown(libusb_context *context);

int sb_usb_open_by_vid_pid(
    libusb_context *context,
    uint16_t vid,
    uint16_t pid,
    libusb_device_handle **out_handle);

int sb_usb_claim_interface(libusb_device_handle *handle, int interface_number);
void sb_usb_release_interface(libusb_device_handle *handle, int interface_number);

int sb_usb_standard_control_in(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    uint8_t *response_buffer,
    uint16_t response_buffer_size,
    unsigned int timeout_ms);

int sb_usb_standard_control_out(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    const uint8_t *payload,
    uint16_t payload_size,
    unsigned int timeout_ms);

int sb_usb_vendor_control_in(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    uint8_t *response_buffer,
    uint16_t response_buffer_size,
    unsigned int timeout_ms);

int sb_usb_vendor_control_out(
    libusb_device_handle *handle,
    uint8_t request,
    uint16_t value,
    uint16_t index,
    const uint8_t *payload,
    uint16_t payload_size,
    unsigned int timeout_ms);

int sb_usb_bulk_out(
    libusb_device_handle *handle,
    uint8_t endpoint,
    const uint8_t *payload,
    int payload_size,
    int *transferred,
    unsigned int timeout_ms);

int sb_usb_bulk_in(
    libusb_device_handle *handle,
    uint8_t endpoint,
    uint8_t *buffer,
    int buffer_size,
    int *transferred,
    unsigned int timeout_ms);

void sb_usb_hex_dump(const char *label, const uint8_t *data, size_t length);
void sb_usb_log_libusb_error(const char *operation, int status_code);

#ifdef __cplusplus
}
#endif

#endif
