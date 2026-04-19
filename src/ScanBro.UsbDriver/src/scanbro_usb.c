#include "scanbro_usb.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#if defined(_WIN32)
#include <direct.h>
#define SB_USB_MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#include <sys/types.h>
#define SB_USB_MKDIR(path) mkdir(path, 0777)
#endif

static const char kSbUsbLogDirPath[] = "tools/device_test/logs";
static const char kSbUsbLatestLogPath[] = "tools/device_test/logs/device_test.latest.log";
static FILE *g_sb_usb_latest_log_file = NULL;
static FILE *g_sb_usb_history_log_file = NULL;
static char g_sb_usb_history_log_path[256] = {0};
static int g_sb_usb_log_session_started = 0;
static int g_sb_usb_log_atexit_registered = 0;

static void sb_usb_build_history_log_path(char *out_path, size_t out_path_size)
{
    time_t now;
    struct tm local_tm;
    int have_local_time = 0;

    if (out_path == NULL || out_path_size == 0U)
    {
        return;
    }

    out_path[0] = '\0';
    now = time(NULL);
    if (now != (time_t)-1)
    {
#if defined(_WIN32)
        have_local_time = localtime_s(&local_tm, &now) == 0;
#else
        have_local_time = localtime_r(&now, &local_tm) != NULL;
#endif
    }

    if (have_local_time)
    {
        snprintf(
            out_path,
            out_path_size,
            "%s/device_test.%04d%02d%02d-%02d%02d%02d.log",
            kSbUsbLogDirPath,
            local_tm.tm_year + 1900,
            local_tm.tm_mon + 1,
            local_tm.tm_mday,
            local_tm.tm_hour,
            local_tm.tm_min,
            local_tm.tm_sec);
        return;
    }

    if (now == (time_t)-1)
    {
        now = 0;
    }

    snprintf(
        out_path,
        out_path_size,
        "%s/device_test.%lld.log",
        kSbUsbLogDirPath,
        (long long)now);
}

void sb_usb_log_session_end(void)
{
    if (g_sb_usb_history_log_file != NULL)
    {
        fclose(g_sb_usb_history_log_file);
        g_sb_usb_history_log_file = NULL;
    }

    if (g_sb_usb_latest_log_file != NULL)
    {
        fclose(g_sb_usb_latest_log_file);
        g_sb_usb_latest_log_file = NULL;
    }

    g_sb_usb_history_log_path[0] = '\0';
    g_sb_usb_log_session_started = 0;
}

void sb_usb_log_session_begin(void)
{
    FILE *latest_file;
    FILE *history_file;
    int mkdir_status;

    if (g_sb_usb_log_session_started)
    {
        return;
    }
    g_sb_usb_log_session_started = 1;

    errno = 0;
    mkdir_status = SB_USB_MKDIR(kSbUsbLogDirPath);
    if (mkdir_status != 0 && errno != EEXIST)
    {
        return;
    }

    latest_file = fopen(kSbUsbLatestLogPath, "wb");
    if (latest_file != NULL)
    {
        g_sb_usb_latest_log_file = latest_file;
    }

    sb_usb_build_history_log_path(g_sb_usb_history_log_path, sizeof(g_sb_usb_history_log_path));
    if (g_sb_usb_history_log_path[0] != '\0')
    {
        history_file = fopen(g_sb_usb_history_log_path, "wb");
        if (history_file != NULL)
        {
            g_sb_usb_history_log_file = history_file;
        }
    }

    if (!g_sb_usb_log_atexit_registered)
    {
        if (atexit(sb_usb_log_session_end) == 0)
        {
            g_sb_usb_log_atexit_registered = 1;
        }
    }
}

const char *sb_usb_log_latest_path(void)
{
    return kSbUsbLatestLogPath;
}

const char *sb_usb_log_history_path(void)
{
    if (g_sb_usb_history_log_path[0] == '\0')
    {
        return NULL;
    }

    return g_sb_usb_history_log_path;
}

int sb_usb_log_printf(FILE *stream, const char *format, ...)
{
    va_list console_args;
    va_list latest_args;
    va_list history_args;
    int should_mirror;
    int wrote_latest = 0;
    int wrote_history = 0;
    int result;

    if (format == NULL)
    {
        return -1;
    }

    if (stream == NULL)
    {
        stream = stdout;
    }

    should_mirror = (stream == stdout || stream == stderr);

    va_start(console_args, format);
    if (should_mirror && g_sb_usb_latest_log_file != NULL)
    {
        va_copy(latest_args, console_args);
        wrote_latest = 1;
    }
    if (should_mirror && g_sb_usb_history_log_file != NULL)
    {
        va_copy(history_args, console_args);
        wrote_history = 1;
    }

    result = vfprintf(stream, format, console_args);
    va_end(console_args);

    if (wrote_latest)
    {
        (void)vfprintf(g_sb_usb_latest_log_file, format, latest_args);
        fflush(g_sb_usb_latest_log_file);
        va_end(latest_args);
    }

    if (wrote_history)
    {
        (void)vfprintf(g_sb_usb_history_log_file, format, history_args);
        fflush(g_sb_usb_history_log_file);
        va_end(history_args);
    }

    return result;
}

#define printf(...) sb_usb_log_printf(stdout, __VA_ARGS__)
#define fprintf(stream, ...) sb_usb_log_printf((stream), __VA_ARGS__)

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
