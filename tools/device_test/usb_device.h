#ifndef SCANBRO_DEVICE_TEST_USB_DEVICE_H
#define SCANBRO_DEVICE_TEST_USB_DEVICE_H

#include <stdint.h>
#include "scanbro_usb.h"

typedef struct usb_device_session
{
    libusb_context *context;
    libusb_device *target_device;
    libusb_device_handle *target_handle;
    struct libusb_device_descriptor target_desc;
    int claim_interface;
} usb_device_session;

void usb_device_session_init(usb_device_session *session);
int usb_device_session_open(usb_device_session *session, uint16_t target_vid, uint16_t target_pid);
int usb_device_claim_for_active_mode(usb_device_session *session);
int usb_device_prepare_active_mode(usb_device_session *session);
void usb_device_release_after_active_mode(usb_device_session *session);
void usb_device_session_close(usb_device_session *session);

#endif
