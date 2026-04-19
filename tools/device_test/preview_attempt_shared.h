#ifndef SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_SHARED_H
#define SCANBRO_DEVICE_TEST_PREVIEW_ATTEMPT_SHARED_H

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#if defined(_WIN32)
#include <direct.h>
#define SB_PREVIEW_MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#include <sys/types.h>
#define SB_PREVIEW_MKDIR(path) mkdir(path, 0777)
#endif

#include "device_test_logging.h"
#include "scanbro_usb.h"

typedef struct preview_runtime_state
{
    FILE *output_file;
    size_t total_bytes;
    unsigned int total_transfers;
    unsigned int bulk_in_transfers;
    char failure_stage[256];
} preview_runtime_state;

typedef struct preview_control_step
{
    unsigned int frame_number;
    int is_in;
    uint8_t request;
    uint16_t value;
    uint16_t index;
    uint16_t length;
    const char *payload_hex;
} preview_control_step;

typedef struct preview_bulk_pair
{
    unsigned int control_frame;
    const char *control_payload_hex;
    unsigned int bulk_frame;
    const char *bulk_payload_hex;
} preview_bulk_pair;

typedef struct preview_pointer_step
{
    unsigned int control_frame;
    const char *control_payload_hex;
    unsigned int submit_frame_a;
    unsigned int submit_frame_b;
    unsigned int poll_frames[4];
} preview_pointer_step;

typedef struct preview_state_poll_step
{
    unsigned int frame_number;
    uint16_t index;
    const char *label;
} preview_state_poll_step;

typedef struct preview_state_write_step
{
    unsigned int frame_number;
    uint8_t request;
    uint16_t value;
    uint16_t index;
    uint16_t length;
    const char *payload_hex;
    const char *label;
} preview_state_write_step;

extern const unsigned int kTransferTimeoutMs;
extern const unsigned int kPreviewBulkInTimeoutMs;
extern const unsigned int kPreviewMaxTotalTransfers;
extern const unsigned int kPreviewMaxBulkInTransfers;
extern const unsigned int kPreviewMaxConsecutiveTimeouts;
extern const size_t kPreviewMaxBytes;
extern const int kPreviewBulkInReadSize;
extern const char *kPreviewDumpPath;
extern const size_t kPreviewSummarySampleBytes;

uint64_t preview_now_ms(void);
int ensure_preview_output_directory(void);
int decode_hex_string(
    const char *hex_text,
    uint8_t *out_buffer,
    size_t out_buffer_size,
    size_t *out_length);
void preview_set_failure(preview_runtime_state *state, const char *stage_text);
int preview_record_transfer(preview_runtime_state *state, const char *stage_text);
int preview_record_bulk_in_transfer(preview_runtime_state *state, const char *stage_text);
int preview_response_is_two_byte_value(
    const uint8_t *response,
    size_t response_length,
    uint8_t byte0,
    uint8_t byte1);
size_t preview_count_non_zero_bytes(const uint8_t *buffer, size_t length);
void preview_log_saved_file_summary(const char *path);

#endif
