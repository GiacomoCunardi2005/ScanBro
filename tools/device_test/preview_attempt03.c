#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <time.h>

#if defined(_WIN32)
#include <direct.h>
#define SB_MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#include <sys/types.h>
#define SB_MKDIR(path) mkdir(path, 0777)
#endif

#if 0
typedef struct preview03_transition_result
{
    int wrote_0c00;
    int wrote_0d01_pre;
    int wrote_6b87;
    int wrote_0141;
    int wrote_0d01;
    int wrote_0fff;
    int wrote_0140;
    int wrote_6cf0;
    int seen_6c22_f155;
    int seen_6c22_f055;
    char last_0c22[32];
    char last_6b22[32];
    char last_0122[32];
    char last_0d22[32];
    char last_6c22[32];
} preview03_transition_result;

typedef struct preview03_readiness_result
{
    int seen_4422_0e55;
    int seen_4522_7855;
    unsigned int seen_4422_iteration;
    unsigned int seen_4522_iteration;
    char last_4222[32];
    char last_4322[32];
    char last_4422[32];
    char last_4522[32];
} preview03_readiness_result;

static int preview03_run_transition_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_transition_result *out_result)
{
    unsigned int iteration = 0U;
    uint64_t started_ms;
    uint64_t deadline_ms;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    memset(out_result, 0, sizeof(*out_result));
    snprintf(out_result->last_0c22, sizeof(out_result->last_0c22), "<missing>");
    snprintf(out_result->last_6b22, sizeof(out_result->last_6b22), "<missing>");
    snprintf(out_result->last_0122, sizeof(out_result->last_0122), "<missing>");
    snprintf(out_result->last_0d22, sizeof(out_result->last_0d22), "<missing>");
    snprintf(out_result->last_6c22, sizeof(out_result->last_6c22), "<missing>");

    printf("[preview-attempt-03][phase-1-transition] begin causal transition driving\n");
    started_ms = preview_now_ms();
    deadline_ms = started_ms + phase_timeout_ms;

    while (1)
    {
        uint8_t response_0c22[8];
        uint8_t response_6b22[8];
        uint8_t response_0122[8];
        uint8_t response_0d22[8];
        uint8_t response_6c22[8];
        size_t response_0c22_length = 0U;
        size_t response_6b22_length = 0U;
        size_t response_0122_length = 0U;
        size_t response_0d22_length = 0U;
        size_t response_6c22_length = 0U;
        char failure_message[256];

        iteration++;
        if (iteration > iteration_cap)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-1 transition gate not satisfied before iteration cap (iter_cap=%u last_0c22=%s last_6b22=%s last_0122=%s last_0d22=%s last_6c22=%s writes=[0c00:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s])",
                iteration_cap,
                out_result->last_0c22,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->wrote_0c00 ? "yes" : "no",
                out_result->wrote_6b87 ? "yes" : "no",
                out_result->wrote_0141 ? "yes" : "no",
                out_result->wrote_0d01 ? "yes" : "no",
                out_result->wrote_0fff ? "yes" : "no",
                out_result->wrote_0140 ? "yes" : "no",
                out_result->wrote_6cf0 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (preview_now_ms() >= deadline_ms)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-1 transition gate timed out (limit=%llu ms last_0c22=%s last_6b22=%s last_0122=%s last_0d22=%s last_6c22=%s writes=[0c00:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s])",
                (unsigned long long)phase_timeout_ms,
                out_result->last_0c22,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->wrote_0c00 ? "yes" : "no",
                out_result->wrote_6b87 ? "yes" : "no",
                out_result->wrote_0141 ? "yes" : "no",
                out_result->wrote_0d01 ? "yes" : "no",
                out_result->wrote_0fff ? "yes" : "no",
                out_result->wrote_0140 ? "yes" : "no",
                out_result->wrote_6cf0 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[0],
                response_0c22,
                sizeof(response_0c22),
                &response_0c22_length,
                out_result->last_0c22,
                sizeof(out_result->last_0c22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[1],
                response_6b22,
                sizeof(response_6b22),
                &response_6b22_length,
                out_result->last_6b22,
                sizeof(out_result->last_6b22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[2],
                response_0122,
                sizeof(response_0122),
                &response_0122_length,
                out_result->last_0122,
                sizeof(out_result->last_0122)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[3],
                response_0d22,
                sizeof(response_0d22),
                &response_0d22_length,
                out_result->last_0d22,
                sizeof(out_result->last_0d22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[4],
                response_6c22,
                sizeof(response_6c22),
                &response_6c22_length,
                out_result->last_6c22,
                sizeof(out_result->last_6c22)))
        {
            return 0;
        }

        if (!out_result->wrote_0c00 &&
            preview_response_is_two_byte_value(response_0c22, response_0c22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0C00Step))
            {
                return 0;
            }
            out_result->wrote_0c00 = 1;
        }

        if (!out_result->wrote_6b87 &&
            preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6B87Step))
            {
                return 0;
            }
            out_result->wrote_6b87 = 1;
        }

        if (!out_result->wrote_0141 &&
            preview_response_is_two_byte_value(response_0122, response_0122_length, 0x40U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0141Step))
            {
                return 0;
            }
            out_result->wrote_0141 = 1;
        }

        if (out_result->wrote_0141 &&
            !out_result->wrote_0d01 &&
            preview_response_is_two_byte_value(response_0d22, response_0d22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0D01Step))
            {
                return 0;
            }
            out_result->wrote_0d01 = 1;
        }

        if (out_result->wrote_0d01 && !out_result->wrote_0fff)
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0FFFStep))
            {
                return 0;
            }
            out_result->wrote_0fff = 1;
        }

        if (out_result->wrote_0fff &&
            !out_result->wrote_0140 &&
            out_result->seen_6c22_f055 &&
            (preview_response_is_two_byte_value(response_0122, response_0122_length, 0x41U, 0x55U) ||
             preview_response_is_two_byte_value(response_0122, response_0122_length, 0x40U, 0x55U)))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0140Step))
            {
                return 0;
            }
            out_result->wrote_0140 = 1;
        }

        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF1U, 0x55U))
        {
            out_result->seen_6c22_f155 = 1;
        }
        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF0U, 0x55U))
        {
            out_result->seen_6c22_f055 = 1;
        }

        if (out_result->seen_6c22_f155 && !out_result->wrote_6cf0)
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6CF0Step))
            {
                return 0;
            }
            out_result->wrote_6cf0 = 1;
        }

        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u summary 0c22=%s 6b22=%s 0122=%s 0d22=%s 6c22=%s writes=[0c00:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s] seen_6c22_f155=%s seen_6c22_f055=%s\n",
            iteration,
            out_result->last_0c22,
            out_result->last_6b22,
            out_result->last_0122,
            out_result->last_0d22,
            out_result->last_6c22,
            out_result->wrote_0c00 ? "yes" : "no",
            out_result->wrote_6b87 ? "yes" : "no",
            out_result->wrote_0141 ? "yes" : "no",
            out_result->wrote_0d01 ? "yes" : "no",
            out_result->wrote_0fff ? "yes" : "no",
            out_result->wrote_0140 ? "yes" : "no",
            out_result->wrote_6cf0 ? "yes" : "no",
            out_result->seen_6c22_f155 ? "yes" : "no",
            out_result->seen_6c22_f055 ? "yes" : "no");

        if (out_result->wrote_0c00 &&
            out_result->wrote_6b87 &&
            out_result->wrote_0141 &&
            out_result->wrote_0d01 &&
            out_result->wrote_0fff &&
            out_result->wrote_0140 &&
            out_result->seen_6c22_f055)
        {
            break;
        }
    }

    printf(
        "[preview-attempt-03][phase-1-transition] complete elapsed_ms=%llu last_6c22=%s\n",
        (unsigned long long)(preview_now_ms() - started_ms),
        out_result->last_6c22);
    return 1;
}
#endif

#include "scanbro_usb.h"

#define printf(...) sb_usb_log_printf(stdout, __VA_ARGS__)
#define fprintf(stream, ...) sb_usb_log_printf((stream), __VA_ARGS__)

static const unsigned int kTransferTimeoutMs = 2000U;
static const unsigned int kPreviewBulkInTimeoutMs = 500U;
static const unsigned int kPreviewMaxTotalTransfers = 220U;
static const unsigned int kPreviewMaxBulkInTransfers = 32U;
static const unsigned int kPreviewMaxConsecutiveTimeouts = 4U;
static const size_t kPreviewMaxBytes = 131072U;
static const int kPreviewBulkInReadSize = 8192;
static const char *kPreviewDumpPath = "data/preview-attempt-0x81.raw";
static const size_t kPreviewSummarySampleBytes = 32U;

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
    printf(
        "Usage: %s [--vid HEX] [--pid HEX] [--safe-probe] [--sequence-probe] [--sequence-probe-extended] [--preview-attempt] [--preview-attempt-lamp-window]\n",
        program_name);
    printf("       %s [--capture-preview-raw]\n", program_name);
    printf("       %s [--preview-attempt-03]\n", program_name);
    printf("Defaults: --vid 04A9 --pid 1906\n");
}

static void print_status_stage_only(const char *label)
{
    printf("[scanbro-usb] %s: <none> (status stage only)\n", label);
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

static const char kPreviewBulkPayloadAHex[] =
    "4c1d4c1d4c1d4c1d4c1d4c1d4c1d4c1d4c1df71ca21c4d1cf81ba31b4e1bf91a"
    "a41a4f1afa19a5195019fb18a5185018fb17a6175117fc16a7165216fd15a815"
    "5315fe14a9145414fe13a9135413ff12aa1255120012ab1156110111ac105710"
    "0210ad0f570f020fad0e580e030eae0d590d040daf0c5a0c050cb00bb00ab00a";

static const char kPreviewBulkPayloadBHex[] =
    "b00ab00ab00ab00ab00ab00ab00ab00a";

static const char kPreviewBulkPayloadCHex[] =
    "3300330033003300320032003200320035003500350035003800380038003800"
    "3c003c003c003c00180018001800180015001500150015001200120012001200"
    "0300030003000300020002000200020005000500050005000800080008000800"
    "0c000c000c000c00280028002800280025002500250025002200220022002200";

static const char kPreviewBulkPayloadDHex[] =
    "53075307530753075307530753075307530751074f074d074a07480746074307"
    "41073f073d073a0738073607330731072f072d072a072807260723071c071c07";

static const char kPreviewBulkPayloadEHex[] =
    "5307520750074e074d074b074907470746074407420741073f073d073b073a07"
    "380736073507330731072f072e072c072a07290727072507230722071c071c07";

static const char kPreviewBulkPayloadFHex[] =
    "0000000100020003000400050006000700080009000a000b000c000d000e000f"
    "0010001100120013001400150016001700180019001a001b001c001d001e001f"
    "0020002100220023002400250026002700280029002a002b002c002d002e002f"
    "0030003100320033003400350036003700380039003a003b003c003d003e003f"
    "0040004100420043004400450046004700480049004a004b004c004d004e004f"
    "0050005100520053005400550056005700580059005a005b005c005d005e005f"
    "0060006100620063006400650066006700680069006a006b006c006d006e006f"
    "0070007100720073007400750076007700780079007a007b007c007d007e007f"
    "0080008100820083008400850086008700880089008a008b008c008d008e008f"
    "0090009100920093009400950096009700980099009a009b009c009d009e009f"
    "00a000a100a200a300a400a500a600a700a800a900aa00ab00ac00ad00ae00af"
    "00b000b100b200b300b400b500b600b700b800b900ba00bb00bc00bd00be00bf"
    "00c000c100c200c300c400c500c600c700c800c900ca00cb00cc00cd00ce00cf"
    "00d000d100d200d300d400d500d600d700d800d900da00db00dc00dd00de00df"
    "00e000e100e200e300e400e500e600e700e800e900ea00eb00ec00ed00ee00ef"
    "00f000f100f200f300f400f500f600f700f800f900fa00fb00fc00fd00fe00ff";

static const char kPreviewBulkPayloadGHex[] =
    "5307530753075307530753075307530753074f074a07450740073b0737073207"
    "2d07280723071f071a07150710070b0707070207fd06f806f306ef06ea06e506"
    "e006db06d706d206cd06c806c306bf06ba06b506b006ab06a706a2069d069806"
    "93068f068a06850680067b06770672066d06680663065f065a06550650064b06"
    "470642063d06380633062f062a06250620061b06170612060d0608060306ff05"
    "fa05f505f005eb05e705e205dd05d805d305cf05ca05c505c005bb05b605b205"
    "ad05a805a3059e059a05950590058b05860582057d05780573056e056a056505"
    "60055b05560552054d05480543053e053a05350530052b05260522051d051805"
    "13050e050a0505050005fb04f604f204ed04e804e304de04da04d504d004cb04"
    "c604c204bd04b804b304ae04aa04a504a0049b04960492048d04880483047e04"
    "7a04750470046b04660462045d04580453044e044a04450440043b0436043104"
    "2d04280423041e041904150410040b0406040104fd03f803f303ee03e903e503"
    "e003db03d603d103cd03c803c303be03b903b503b003ab03a603a1039d039803"
    "93038e038903850380037b03760371036d03680363035e035903550350034b03"
    "460341033d03380333032e032903250320031b03160311030d0308030303fe02"
    "f902f502f002eb02e602e102dd02d802d302ce02c902c502c002bb02ac02ac02";

static const char kPreviewBulkPayloadHHex[] =
    "53072e070907e406bf06990674064f062a060506df05ba05950570054a052505"
    "0005db04b60490046b0446042104fb03d603b1038c03670341031c03ac02ac02";

static const preview_control_step kPreviewInitialControlSteps[] =
{
    {1059U, 1, 0x0C, 0x008EU, 0x0000U, 1U, NULL},
    {1061U, 1, 0x04, 0x008EU, 0x0622U, 2U, NULL},
    {1063U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0e01"},
    {1071U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0e00"},
    {1073U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0140"}
};

static const preview_control_step kPreviewTransitionControlSteps[] =
{
    {1817U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
    {1819U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0280"},
    {1821U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
    {1823U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0280"},
    {1825U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
    {1827U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
    {1829U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
    {1833U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
    {1835U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
    {1837U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
    {1839U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
    {1841U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
    {1843U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2108"},
    {1845U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2408"},
    {1847U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6901"},
    {1849U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6a08"},
    {1851U, 0, 0x04, 0x0083U, 0x0000U, 2U, "5f01"},
    {1853U, 0, 0x04, 0x0083U, 0x0000U, 2U, "3d00"},
    {1855U, 0, 0x04, 0x0083U, 0x0000U, 2U, "3e00"},
    {1857U, 0, 0x04, 0x0083U, 0x0000U, 2U, "3f04"},
    {1859U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2500"},
    {1861U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2600"},
    {1863U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2710"},
    {1865U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2301"},
    {1867U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2201"},
    {1869U, 1, 0x04, 0x008EU, 0x6C22U, 2U, NULL},
    {1871U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6cf1"},
    {1873U, 1, 0x04, 0x008EU, 0x6C22U, 2U, NULL},
    {1875U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6cf1"}
};

static const preview_bulk_pair kPreviewBulkPairs[] =
{
    {1877U, "0000001080000000", 1879U, kPreviewBulkPayloadAHex},
    {1881U, "0040001080000000", 1883U, kPreviewBulkPayloadAHex},
    {1885U, "0080001010000000", 1887U, kPreviewBulkPayloadBHex},
    {1889U, "00c0001080000000", 1893U, kPreviewBulkPayloadAHex},
    {1895U, "0000011010000000", 1897U, kPreviewBulkPayloadBHex},
    {2427U, "000a000180000000", 2429U, kPreviewBulkPayloadCHex},
    {2463U, "000a000180000000", 2465U, kPreviewBulkPayloadCHex},
    {2719U, "0000001040000000", 2721U, kPreviewBulkPayloadDHex},
    {2723U, "0040001040000000", 2725U, kPreviewBulkPayloadDHex},
    {2727U, "0080001040000000", 2729U, kPreviewBulkPayloadEHex},
    {2731U, "00c0001040000000", 2733U, kPreviewBulkPayloadDHex},
    {2735U, "0000011040000000", 2737U, kPreviewBulkPayloadEHex},
    {2907U, "0000000100020000", 2909U, kPreviewBulkPayloadFHex},
    {2923U, "0002000100020000", 2925U, kPreviewBulkPayloadFHex},
    {2939U, "0004000100020000", 2941U, kPreviewBulkPayloadFHex},
    {3097U, "0000001000020000", 3099U, kPreviewBulkPayloadGHex},
    {3101U, "0040001000020000", 3103U, kPreviewBulkPayloadGHex},
    {3105U, "0080001040000000", 3107U, kPreviewBulkPayloadHHex},
    {3109U, "00c0001000020000", 3111U, kPreviewBulkPayloadGHex},
    {3113U, "0000011040000000", 3115U, kPreviewBulkPayloadHHex}
};

static const preview_pointer_step kPreviewPointerSteps[] =
{
    {3603U, "0000001090130000", 3607U, 3609U, {3611U, 3613U, 3617U, 3619U}},
    {3621U, "00000010881a0000", 3625U, 3627U, {3629U, 3632U, 3635U, 3637U}},
    {3641U, "00000010681a0000", 3643U, 3645U, {3647U, 3651U, 3653U, 3657U}},
    {3659U, "00000010a81b0000", 3661U, 3665U, {3667U, 3669U, 3671U, 3675U}},
    {3677U, "00000010e8200000", 3679U, 0U, {0U, 0U, 0U, 0U}}
};

static const uint16_t kPreviewPointerPollIndices[4] = {0x4222U, 0x4322U, 0x4422U, 0x4522U};

static const preview_state_poll_step kPreview03TransitionPollSteps[] =
{
    {2629U, 0x0C22U, "0x0C22"},
    {2742U, 0x6B22U, "0x6B22"},
    {2749U, 0x0122U, "0x0122"},
    {2753U, 0x0D22U, "0x0D22"},
    {2643U, 0x6C22U, "0x6C22"}
};

static const preview_state_poll_step kPreview03ReadinessPollSteps[] =
{
    {3129U, 0x4222U, "0x4222"},
    {3133U, 0x4322U, "0x4322"},
    {3135U, 0x4422U, "0x4422"},
    {3137U, 0x4522U, "0x4522"}
};

static const preview_state_write_step kPreview03Write6B87Step =
    {2747U, 0x04U, 0x0083U, 0x0000U, 2U, "6b87", "write 6b87"};
static const preview_state_write_step kPreview03Write0141Step =
    {2751U, 0x04U, 0x0083U, 0x0000U, 2U, "0141", "write 0141"};
static const preview_state_write_step kPreview03Write0D01PreStep =
    {2635U, 0x04U, 0x0083U, 0x0000U, 2U, "0d01", "write 0d01 (pre-kickoff)"};
static const preview_state_write_step kPreview03Write0D01Step =
    {2755U, 0x04U, 0x0083U, 0x0000U, 2U, "0d01", "write 0d01"};
static const preview_state_write_step kPreview03Write0FFFStep =
    {2759U, 0x04U, 0x0083U, 0x0000U, 2U, "0fff", "write 0fff"};
static const preview_state_write_step kPreview03Write0140Step =
    {2653U, 0x04U, 0x0083U, 0x0000U, 2U, "0140", "write 0140"};
static const preview_state_write_step kPreview03Write0C00Step =
    {2631U, 0x04U, 0x0083U, 0x0000U, 2U, "0c00", "write 0c00"};
static const preview_state_write_step kPreview03Write6EFFGpioProfilePrimeStep =
    {2636U, 0x04U, 0x0083U, 0x0000U, 2U, "6eff", "write 6eff (gl847 gpio profile prime)"};
static const preview_state_write_step kPreview03Write6C00GpioProfileStep =
    {2637U, 0x04U, 0x0083U, 0x0000U, 2U, "6c00", "write 6c00 (gl847 gpio profile neutral)"};
static const preview_state_write_step kPreview03Write6B02GpioProfileStep =
    {2638U, 0x04U, 0x0083U, 0x0000U, 2U, "6b02", "write 6b02 (gl847 gpio profile)"};
static const preview_state_write_step kPreview03Write6CF9GpioProfileStep =
    {2639U, 0x04U, 0x0083U, 0x0000U, 2U, "6cf9", "write 6cf9 (gl847 gpio profile)"};
static const preview_state_write_step kPreview03Write6D20GpioProfileStep =
    {2640U, 0x04U, 0x0083U, 0x0000U, 2U, "6d20", "write 6d20 (gl847 gpio profile)"};
static const preview_state_write_step kPreview03Write6EFFGpioProfileFinalStep =
    {2641U, 0x04U, 0x0083U, 0x0000U, 2U, "6eff", "write 6eff (gl847 gpio profile final)"};
static const preview_state_write_step kPreview03Write6F00GpioProfileStep =
    {2642U, 0x04U, 0x0083U, 0x0000U, 2U, "6f00", "write 6f00 (gl847 gpio profile)"};
static const preview_state_write_step kPreview03Write6CF0Step =
    {2645U, 0x04U, 0x0083U, 0x0000U, 2U, "6cf0", "write 6cf0"};
static const unsigned int kPreview03Write6CGpio10PreArmFrame = 2644U;
/* Keep GPIO10 bit semantics only for pre-arm; consume edge follows capture-literal 6cf0. */
static const uint8_t kPreview03Reg6CGpio10Mask = 0x02U;
static const preview_state_write_step kPreview03PointerWriteStep =
    {3139U, 0x04U, 0x0082U, 0x0000U, 8U, "00000010f01c0000", "pointer write"};

static const unsigned int kPreview03BulkFrameHints[] = {3144U, 3146U};

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

static int decode_hex_string(
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

static int ensure_preview_output_directory(void)
{
    errno = 0;
    if (SB_MKDIR("data") == 0 || errno == EEXIST)
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

static size_t preview_count_non_zero_bytes(const uint8_t *buffer, size_t length)
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

static void preview_log_saved_file_summary(const char *path)
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

static void preview_set_failure(preview_runtime_state *state, const char *stage_text)
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

static int preview_record_transfer(preview_runtime_state *state, const char *stage_text)
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

static int preview_record_bulk_in_transfer(preview_runtime_state *state, const char *stage_text)
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

static int preview_run_control_step(
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

static int preview_run_control_in_step_with_capture(
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

    if ((size_t)status > out_response_size)
    {
        preview_set_failure(state, "control IN capture output buffer too small");
        return 0;
    }

    memcpy(out_response, response_buffer, (size_t)status);
    *out_response_length = (size_t)status;
    return 1;
}

static uint64_t preview_now_ms(void)
{
    struct timespec now;
    if (timespec_get(&now, TIME_UTC) != TIME_UTC)
    {
        return 0U;
    }

    return ((uint64_t)now.tv_sec * 1000U) + ((uint64_t)now.tv_nsec / 1000000U);
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

static int preview_response_is_two_byte_value(
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

static int preview_poll_state_register(
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

static int preview_run_state_write_step(
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

static int preview_run_phase1_reg6c_gpio10_write(
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

static int preview_run_preamble_sequence(
    libusb_device_handle *target_handle,
    preview_runtime_state *state)
{
    size_t step_index;

    for (step_index = 0; step_index < (sizeof(kPreviewInitialControlSteps) / sizeof(kPreviewInitialControlSteps[0])); ++step_index)
    {
        if (!preview_run_control_step(target_handle, state, &kPreviewInitialControlSteps[step_index]))
        {
            return 0;
        }
    }

    for (step_index = 0; step_index < (sizeof(kPreviewTransitionControlSteps) / sizeof(kPreviewTransitionControlSteps[0])); ++step_index)
    {
        if (!preview_run_control_step(target_handle, state, &kPreviewTransitionControlSteps[step_index]))
        {
            return 0;
        }
    }

    for (step_index = 0; step_index < (sizeof(kPreviewBulkPairs) / sizeof(kPreviewBulkPairs[0])); ++step_index)
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

static int preview_run_bulk_out_step(
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

static int preview_run_bulk_in_step(
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

int preview_run_attempt_mode(libusb_device_handle *target_handle)
{
    preview_runtime_state state;
    uint8_t bulk_in_buffer[8192];
    size_t step_index;
    unsigned int capture_loop_timeouts = 0U;

    memset(&state, 0, sizeof(state));

    if (!ensure_preview_output_directory())
    {
        return 1;
    }

    state.output_file = fopen(kPreviewDumpPath, "wb");
    if (state.output_file == NULL)
    {
        fprintf(stderr, "[preview-attempt] cannot open output file: %s\n", kPreviewDumpPath);
        return 1;
    }

    printf("\n[preview-attempt] mode enabled.\n");
    printf("[preview-attempt] raw output: %s\n", kPreviewDumpPath);
    printf(
        "[preview-attempt] limits: timeout=%u ms bulk-in-size=%d max-bytes=%zu max-bulk-in-transfers=%u max-total-transfers=%u\n",
        kPreviewBulkInTimeoutMs,
        kPreviewBulkInReadSize,
        kPreviewMaxBytes,
        kPreviewMaxBulkInTransfers,
        kPreviewMaxTotalTransfers);

    if (!preview_run_preamble_sequence(target_handle, &state))
    {
        goto fail;
    }

    for (step_index = 0; step_index < (sizeof(kPreviewPointerSteps) / sizeof(kPreviewPointerSteps[0])); ++step_index)
    {
        preview_control_step pointer_control_step;
        size_t poll_index;
        int transferred = 0;
        int timed_out = 0;

        memset(&pointer_control_step, 0, sizeof(pointer_control_step));
        pointer_control_step.frame_number = kPreviewPointerSteps[step_index].control_frame;
        pointer_control_step.is_in = 0;
        pointer_control_step.request = 0x04;
        pointer_control_step.value = 0x0082U;
        pointer_control_step.index = 0x0000U;
        pointer_control_step.length = 8U;
        pointer_control_step.payload_hex = kPreviewPointerSteps[step_index].control_payload_hex;

        if (!preview_run_control_step(target_handle, &state, &pointer_control_step))
        {
            goto fail;
        }

        if (kPreviewPointerSteps[step_index].submit_frame_a != 0U)
        {
            if (!preview_run_bulk_in_step(
                    target_handle,
                    &state,
                    kPreviewPointerSteps[step_index].submit_frame_a,
                    bulk_in_buffer,
                    kPreviewBulkInReadSize,
                    &transferred,
                    &timed_out))
            {
                goto fail;
            }
        }

        if (kPreviewPointerSteps[step_index].submit_frame_b != 0U)
        {
            if (!preview_run_bulk_in_step(
                    target_handle,
                    &state,
                    kPreviewPointerSteps[step_index].submit_frame_b,
                    bulk_in_buffer,
                    kPreviewBulkInReadSize,
                    &transferred,
                    &timed_out))
            {
                goto fail;
            }
        }

        for (poll_index = 0U; poll_index < 4U; ++poll_index)
        {
            if (kPreviewPointerSteps[step_index].poll_frames[poll_index] == 0U)
            {
                continue;
            }

            preview_control_step poll_step;
            memset(&poll_step, 0, sizeof(poll_step));
            poll_step.frame_number = kPreviewPointerSteps[step_index].poll_frames[poll_index];
            poll_step.is_in = 1;
            poll_step.request = 0x04;
            poll_step.value = 0x008EU;
            poll_step.index = kPreviewPointerPollIndices[poll_index];
            poll_step.length = 2U;
            poll_step.payload_hex = NULL;

            if (!preview_run_control_step(target_handle, &state, &poll_step))
            {
                goto fail;
            }
        }
    }

    while (state.total_bytes < kPreviewMaxBytes &&
           state.bulk_in_transfers < kPreviewMaxBulkInTransfers)
    {
        int transferred = 0;
        int timed_out = 0;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                0U,
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            capture_loop_timeouts++;
            if (capture_loop_timeouts >= kPreviewMaxConsecutiveTimeouts)
            {
                preview_set_failure(&state, "capture-loop stopped after consecutive bulk IN timeouts");
                break;
            }
        }
        else
        {
            capture_loop_timeouts = 0U;
        }
    }

    fclose(state.output_file);
    state.output_file = NULL;
    preview_log_saved_file_summary(kPreviewDumpPath);

    if (state.total_bytes == 0U)
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "bulk IN data phase not reached before stop condition");
        }
        fprintf(stderr, "[preview-attempt] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt] no raw data saved to %s\n", kPreviewDumpPath);
        return 1;
    }

    printf(
        "[preview-attempt] completed: saved %zu bytes to %s\n",
        state.total_bytes,
        kPreviewDumpPath);
    printf(
        "[preview-attempt] transfer counters: total=%u bulk-in=%u\n",
        state.total_transfers,
        state.bulk_in_transfers);

    if (state.failure_stage[0] != '\0')
    {
        printf("[preview-attempt] stop reason: %s\n", state.failure_stage);
    }

    return 0;

fail:
    if (state.output_file != NULL)
    {
        fclose(state.output_file);
        state.output_file = NULL;
    }

    if (state.failure_stage[0] == '\0')
    {
        preview_set_failure(&state, "unexpected preview-attempt failure");
    }

    fprintf(stderr, "[preview-attempt] failed: %s\n", state.failure_stage);
    fprintf(stderr, "[preview-attempt] bytes saved before failure: %zu\n", state.total_bytes);
    return 1;
}

#if 0
int preview_run_attempt03_mode(libusb_device_handle *target_handle)
{
    preview_runtime_state state;
    uint8_t bulk_in_buffer[8192];
    unsigned int capture_loop_timeouts = 0U;
    unsigned int checkpoint_poll_iteration = 0U;
    unsigned int seen_4422_iteration = 0U;
    unsigned int seen_4522_iteration = 0U;
    unsigned int seen_4422_frame_hint = 0U;
    unsigned int seen_4522_frame_hint = 0U;
    unsigned int setup_kickoff_gate_iteration = 0U;
    uint64_t readiness_started_ms = 0U;
    uint64_t readiness_deadline_ms = 0U;
    uint64_t setup_kickoff_gate_started_ms = 0U;
    uint64_t setup_kickoff_gate_deadline_ms = 0U;
    uint64_t readiness_timeout_ms = (uint64_t)kTransferTimeoutMs * (uint64_t)kPreviewMaxConsecutiveTimeouts;
    unsigned int readiness_iteration_cap = kPreviewMaxTotalTransfers;
    size_t step_index;
    int checkpoint_poll_pass = 0;
    int checkpoint_pointer_pass = 0;
    int checkpoint_bulk_non_zero_pass = 0;
    int seen_4422_0e55 = 0;
    int seen_4522_7855 = 0;
    char poll_4422_hex[32];
    char poll_4522_hex[32];

    memset(&state, 0, sizeof(state));
    snprintf(poll_4422_hex, sizeof(poll_4422_hex), "<missing>");
    snprintf(poll_4522_hex, sizeof(poll_4522_hex), "<missing>");

    if (!ensure_preview_output_directory())
    {
        return 1;
    }

    state.output_file = fopen(kPreviewDumpPath, "wb");
    if (state.output_file == NULL)
    {
        fprintf(stderr, "[preview-attempt-03] cannot open output file: %s\n", kPreviewDumpPath);
        return 1;
    }

    printf("\n[preview-attempt-03] mode enabled.\n");
    printf("[preview-attempt-03] source-of-truth window: 03_lamp_on_window_min_3129_3178.pcapng\n");
    printf("[preview-attempt-03] raw output: %s\n", kPreviewDumpPath);
    printf(
        "[preview-attempt-03] limits: timeout=%u ms bulk-in-size=%d max-bytes=%zu max-bulk-in-transfers=%u max-total-transfers=%u\n",
        kPreviewBulkInTimeoutMs,
        kPreviewBulkInReadSize,
        kPreviewMaxBytes,
        kPreviewMaxBulkInTransfers,
        kPreviewMaxTotalTransfers);

    if (!preview_run_preamble_sequence(target_handle, &state))
    {
        goto fail;
    }

    printf(
        "[preview-attempt-03][setup] pre-6c upstream prime begin (frames 1895/1897/1899/1901/1903/1905/1907/1909/1911)\n");
    for (step_index = 0U; step_index < 3U; ++step_index)
    {
        preview_control_step poll_step;
        uint8_t response_buffer[8];
        size_t response_length = 0U;
        uint8_t expected_buffer[8];
        size_t expected_length = 0U;
        int expected_match;
        char response_hex[32];
        char expected_hex[32];

        memset(&poll_step, 0, sizeof(poll_step));
        memset(response_buffer, 0, sizeof(response_buffer));
        memset(expected_buffer, 0, sizeof(expected_buffer));
        snprintf(response_hex, sizeof(response_hex), "<none>");
        snprintf(expected_hex, sizeof(expected_hex), "<none>");

        poll_step.frame_number = kPreviewLampWindowPre6CPrimePollSteps[step_index].frame_number;
        poll_step.is_in = 1;
        poll_step.request = 0x04;
        poll_step.value = 0x008EU;
        poll_step.index = kPreviewLampWindowPre6CPrimePollSteps[step_index].index;
        poll_step.length = 2U;
        poll_step.payload_hex = NULL;

        if (!decode_hex_string(
                kPreviewLampWindowPre6CPrimePollSteps[step_index].expected_response_hex,
                expected_buffer,
                sizeof(expected_buffer),
                &expected_length))
        {
            preview_set_failure(&state, "setup pre-6c upstream prime expected response decode failed");
            goto fail;
        }

        if (!preview_run_control_in_step_with_capture(
                target_handle,
                &state,
                &poll_step,
                response_buffer,
                sizeof(response_buffer),
                &response_length))
        {
            goto fail;
        }

        preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
        preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
        expected_match = (response_length == expected_length) &&
                         (memcmp(response_buffer, expected_buffer, response_length) == 0);

        printf(
            "[preview-attempt-03][setup] pre-6c upstream prime frame=%u index=0x%04X response=%s expected=%s match=%s\n",
            poll_step.frame_number,
            poll_step.index,
            response_hex,
            expected_hex,
            expected_match ? "yes" : "no");

        if (!expected_match)
        {
            preview_set_failure(&state, "setup pre-6c upstream prime poll response mismatch");
            goto fail;
        }

        printf(
            "[preview-attempt-03][setup] pre-6c upstream prime frame=%u payload=%s\n",
            kPreviewLampWindowPre6CPrimeWriteSteps[step_index].frame_number,
            kPreviewLampWindowPre6CPrimeWriteSteps[step_index].payload_hex);
        if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindowPre6CPrimeWriteSteps[step_index]))
        {
            goto fail;
        }
    }

    printf(
        "[preview-attempt-03][setup] pre-6c upstream prime frame=%u payload=%s\n",
        kPreviewLampWindowPre6CPrimeWriteSteps[3].frame_number,
        kPreviewLampWindowPre6CPrimeWriteSteps[3].payload_hex);
    if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindowPre6CPrimeWriteSteps[3]))
    {
        goto fail;
    }

    {
        preview_control_step poll_step;
        uint8_t response_buffer[8];
        size_t response_length = 0U;
        uint8_t expected_buffer[8];
        size_t expected_length = 0U;
        int expected_match;
        char response_hex[32];
        char expected_hex[32];

        memset(&poll_step, 0, sizeof(poll_step));
        memset(response_buffer, 0, sizeof(response_buffer));
        memset(expected_buffer, 0, sizeof(expected_buffer));
        snprintf(response_hex, sizeof(response_hex), "<none>");
        snprintf(expected_hex, sizeof(expected_hex), "<none>");

        poll_step.frame_number = kPreviewLampWindowPre6CPrimePollSteps[3].frame_number;
        poll_step.is_in = 1;
        poll_step.request = 0x04;
        poll_step.value = 0x008EU;
        poll_step.index = kPreviewLampWindowPre6CPrimePollSteps[3].index;
        poll_step.length = 2U;
        poll_step.payload_hex = NULL;

        if (!decode_hex_string(
                kPreviewLampWindowPre6CPrimePollSteps[3].expected_response_hex,
                expected_buffer,
                sizeof(expected_buffer),
                &expected_length))
        {
            preview_set_failure(&state, "setup pre-6c upstream prime final expected response decode failed");
            goto fail;
        }

        if (!preview_run_control_in_step_with_capture(
                target_handle,
                &state,
                &poll_step,
                response_buffer,
                sizeof(response_buffer),
                &response_length))
        {
            goto fail;
        }

        preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
        preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
        expected_match = (response_length == expected_length) &&
                         (memcmp(response_buffer, expected_buffer, response_length) == 0);

        printf(
            "[preview-attempt-03][setup] pre-6c upstream prime frame=%u index=0x%04X response=%s expected=%s match=%s\n",
            poll_step.frame_number,
            poll_step.index,
            response_hex,
            expected_hex,
            expected_match ? "yes" : "no");

        if (!expected_match)
        {
            preview_set_failure(&state, "setup pre-6c upstream prime final poll response mismatch");
            goto fail;
        }
    }

    printf(
        "[preview-attempt-03][setup] pre-6c upstream prime frame=%u payload=%s\n",
        kPreviewLampWindowPre6CPrimeWriteSteps[4].frame_number,
        kPreviewLampWindowPre6CPrimeWriteSteps[4].payload_hex);
    if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindowPre6CPrimeWriteSteps[4]))
    {
        goto fail;
    }
    printf("[preview-attempt-03][setup] pre-6c upstream prime complete\n");

    printf(
        "[preview-attempt-03][setup] pre-kickoff transition begin (frames 2629/2631/2633/2635/2637/2639/2641/2643/2645/2651/2653)\n");
    for (step_index = 0; step_index < (sizeof(kPreviewLampWindowPreKickoffTransitionSteps) / sizeof(kPreviewLampWindowPreKickoffTransitionSteps[0])); ++step_index)
    {
        preview_control_step poll_step;
        preview_control_step write_step;
        uint8_t response_buffer[8];
        size_t response_length = 0U;
        uint8_t expected_buffer[8];
        size_t expected_length = 0U;
        int expected_match;
        char response_hex[32];
        char expected_hex[32];

        memset(&poll_step, 0, sizeof(poll_step));
        memset(&write_step, 0, sizeof(write_step));
        memset(response_buffer, 0, sizeof(response_buffer));
        memset(expected_buffer, 0, sizeof(expected_buffer));
        snprintf(response_hex, sizeof(response_hex), "<none>");
        snprintf(expected_hex, sizeof(expected_hex), "<none>");

        poll_step.frame_number = kPreviewLampWindowPreKickoffTransitionSteps[step_index].poll_frame_number;
        poll_step.is_in = 1;
        poll_step.request = 0x04;
        poll_step.value = 0x008EU;
        poll_step.index = kPreviewLampWindowPreKickoffTransitionSteps[step_index].poll_index;
        poll_step.length = 2U;
        poll_step.payload_hex = NULL;

        if (!decode_hex_string(
                kPreviewLampWindowPreKickoffTransitionSteps[step_index].expected_response_hex,
                expected_buffer,
                sizeof(expected_buffer),
                &expected_length))
        {
            preview_set_failure(&state, "setup pre-kickoff expected response decode failed");
            goto fail;
        }

        if (poll_step.index == 0x6C22U)
        {
            unsigned int progression_iteration = 0U;
            uint64_t progression_started_ms = preview_now_ms();
            uint64_t progression_deadline_ms = progression_started_ms + readiness_timeout_ms;
            int seen_f155 = 0;
            int wrote_6cf0 = 0;
            char last_6c22_hex[32];

            snprintf(last_6c22_hex, sizeof(last_6c22_hex), "<none>");

            while (1)
            {
                char message[192];
                int is_f155;

                progression_iteration++;
                if (progression_iteration > readiness_iteration_cap)
                {
                    snprintf(
                        message,
                        sizeof(message),
                        "setup pre-kickoff 0x6C22 progression not satisfied before iteration cap (max iterations=%u last_response=%s seen_f155=%s wrote_6cf0=%s)",
                        readiness_iteration_cap,
                        last_6c22_hex,
                        seen_f155 ? "yes" : "no",
                        wrote_6cf0 ? "yes" : "no");
                    preview_set_failure(&state, message);
                    goto fail;
                }

                if (preview_now_ms() >= progression_deadline_ms)
                {
                    snprintf(
                        message,
                        sizeof(message),
                        "setup pre-kickoff 0x6C22 progression timed out (limit=%llu ms last_response=%s seen_f155=%s wrote_6cf0=%s)",
                        (unsigned long long)readiness_timeout_ms,
                        last_6c22_hex,
                        seen_f155 ? "yes" : "no",
                        wrote_6cf0 ? "yes" : "no");
                    preview_set_failure(&state, message);
                    goto fail;
                }

                if (!preview_run_control_in_step_with_capture_unbounded(
                        target_handle,
                        &state,
                        &poll_step,
                        response_buffer,
                        sizeof(response_buffer),
                        &response_length))
                {
                    goto fail;
                }

                preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
                preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
                expected_match = (response_length == expected_length) &&
                                 (memcmp(response_buffer, expected_buffer, response_length) == 0);
                snprintf(last_6c22_hex, sizeof(last_6c22_hex), "%s", response_hex);

                is_f155 = (response_length == 2U) &&
                          (response_buffer[0] == 0xF1U) &&
                          (response_buffer[1] == 0x55U);
                if (is_f155)
                {
                    seen_f155 = 1;
                }

                printf(
                    "[preview-attempt-03][setup] pre-kickoff 0x6C22 progression iter=%u response=%s expected=%s match=%s seen_f155=%s wrote_6cf0=%s\n",
                    progression_iteration,
                    response_hex,
                    expected_hex,
                    expected_match ? "yes" : "no",
                    seen_f155 ? "yes" : "no",
                    wrote_6cf0 ? "yes" : "no");

                if (expected_match)
                {
                    break;
                }

                if (!wrote_6cf0 && is_f155)
                {
                    printf(
                        "[preview-attempt-03][setup] pre-kickoff 0x6C22 progression frame=%u payload=%s\n",
                        kPreviewLampWindow6CToF0WriteStep.frame_number,
                        kPreviewLampWindow6CToF0WriteStep.payload_hex);
                    if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindow6CToF0WriteStep))
                    {
                        goto fail;
                    }
                    wrote_6cf0 = 1;
                }
            }
        }
        else
        {
            if (!preview_run_control_in_step_with_capture(
                    target_handle,
                    &state,
                    &poll_step,
                    response_buffer,
                    sizeof(response_buffer),
                    &response_length))
            {
                goto fail;
            }

            preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
            preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
            expected_match = (response_length == expected_length) &&
                             (memcmp(response_buffer, expected_buffer, response_length) == 0);
        }

        printf(
            "[preview-attempt-03][setup] pre-kickoff frame=%u index=0x%04X response=%s expected=%s match=%s\n",
            poll_step.frame_number,
            poll_step.index,
            response_hex,
            expected_hex,
            expected_match ? "yes" : "no");

        if (!expected_match)
        {
            preview_set_failure(&state, "setup pre-kickoff poll response mismatch");
            goto fail;
        }

        if (kPreviewLampWindowPreKickoffTransitionSteps[step_index].write_payload_hex != NULL)
        {
            write_step.frame_number = kPreviewLampWindowPreKickoffTransitionSteps[step_index].write_frame_number;
            write_step.is_in = 0;
            write_step.request = 0x04;
            write_step.value = 0x0083U;
            write_step.index = 0x0000U;
            write_step.length = 2U;
            write_step.payload_hex = kPreviewLampWindowPreKickoffTransitionSteps[step_index].write_payload_hex;

            printf(
                "[preview-attempt-03][setup] pre-kickoff frame=%u payload=%s\n",
                write_step.frame_number,
                write_step.payload_hex);
            if (!preview_run_control_step(target_handle, &state, &write_step))
            {
                goto fail;
            }
        }
    }
    printf("[preview-attempt-03][setup] pre-kickoff transition complete\n");

    setup_kickoff_gate_started_ms = preview_now_ms();
    setup_kickoff_gate_deadline_ms = setup_kickoff_gate_started_ms + readiness_timeout_ms;
    printf(
        "[preview-attempt-03][setup] kickoff-readiness gate begin (frame hint 2742 index=0x6B22 target=8755)\n");
    while (1)
    {
        preview_control_step poll_step;
        uint8_t response_buffer[8];
        size_t response_length = 0U;
        uint8_t expected_buffer[8];
        size_t expected_length = 0U;
        int expected_match;
        char response_hex[32];
        char expected_hex[32];

        setup_kickoff_gate_iteration++;
        if (setup_kickoff_gate_iteration > readiness_iteration_cap)
        {
            char message[192];
            snprintf(
                message,
                sizeof(message),
                "setup kickoff-readiness gate not satisfied before iteration cap (max iterations=%u)",
                readiness_iteration_cap);
            preview_set_failure(&state, message);
            goto fail;
        }
        if (preview_now_ms() >= setup_kickoff_gate_deadline_ms)
        {
            char message[192];
            snprintf(
                message,
                sizeof(message),
                "setup kickoff-readiness gate timed out (limit=%llu ms)",
                (unsigned long long)readiness_timeout_ms);
            preview_set_failure(&state, message);
            goto fail;
        }

        memset(&poll_step, 0, sizeof(poll_step));
        memset(response_buffer, 0, sizeof(response_buffer));
        memset(expected_buffer, 0, sizeof(expected_buffer));
        snprintf(response_hex, sizeof(response_hex), "<none>");
        snprintf(expected_hex, sizeof(expected_hex), "<none>");

        poll_step.frame_number = kPreviewLampWindowKickoffPollSteps[0].frame_number;
        poll_step.is_in = 1;
        poll_step.request = 0x04;
        poll_step.value = 0x008EU;
        poll_step.index = kPreviewLampWindowKickoffPollSteps[0].index;
        poll_step.length = 2U;
        poll_step.payload_hex = NULL;

        if (!decode_hex_string(
                kPreviewLampWindowKickoffPollSteps[0].expected_response_hex,
                expected_buffer,
                sizeof(expected_buffer),
                &expected_length))
        {
            preview_set_failure(&state, "setup kickoff-readiness expected response decode failed");
            goto fail;
        }

        if (!preview_run_control_in_step_with_capture_unbounded(
                target_handle,
                &state,
                &poll_step,
                response_buffer,
                sizeof(response_buffer),
                &response_length))
        {
            goto fail;
        }

        preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
        preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
        expected_match = (response_length == expected_length) &&
                         (memcmp(response_buffer, expected_buffer, response_length) == 0);

        printf(
            "[preview-attempt-03][setup] kickoff-readiness iter=%u frame=%u index=0x%04X response=%s expected=%s match=%s\n",
            setup_kickoff_gate_iteration,
            poll_step.frame_number,
            poll_step.index,
            response_hex,
            expected_hex,
            expected_match ? "yes" : "no");

        if (expected_match)
        {
            break;
        }
    }
    printf(
        "[preview-attempt-03][setup] kickoff-readiness gate complete iteration=%u elapsed_ms=%llu\n",
        setup_kickoff_gate_iteration,
        (unsigned long long)(preview_now_ms() - setup_kickoff_gate_started_ms));

    printf(
        "[preview-attempt-03][setup] kickoff begin (frames 2742/2747/2749/2751/2753/2755/2759)\n");
    for (step_index = 0; step_index < (sizeof(kPreviewLampWindowKickoffPollSteps) / sizeof(kPreviewLampWindowKickoffPollSteps[0])); ++step_index)
    {
        preview_control_step poll_step;
        uint8_t response_buffer[8];
        size_t response_length = 0U;
        uint8_t expected_buffer[8];
        size_t expected_length = 0U;
        int expected_match;
        char response_hex[32];
        char expected_hex[32];

        memset(&poll_step, 0, sizeof(poll_step));
        memset(response_buffer, 0, sizeof(response_buffer));
        memset(expected_buffer, 0, sizeof(expected_buffer));
        snprintf(response_hex, sizeof(response_hex), "<none>");
        snprintf(expected_hex, sizeof(expected_hex), "<none>");

        poll_step.frame_number = kPreviewLampWindowKickoffPollSteps[step_index].frame_number;
        poll_step.is_in = 1;
        poll_step.request = 0x04;
        poll_step.value = 0x008EU;
        poll_step.index = kPreviewLampWindowKickoffPollSteps[step_index].index;
        poll_step.length = 2U;
        poll_step.payload_hex = NULL;

        if (!decode_hex_string(
                kPreviewLampWindowKickoffPollSteps[step_index].expected_response_hex,
                expected_buffer,
                sizeof(expected_buffer),
                &expected_length))
        {
            preview_set_failure(&state, "setup kickoff expected response decode failed");
            goto fail;
        }

        if (!preview_run_control_in_step_with_capture(
                target_handle,
                &state,
                &poll_step,
                response_buffer,
                sizeof(response_buffer),
                &response_length))
        {
            goto fail;
        }

        preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
        preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
        expected_match = (response_length == expected_length) &&
                         (memcmp(response_buffer, expected_buffer, response_length) == 0);

        printf(
            "[preview-attempt-03][setup] frame=%u index=0x%04X response=%s expected=%s match=%s\n",
            poll_step.frame_number,
            poll_step.index,
            response_hex,
            expected_hex,
            expected_match ? "yes" : "no");

        if (!expected_match)
        {
            preview_set_failure(&state, "setup kickoff poll response mismatch");
            goto fail;
        }

        printf(
            "[preview-attempt-03][setup] frame=%u payload=%s\n",
            kPreviewLampWindowKickoffWriteSteps[step_index].frame_number,
            kPreviewLampWindowKickoffWriteSteps[step_index].payload_hex);
        if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindowKickoffWriteSteps[step_index]))
        {
            goto fail;
        }
    }

    printf(
        "[preview-attempt-03][setup] frame=%u payload=%s\n",
        kPreviewLampWindowKickoffWriteSteps[3].frame_number,
        kPreviewLampWindowKickoffWriteSteps[3].payload_hex);
    if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindowKickoffWriteSteps[3]))
    {
        goto fail;
    }

    printf("[preview-attempt-03][setup] kickoff complete\n");

    readiness_started_ms = preview_now_ms();
    readiness_deadline_ms = readiness_started_ms + readiness_timeout_ms;
    printf(
        "[preview-attempt-03][checkpoint-1] poll progression begin (frames 3129/3133/3135/3137, indexes 0x4222..0x4522)\n");
    while (!(seen_4422_0e55 && seen_4522_7855))
    {
        checkpoint_poll_iteration++;
        if (checkpoint_poll_iteration > readiness_iteration_cap)
        {
            char message[192];
            snprintf(
                message,
                sizeof(message),
                "checkpoint-1 readiness gate not satisfied before iteration cap (max iterations=%u)",
                readiness_iteration_cap);
            preview_set_failure(&state, message);
            goto fail;
        }
        if (preview_now_ms() >= readiness_deadline_ms)
        {
            char message[192];
            snprintf(
                message,
                sizeof(message),
                "checkpoint-1 readiness gate timed out (limit=%llu ms)",
                (unsigned long long)readiness_timeout_ms);
            preview_set_failure(&state, message);
            goto fail;
        }

        for (step_index = 0; step_index < (sizeof(kPreviewLampWindowPollSteps) / sizeof(kPreviewLampWindowPollSteps[0])); ++step_index)
        {
            preview_control_step poll_step;
            uint8_t response_buffer[8];
            size_t response_length = 0U;
            uint8_t expected_buffer[8];
            size_t expected_length = 0U;
            int expected_match;
            char response_hex[32];
            char expected_hex[32];

            memset(&poll_step, 0, sizeof(poll_step));
            memset(response_buffer, 0, sizeof(response_buffer));
            memset(expected_buffer, 0, sizeof(expected_buffer));
            snprintf(response_hex, sizeof(response_hex), "<none>");
            snprintf(expected_hex, sizeof(expected_hex), "<none>");

            poll_step.frame_number = kPreviewLampWindowPollSteps[step_index].frame_number;
            poll_step.is_in = 1;
            poll_step.request = 0x04;
            poll_step.value = 0x008EU;
            poll_step.index = kPreviewLampWindowPollSteps[step_index].index;
            poll_step.length = 2U;
            poll_step.payload_hex = NULL;

            if (!decode_hex_string(
                    kPreviewLampWindowPollSteps[step_index].expected_response_hex,
                    expected_buffer,
                    sizeof(expected_buffer),
                    &expected_length))
            {
                preview_set_failure(&state, "checkpoint-1 expected response decode failed");
                goto fail;
            }

            if (!preview_run_control_in_step_with_capture_unbounded(
                    target_handle,
                    &state,
                    &poll_step,
                    response_buffer,
                    sizeof(response_buffer),
                    &response_length))
            {
                goto fail;
            }

            preview_format_compact_hex(response_buffer, response_length, response_hex, sizeof(response_hex));
            preview_format_compact_hex(expected_buffer, expected_length, expected_hex, sizeof(expected_hex));
            expected_match = (response_length == expected_length) &&
                             (memcmp(response_buffer, expected_buffer, response_length) == 0);

            if (poll_step.index == 0x4422U)
            {
                snprintf(poll_4422_hex, sizeof(poll_4422_hex), "%s", response_hex);
                if (!seen_4422_0e55 && expected_match)
                {
                    seen_4422_0e55 = 1;
                    seen_4422_iteration = checkpoint_poll_iteration;
                    seen_4422_frame_hint = poll_step.frame_number;
                    printf(
                        "[preview-attempt-03][checkpoint-1] first_seen seen_4422_0e55 iteration=%u frame_hint=%u\n",
                        seen_4422_iteration,
                        seen_4422_frame_hint);
                }
            }
            else if (poll_step.index == 0x4522U)
            {
                snprintf(poll_4522_hex, sizeof(poll_4522_hex), "%s", response_hex);
                if (!seen_4522_7855 && expected_match)
                {
                    seen_4522_7855 = 1;
                    seen_4522_iteration = checkpoint_poll_iteration;
                    seen_4522_frame_hint = poll_step.frame_number;
                    printf(
                        "[preview-attempt-03][checkpoint-1] first_seen seen_4522_7855 iteration=%u frame_hint=%u\n",
                        seen_4522_iteration,
                        seen_4522_frame_hint);
                }
            }

            printf(
                "[preview-attempt-03][checkpoint-1] iter=%u frame=%u index=0x%04X response=%s expected=%s match=%s seen_4422_0e55=%s seen_4522_7855=%s\n",
                checkpoint_poll_iteration,
                poll_step.frame_number,
                poll_step.index,
                response_hex,
                expected_hex,
                expected_match ? "yes" : "no",
                seen_4422_0e55 ? "yes" : "no",
                seen_4522_7855 ? "yes" : "no");
        }

        printf(
            "[preview-attempt-03][checkpoint-1] iter=%u current_0x4422=%s current_0x4522=%s seen_4422_0e55=%s seen_4522_7855=%s first_seen_4422_iteration=%u first_seen_4422_frame_hint=%u first_seen_4522_iteration=%u first_seen_4522_frame_hint=%u\n",
            checkpoint_poll_iteration,
            poll_4422_hex,
            poll_4522_hex,
            seen_4422_0e55 ? "yes" : "no",
            seen_4522_7855 ? "yes" : "no",
            seen_4422_iteration,
            seen_4422_frame_hint,
            seen_4522_iteration,
            seen_4522_frame_hint);
    }

    checkpoint_poll_pass = seen_4422_0e55 && seen_4522_7855;

    printf(
        "[preview-attempt-03][checkpoint-1] summary current_0x4422=%s current_0x4522=%s seen_4422_0e55=%s seen_4522_7855=%s first_seen_4422_iteration=%u first_seen_4422_frame_hint=%u first_seen_4522_iteration=%u first_seen_4522_frame_hint=%u readiness_gate=%s readiness_elapsed_ms=%llu\n",
        poll_4422_hex,
        poll_4522_hex,
        seen_4422_0e55 ? "yes" : "no",
        seen_4522_7855 ? "yes" : "no",
        seen_4422_iteration,
        seen_4422_frame_hint,
        seen_4522_iteration,
        seen_4522_frame_hint,
        checkpoint_poll_pass ? "pass" : "fail",
        (unsigned long long)(preview_now_ms() - readiness_started_ms));

    printf(
        "[preview-attempt-03][checkpoint-2] pointer write frame=%u payload=%s\n",
        kPreviewLampWindowPointerStep.frame_number,
        kPreviewLampWindowPointerStep.payload_hex);
    if (!preview_run_control_step(target_handle, &state, &kPreviewLampWindowPointerStep))
    {
        goto fail;
    }
    checkpoint_pointer_pass = 1;
    printf("[preview-attempt-03][checkpoint-2] summary pointer_write_submitted=yes\n");

    printf("[preview-attempt-03][checkpoint-3] first bulk-IN chunks begin (frame hints 3144/3146)\n");
    for (step_index = 0; step_index < (sizeof(kPreviewLampWindowBulkFrameHints) / sizeof(kPreviewLampWindowBulkFrameHints[0])); ++step_index)
    {
        int transferred = 0;
        int timed_out = 0;
        size_t non_zero_count = 0U;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                kPreviewLampWindowBulkFrameHints[step_index],
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            printf(
                "[preview-attempt-03][checkpoint-3] frame_hint=%u timed_out=yes\n",
                kPreviewLampWindowBulkFrameHints[step_index]);
            continue;
        }

        if (transferred > 0)
        {
            non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
        }

        if (non_zero_count > 0U)
        {
            checkpoint_bulk_non_zero_pass = 1;
        }

        printf(
            "[preview-attempt-03][checkpoint-3] frame_hint=%u transferred=%d non_zero_bytes=%zu non_zero_seen=%s\n",
            kPreviewLampWindowBulkFrameHints[step_index],
            transferred,
            non_zero_count,
            (non_zero_count > 0U) ? "yes" : "no");
    }

    printf(
        "[preview-attempt-03][checkpoint-3] summary first_non_zero_bulk_seen=%s\n",
        checkpoint_bulk_non_zero_pass ? "yes" : "no");

    while (state.total_bytes < kPreviewMaxBytes &&
           state.bulk_in_transfers < kPreviewMaxBulkInTransfers)
    {
        int transferred = 0;
        int timed_out = 0;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                0U,
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            capture_loop_timeouts++;
            if (capture_loop_timeouts >= kPreviewMaxConsecutiveTimeouts)
            {
                preview_set_failure(&state, "capture-loop stopped after consecutive bulk IN timeouts");
                break;
            }
        }
        else
        {
            if (!checkpoint_bulk_non_zero_pass && transferred > 0)
            {
                size_t non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
                if (non_zero_count > 0U)
                {
                    checkpoint_bulk_non_zero_pass = 1;
                    printf(
                        "[preview-attempt-03][checkpoint-3] capture-loop observed first non-zero bulk chunk non_zero_bytes=%zu\n",
                        non_zero_count);
                }
            }
            capture_loop_timeouts = 0U;
        }
    }

    fclose(state.output_file);
    state.output_file = NULL;
    preview_log_saved_file_summary(kPreviewDumpPath);

    printf(
        "[preview-attempt-03] checkpoint summary: poll_progression=%s pointer_write=%s first_non_zero_bulk=%s\n",
        checkpoint_poll_pass ? "pass" : "fail",
        checkpoint_pointer_pass ? "pass" : "fail",
        checkpoint_bulk_non_zero_pass ? "pass" : "fail");

    if (state.total_bytes == 0U)
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "bulk IN data phase not reached before stop condition");
        }
        fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt-03] no raw data saved to %s\n", kPreviewDumpPath);
        return 1;
    }

    if (!(checkpoint_poll_pass && checkpoint_pointer_pass && checkpoint_bulk_non_zero_pass))
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "one or more lamp-window checkpoints not satisfied");
        }
        fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt-03] bytes saved before failure: %zu\n", state.total_bytes);
        return 1;
    }

    printf(
        "[preview-attempt-03] completed: saved %zu bytes to %s\n",
        state.total_bytes,
        kPreviewDumpPath);
    printf(
        "[preview-attempt-03] transfer counters: total=%u bulk-in=%u\n",
        state.total_transfers,
        state.bulk_in_transfers);

    if (state.failure_stage[0] != '\0')
    {
        printf("[preview-attempt-03] stop reason: %s\n", state.failure_stage);
    }

    return 0;

fail:
    if (state.output_file != NULL)
    {
        fclose(state.output_file);
        state.output_file = NULL;
    }

    if (state.failure_stage[0] == '\0')
    {
        preview_set_failure(&state, "unexpected preview-attempt-03 failure");
    }

    fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
    fprintf(stderr, "[preview-attempt-03] bytes saved before failure: %zu\n", state.total_bytes);
    return 1;
}
#endif

typedef struct preview03_transition_result
{
    int wrote_0c00;
    int wrote_0d01_pre;
    int applied_gl847_gpio_profile;
    int prepared_6c_gpio10_high;
    int wrote_6b87;
    int wrote_0141;
    int wrote_0d01;
    int wrote_0fff;
    int wrote_0140;
    int wrote_6cf0;
    int seen_6c22_f155;
    int seen_6c22_f055;
    unsigned int attempts_0140;
    unsigned int emitted_0140_iteration;
    unsigned int post_0140_snapshot_count;
    int logged_0140_retry_policy;
    char last_0c22[32];
    char last_6b22[32];
    char last_0122[32];
    char last_0d22[32];
    char last_6c22[32];
} preview03_transition_result;

typedef struct preview03_readiness_result
{
    int seen_4422_0e55;
    int seen_4522_7855;
    unsigned int seen_4422_iteration;
    unsigned int seen_4522_iteration;
    char last_4222[32];
    char last_4322[32];
    char last_4422[32];
    char last_4522[32];
} preview03_readiness_result;

static int preview03_log_post_0140_status_snapshots(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    unsigned int iteration,
    preview03_transition_result *out_result)
{
    unsigned int snapshot_index;
    const unsigned int snapshot_count = 5U;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    for (snapshot_index = 0U; snapshot_index < snapshot_count; ++snapshot_index)
    {
        preview_state_poll_step poll_6c22;
        preview_state_poll_step poll_6b22;
        preview_state_poll_step poll_0122;
        preview_state_poll_step poll_0d22;
        uint8_t response_6c22[8];
        uint8_t response_6b22[8];
        uint8_t response_0122[8];
        uint8_t response_0d22[8];
        size_t response_6c22_length = 0U;
        size_t response_6b22_length = 0U;
        size_t response_0122_length = 0U;
        size_t response_0d22_length = 0U;
        char post_6c22_hex[32];
        char post_6b22_hex[32];
        char post_0122_hex[32];
        char post_0d22_hex[32];
        unsigned int base_frame = kPreview03Write0140Step.frame_number + 1U + (snapshot_index * 4U);

        memset(&poll_6c22, 0, sizeof(poll_6c22));
        memset(&poll_6b22, 0, sizeof(poll_6b22));
        memset(&poll_0122, 0, sizeof(poll_0122));
        memset(&poll_0d22, 0, sizeof(poll_0d22));

        poll_6c22.frame_number = base_frame;
        poll_6c22.index = 0x6C22U;
        poll_6c22.label = "post-0140 0x6C22";

        poll_6b22.frame_number = base_frame + 1U;
        poll_6b22.index = 0x6B22U;
        poll_6b22.label = "post-0140 0x6B22";

        poll_0122.frame_number = base_frame + 2U;
        poll_0122.index = 0x0122U;
        poll_0122.label = "post-0140 0x0122";

        poll_0d22.frame_number = base_frame + 3U;
        poll_0d22.index = 0x0D22U;
        poll_0d22.label = "post-0140 0x0D22";

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_6c22,
                response_6c22,
                sizeof(response_6c22),
                &response_6c22_length,
                post_6c22_hex,
                sizeof(post_6c22_hex)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_6b22,
                response_6b22,
                sizeof(response_6b22),
                &response_6b22_length,
                post_6b22_hex,
                sizeof(post_6b22_hex)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_0122,
                response_0122,
                sizeof(response_0122),
                &response_0122_length,
                post_0122_hex,
                sizeof(post_0122_hex)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &poll_0d22,
                response_0d22,
                sizeof(response_0d22),
                &response_0d22_length,
                post_0d22_hex,
                sizeof(post_0d22_hex)))
        {
            return 0;
        }

        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF1U, 0x55U))
        {
            out_result->seen_6c22_f155 = 1;
        }
        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF0U, 0x55U))
        {
            out_result->seen_6c22_f055 = 1;
        }

        snprintf(out_result->last_6c22, sizeof(out_result->last_6c22), "%s", post_6c22_hex);
        snprintf(out_result->last_6b22, sizeof(out_result->last_6b22), "%s", post_6b22_hex);
        snprintf(out_result->last_0122, sizeof(out_result->last_0122), "%s", post_0122_hex);
        snprintf(out_result->last_0d22, sizeof(out_result->last_0d22), "%s", post_0d22_hex);
        out_result->post_0140_snapshot_count++;

        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u post-0140 snapshot=%u/5 6c22=%s 6b22=%s 0122=%s 0d22=%s\n",
            iteration,
            snapshot_index + 1U,
            post_6c22_hex,
            post_6b22_hex,
            post_0122_hex,
            post_0d22_hex);
    }

    if (!out_result->seen_6c22_f155 && !out_result->seen_6c22_f055)
    {
        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u post-0140 no REG6C progression after %u snapshots (last_6c22=%s last_6b22=%s last_0122=%s last_0d22=%s); expected transition toward f155/f055\n",
            iteration,
            out_result->post_0140_snapshot_count,
            out_result->last_6c22,
            out_result->last_6b22,
            out_result->last_0122,
            out_result->last_0d22);
    }

    return 1;
}

static int preview03_run_transition_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_transition_result *out_result)
{
    unsigned int iteration = 0U;
    uint64_t started_ms;
    uint64_t deadline_ms;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    memset(out_result, 0, sizeof(*out_result));
    snprintf(out_result->last_0c22, sizeof(out_result->last_0c22), "<missing>");
    snprintf(out_result->last_6b22, sizeof(out_result->last_6b22), "<missing>");
    snprintf(out_result->last_0122, sizeof(out_result->last_0122), "<missing>");
    snprintf(out_result->last_0d22, sizeof(out_result->last_0d22), "<missing>");
    snprintf(out_result->last_6c22, sizeof(out_result->last_6c22), "<missing>");

    printf("[preview-attempt-03][phase-1-transition] begin causal transition driving\n");
    started_ms = preview_now_ms();
    deadline_ms = started_ms + phase_timeout_ms;

    while (1)
    {
        uint8_t response_0c22[8];
        uint8_t response_6b22[8];
        uint8_t response_0122[8];
        uint8_t response_0d22[8];
        uint8_t response_6c22[8];
        size_t response_0c22_length = 0U;
        size_t response_6b22_length = 0U;
        size_t response_0122_length = 0U;
        size_t response_0d22_length = 0U;
        size_t response_6c22_length = 0U;
        char failure_message[256];

        iteration++;
        if (iteration > iteration_cap)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-1 transition gate not satisfied before iteration cap (iter_cap=%u last_0c22=%s last_6b22=%s last_0122=%s last_0d22=%s last_6c22=%s writes=[0c00:%s,0d01-pre:%s,gpio-profile:%s,6c10-pre:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s])",
                iteration_cap,
                out_result->last_0c22,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->wrote_0c00 ? "yes" : "no",
                out_result->wrote_0d01_pre ? "yes" : "no",
                out_result->applied_gl847_gpio_profile ? "yes" : "no",
                out_result->prepared_6c_gpio10_high ? "yes" : "no",
                out_result->wrote_6b87 ? "yes" : "no",
                out_result->wrote_0141 ? "yes" : "no",
                out_result->wrote_0d01 ? "yes" : "no",
                out_result->wrote_0fff ? "yes" : "no",
                out_result->wrote_0140 ? "yes" : "no",
                out_result->wrote_6cf0 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (preview_now_ms() >= deadline_ms)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-1 transition gate timed out (limit=%llu ms last_0c22=%s last_6b22=%s last_0122=%s last_0d22=%s last_6c22=%s writes=[0c00:%s,0d01-pre:%s,gpio-profile:%s,6c10-pre:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s])",
                (unsigned long long)phase_timeout_ms,
                out_result->last_0c22,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->wrote_0c00 ? "yes" : "no",
                out_result->wrote_0d01_pre ? "yes" : "no",
                out_result->applied_gl847_gpio_profile ? "yes" : "no",
                out_result->prepared_6c_gpio10_high ? "yes" : "no",
                out_result->wrote_6b87 ? "yes" : "no",
                out_result->wrote_0141 ? "yes" : "no",
                out_result->wrote_0d01 ? "yes" : "no",
                out_result->wrote_0fff ? "yes" : "no",
                out_result->wrote_0140 ? "yes" : "no",
                out_result->wrote_6cf0 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (!out_result->applied_gl847_gpio_profile &&
            out_result->wrote_0d01_pre)
        {
            /* Mirror gl847_init_gpio() for GPO_CANONLIDE200: stabilize REG6B/6C/6D/6E/6F before start edges. */
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6EFFGpioProfilePrimeStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6C00GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6B02GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6CF9GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6D20GpioProfileStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6EFFGpioProfileFinalStep) ||
                !preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6F00GpioProfileStep))
            {
                return 0;
            }
            out_result->applied_gl847_gpio_profile = 1;
            out_result->prepared_6c_gpio10_high = 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[0],
                response_0c22,
                sizeof(response_0c22),
                &response_0c22_length,
                out_result->last_0c22,
                sizeof(out_result->last_0c22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[1],
                response_6b22,
                sizeof(response_6b22),
                &response_6b22_length,
                out_result->last_6b22,
                sizeof(out_result->last_6b22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[2],
                response_0122,
                sizeof(response_0122),
                &response_0122_length,
                out_result->last_0122,
                sizeof(out_result->last_0122)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[3],
                response_0d22,
                sizeof(response_0d22),
                &response_0d22_length,
                out_result->last_0d22,
                sizeof(out_result->last_0d22)))
        {
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-1-transition",
                iteration,
                &kPreview03TransitionPollSteps[4],
                response_6c22,
                sizeof(response_6c22),
                &response_6c22_length,
                out_result->last_6c22,
                sizeof(out_result->last_6c22)))
        {
            return 0;
        }

        if (!out_result->wrote_0c00 &&
            preview_response_is_two_byte_value(response_0c22, response_0c22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0C00Step))
            {
                return 0;
            }
            out_result->wrote_0c00 = 1;
        }

        if (!out_result->wrote_0d01_pre &&
            out_result->wrote_0c00 &&
            preview_response_is_two_byte_value(response_0d22, response_0d22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0D01PreStep))
            {
                return 0;
            }
            out_result->wrote_0d01_pre = 1;
        }

        if (!out_result->wrote_6b87 &&
            out_result->wrote_0d01_pre &&
            out_result->applied_gl847_gpio_profile &&
            (preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x00U, 0x55U) ||
             preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x02U, 0x55U) ||
             preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U)))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write6B87Step))
            {
                return 0;
            }
            out_result->wrote_6b87 = 1;
        }

        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF1U, 0x55U))
        {
            out_result->seen_6c22_f155 = 1;
        }
        if (preview_response_is_two_byte_value(response_6c22, response_6c22_length, 0xF0U, 0x55U))
        {
            out_result->seen_6c22_f055 = 1;
        }

        if (!out_result->prepared_6c_gpio10_high &&
            out_result->wrote_0d01_pre &&
            preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U) &&
            response_6c22_length == 2U &&
            response_6c22[1] == 0x55U)
        {
            if ((response_6c22[0] & kPreview03Reg6CGpio10Mask) != 0U)
            {
                out_result->prepared_6c_gpio10_high = 1;
            }
            else
            {
                uint8_t written_reg6c = response_6c22[0];
                if (!preview_run_phase1_reg6c_gpio10_write(
                        target_handle,
                        state,
                        iteration,
                        kPreview03Write6CGpio10PreArmFrame,
                        response_6c22[0],
                        1,
                        &written_reg6c))
                {
                    return 0;
                }
                out_result->prepared_6c_gpio10_high =
                    (written_reg6c & kPreview03Reg6CGpio10Mask) != 0U;
            }
        }

        if (!out_result->wrote_6cf0 &&
            out_result->prepared_6c_gpio10_high &&
            response_6c22_length == 2U &&
            response_6c22[1] == 0x55U &&
            (response_6c22[0] & kPreview03Reg6CGpio10Mask) != 0U &&
            (out_result->seen_6c22_f155 ||
             (out_result->wrote_0d01_pre &&
              /* Keep 6C consume edge tied to the latched 6B path; iter=1 writes at 6B22=0055 were accepted but inert. */
              preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U) &&
              /* Consume once 6B has latched and GPIO10 is high; do not hard-code one REG6C image. */
              response_6c22[1] == 0x55U)))
        {
            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u 6cf0 trigger: gate met (6b22=%s 0122=%s 0d22=%s 6c22=%s seen_f155=%s mode=literal-6cf0)\n",
                iteration,
                out_result->last_6b22,
                out_result->last_0122,
                out_result->last_0d22,
                out_result->last_6c22,
                out_result->seen_6c22_f155 ? "yes" : "no");
            if (!preview_run_phase1_reg6c_gpio10_write(
                    target_handle,
                    state,
                    iteration,
                    kPreview03Write6CF0Step.frame_number,
                    response_6c22[0],
                    0,
                    NULL))
            {
                return 0;
            }
            out_result->wrote_6cf0 = 1;
        }

        if (!out_result->wrote_0140)
        {
            const int response_0122_ready =
                preview_response_is_two_byte_value(response_0122, response_0122_length, 0x41U, 0x55U) ||
                preview_response_is_two_byte_value(response_0122, response_0122_length, 0x40U, 0x55U);
            const int response_6b22_ready =
                preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U);

            out_result->attempts_0140++;

            if (!out_result->wrote_0d01_pre)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: 0d01-pre not emitted yet\n",
                    iteration);
            }
            else if (!response_6b22_ready)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: 0x6B22 not latched (0x6B22=%s)\n",
                    iteration,
                    out_result->last_6b22);
            }
            else if (!response_0122_ready)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: 0x0122 not ready (0x0122=%s)\n",
                    iteration,
                    out_result->last_0122);
            }
            else if (!out_result->wrote_6cf0)
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 pending but blocked: waiting for 6cf0 (0x6C22=%s)\n",
                    iteration,
                    out_result->last_6c22);
            }
            else
            {
                printf(
                    "[preview-attempt-03][phase-1-transition] iter=%u 0140 emit reason: pre-kickoff gate met (0d01-pre=yes 6b22=%s 0122=%s 6c22=%s 6cf0=yes 0fff=%s attempts=%u)\n",
                    iteration,
                    out_result->last_6b22,
                    out_result->last_0122,
                    out_result->last_6c22,
                    out_result->wrote_0fff ? "yes" : "no",
                    out_result->attempts_0140);
                if (!preview_run_state_write_step(
                        target_handle,
                        state,
                        "phase-1-transition",
                        iteration,
                        &kPreview03Write0140Step))
                {
                    return 0;
                }
                out_result->wrote_0140 = 1;
                out_result->emitted_0140_iteration = iteration;
                if (!preview03_log_post_0140_status_snapshots(
                        target_handle,
                        state,
                        iteration,
                        out_result))
                {
                    return 0;
                }
            }
        }
        else if (!out_result->logged_0140_retry_policy)
        {
            printf(
                "[preview-attempt-03][phase-1-transition] iter=%u 0140 retry policy: single-shot (emitted_iter=%u retries=disabled)\n",
                iteration,
                out_result->emitted_0140_iteration);
            out_result->logged_0140_retry_policy = 1;
        }

        if (out_result->wrote_0140 &&
            out_result->wrote_0d01_pre &&
            out_result->wrote_6cf0 &&
            !out_result->wrote_0141 &&
            /* Keep kickoff writes after the pre-kickoff 6cf0->0140 window. */
            preview_response_is_two_byte_value(response_0122, response_0122_length, 0x40U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0141Step))
            {
                return 0;
            }
            out_result->wrote_0141 = 1;
        }

        if (out_result->wrote_0141 &&
            !out_result->wrote_0d01 &&
            preview_response_is_two_byte_value(response_6b22, response_6b22_length, 0x87U, 0x55U) &&
            preview_response_is_two_byte_value(response_0d22, response_0d22_length, 0x00U, 0x55U))
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0D01Step))
            {
                return 0;
            }
            out_result->wrote_0d01 = 1;
        }

        if (out_result->wrote_0d01 && !out_result->wrote_0fff)
        {
            if (!preview_run_state_write_step(
                    target_handle,
                    state,
                    "phase-1-transition",
                    iteration,
                    &kPreview03Write0FFFStep))
            {
                return 0;
            }
            out_result->wrote_0fff = 1;
        }

        printf(
            "[preview-attempt-03][phase-1-transition] iter=%u summary 0c22=%s 6b22=%s 0122=%s 0d22=%s 6c22=%s writes=[0c00:%s,0d01-pre:%s,gpio-profile:%s,6c10-pre:%s,6b87:%s,0141:%s,0d01:%s,0fff:%s,0140:%s,6cf0:%s] seen_6c22_f155=%s seen_6c22_f055=%s 0140_attempts=%u 0140_emitted_iter=%u post0140_snapshots=%u\n",
            iteration,
            out_result->last_0c22,
            out_result->last_6b22,
            out_result->last_0122,
            out_result->last_0d22,
            out_result->last_6c22,
            out_result->wrote_0c00 ? "yes" : "no",
            out_result->wrote_0d01_pre ? "yes" : "no",
            out_result->applied_gl847_gpio_profile ? "yes" : "no",
            out_result->prepared_6c_gpio10_high ? "yes" : "no",
            out_result->wrote_6b87 ? "yes" : "no",
            out_result->wrote_0141 ? "yes" : "no",
            out_result->wrote_0d01 ? "yes" : "no",
            out_result->wrote_0fff ? "yes" : "no",
            out_result->wrote_0140 ? "yes" : "no",
            out_result->wrote_6cf0 ? "yes" : "no",
            out_result->seen_6c22_f155 ? "yes" : "no",
            out_result->seen_6c22_f055 ? "yes" : "no",
            out_result->attempts_0140,
            out_result->emitted_0140_iteration,
            out_result->post_0140_snapshot_count);

        if (out_result->wrote_0c00 &&
            out_result->wrote_6b87 &&
            out_result->wrote_0141 &&
            out_result->wrote_0d01 &&
            out_result->wrote_0fff &&
            out_result->wrote_0140 &&
            out_result->seen_6c22_f055)
        {
            break;
        }
    }

    printf(
        "[preview-attempt-03][phase-1-transition] complete elapsed_ms=%llu last_6c22=%s\n",
        (unsigned long long)(preview_now_ms() - started_ms),
        out_result->last_6c22);
    return 1;
}

static int preview03_run_readiness_phase(
    libusb_device_handle *target_handle,
    preview_runtime_state *state,
    uint64_t phase_timeout_ms,
    unsigned int iteration_cap,
    preview03_readiness_result *out_result)
{
    unsigned int iteration = 0U;
    uint64_t started_ms;
    uint64_t deadline_ms;

    if (target_handle == NULL || state == NULL || out_result == NULL)
    {
        return 0;
    }

    memset(out_result, 0, sizeof(*out_result));
    snprintf(out_result->last_4222, sizeof(out_result->last_4222), "<missing>");
    snprintf(out_result->last_4322, sizeof(out_result->last_4322), "<missing>");
    snprintf(out_result->last_4422, sizeof(out_result->last_4422), "<missing>");
    snprintf(out_result->last_4522, sizeof(out_result->last_4522), "<missing>");

    printf("[preview-attempt-03][phase-2-readiness] begin 0x4222..0x4522 readiness observation\n");
    started_ms = preview_now_ms();
    deadline_ms = started_ms + phase_timeout_ms;

    while (!(out_result->seen_4422_0e55 && out_result->seen_4522_7855))
    {
        uint8_t response_4222[8];
        uint8_t response_4322[8];
        uint8_t response_4422[8];
        uint8_t response_4522[8];
        size_t response_4222_length = 0U;
        size_t response_4322_length = 0U;
        size_t response_4422_length = 0U;
        size_t response_4522_length = 0U;
        char failure_message[256];

        iteration++;
        if (iteration > iteration_cap)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-2 readiness not satisfied before iteration cap (iter_cap=%u last_4222=%s last_4322=%s last_4422=%s last_4522=%s seen_4422_0e55=%s seen_4522_7855=%s)",
                iteration_cap,
                out_result->last_4222,
                out_result->last_4322,
                out_result->last_4422,
                out_result->last_4522,
                out_result->seen_4422_0e55 ? "yes" : "no",
                out_result->seen_4522_7855 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (preview_now_ms() >= deadline_ms)
        {
            snprintf(
                failure_message,
                sizeof(failure_message),
                "phase-2 readiness timed out (limit=%llu ms last_4222=%s last_4322=%s last_4422=%s last_4522=%s seen_4422_0e55=%s seen_4522_7855=%s)",
                (unsigned long long)phase_timeout_ms,
                out_result->last_4222,
                out_result->last_4322,
                out_result->last_4422,
                out_result->last_4522,
                out_result->seen_4422_0e55 ? "yes" : "no",
                out_result->seen_4522_7855 ? "yes" : "no");
            preview_set_failure(state, failure_message);
            return 0;
        }

        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[0],
                response_4222,
                sizeof(response_4222),
                &response_4222_length,
                out_result->last_4222,
                sizeof(out_result->last_4222)))
        {
            return 0;
        }
        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[1],
                response_4322,
                sizeof(response_4322),
                &response_4322_length,
                out_result->last_4322,
                sizeof(out_result->last_4322)))
        {
            return 0;
        }
        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[2],
                response_4422,
                sizeof(response_4422),
                &response_4422_length,
                out_result->last_4422,
                sizeof(out_result->last_4422)))
        {
            return 0;
        }
        if (!preview_poll_state_register(
                target_handle,
                state,
                "phase-2-readiness",
                iteration,
                &kPreview03ReadinessPollSteps[3],
                response_4522,
                sizeof(response_4522),
                &response_4522_length,
                out_result->last_4522,
                sizeof(out_result->last_4522)))
        {
            return 0;
        }

        if (!out_result->seen_4422_0e55 &&
            preview_response_is_two_byte_value(response_4422, response_4422_length, 0x0EU, 0x55U))
        {
            out_result->seen_4422_0e55 = 1;
            out_result->seen_4422_iteration = iteration;
        }

        if (!out_result->seen_4522_7855 &&
            preview_response_is_two_byte_value(response_4522, response_4522_length, 0x78U, 0x55U))
        {
            out_result->seen_4522_7855 = 1;
            out_result->seen_4522_iteration = iteration;
        }

        printf(
            "[preview-attempt-03][phase-2-readiness] iter=%u summary 4222=%s 4322=%s 4422=%s 4522=%s seen_4422_0e55=%s seen_4522_7855=%s\n",
            iteration,
            out_result->last_4222,
            out_result->last_4322,
            out_result->last_4422,
            out_result->last_4522,
            out_result->seen_4422_0e55 ? "yes" : "no",
            out_result->seen_4522_7855 ? "yes" : "no");
    }

    printf(
        "[preview-attempt-03][phase-2-readiness] complete first_seen_4422_iter=%u first_seen_4522_iter=%u elapsed_ms=%llu\n",
        out_result->seen_4422_iteration,
        out_result->seen_4522_iteration,
        (unsigned long long)(preview_now_ms() - started_ms));
    return 1;
}

int preview_run_attempt03_mode(libusb_device_handle *target_handle)
{
    preview_runtime_state state;
    preview03_transition_result transition_result;
    preview03_readiness_result readiness_result;
    uint8_t bulk_in_buffer[8192];
    unsigned int capture_loop_timeouts = 0U;
    uint64_t phase_timeout_ms = (uint64_t)kTransferTimeoutMs * (uint64_t)kPreviewMaxConsecutiveTimeouts;
    unsigned int transition_iteration_cap = 96U;
    unsigned int readiness_iteration_cap = 96U;
    size_t step_index;
    int checkpoint_pointer_pass = 0;
    int checkpoint_bulk_non_zero_pass = 0;
    int checkpoint_poll_pass = 0;

    memset(&state, 0, sizeof(state));
    memset(&transition_result, 0, sizeof(transition_result));
    memset(&readiness_result, 0, sizeof(readiness_result));

    if (!ensure_preview_output_directory())
    {
        return 1;
    }

    state.output_file = fopen(kPreviewDumpPath, "wb");
    if (state.output_file == NULL)
    {
        fprintf(stderr, "[preview-attempt-03] cannot open output file: %s\n", kPreviewDumpPath);
        return 1;
    }

    printf("\n[preview-attempt-03] mode enabled.\n");
    printf("[preview-attempt-03] design: clean state-machine reconstruction (not prepend replay).\n");
    printf("[preview-attempt-03] source-of-truth window: 03_lamp_on_window_min_3129_3178.pcapng\n");
    printf("[preview-attempt-03] raw output: %s\n", kPreviewDumpPath);
    printf(
        "[preview-attempt-03] limits: timeout=%u ms bulk-in-size=%d max-bytes=%zu max-bulk-in-transfers=%u max-total-transfers=%u\n",
        kPreviewBulkInTimeoutMs,
        kPreviewBulkInReadSize,
        kPreviewMaxBytes,
        kPreviewMaxBulkInTransfers,
        kPreviewMaxTotalTransfers);
    printf("[preview-attempt-03] phases: setup-preamble -> transition-drivers -> readiness-observation -> read-trigger -> bulk-read\n");

    if (!preview_run_preamble_sequence(target_handle, &state))
    {
        goto fail;
    }

    if (!preview03_run_transition_phase(
            target_handle,
            &state,
            phase_timeout_ms,
            transition_iteration_cap,
            &transition_result))
    {
        goto fail;
    }

    if (!preview03_run_readiness_phase(
            target_handle,
            &state,
            phase_timeout_ms,
            readiness_iteration_cap,
            &readiness_result))
    {
        goto fail;
    }
    checkpoint_poll_pass = readiness_result.seen_4422_0e55 && readiness_result.seen_4522_7855;

    printf("[preview-attempt-03][phase-3-trigger] submitting read pointer\n");
    if (!preview_run_state_write_step(
            target_handle,
            &state,
            "phase-3-trigger",
            1U,
            &kPreview03PointerWriteStep))
    {
        goto fail;
    }
    checkpoint_pointer_pass = 1;
    printf("[preview-attempt-03][phase-3-trigger] complete pointer_submitted=yes\n");

    printf("[preview-attempt-03][phase-4-bulk] first bulk-IN checks begin (frame hints 3144/3146)\n");
    for (step_index = 0; step_index < (sizeof(kPreview03BulkFrameHints) / sizeof(kPreview03BulkFrameHints[0])); ++step_index)
    {
        int transferred = 0;
        int timed_out = 0;
        size_t non_zero_count = 0U;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                kPreview03BulkFrameHints[step_index],
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            printf(
                "[preview-attempt-03][phase-4-bulk] frame_hint=%u timed_out=yes\n",
                kPreview03BulkFrameHints[step_index]);
            continue;
        }

        if (transferred > 0)
        {
            non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
        }

        if (non_zero_count > 0U)
        {
            checkpoint_bulk_non_zero_pass = 1;
        }

        printf(
            "[preview-attempt-03][phase-4-bulk] frame_hint=%u transferred=%d non_zero_bytes=%zu non_zero_seen=%s\n",
            kPreview03BulkFrameHints[step_index],
            transferred,
            non_zero_count,
            (non_zero_count > 0U) ? "yes" : "no");
    }

    printf(
        "[preview-attempt-03][phase-4-bulk] initial summary first_non_zero_bulk_seen=%s\n",
        checkpoint_bulk_non_zero_pass ? "yes" : "no");

    while (state.total_bytes < kPreviewMaxBytes &&
           state.bulk_in_transfers < kPreviewMaxBulkInTransfers)
    {
        int transferred = 0;
        int timed_out = 0;

        if (!preview_run_bulk_in_step(
                target_handle,
                &state,
                0U,
                bulk_in_buffer,
                kPreviewBulkInReadSize,
                &transferred,
                &timed_out))
        {
            goto fail;
        }

        if (timed_out)
        {
            capture_loop_timeouts++;
            if (capture_loop_timeouts >= kPreviewMaxConsecutiveTimeouts)
            {
                preview_set_failure(&state, "phase-4 capture-loop stopped after consecutive bulk IN timeouts");
                break;
            }
        }
        else
        {
            if (!checkpoint_bulk_non_zero_pass && transferred > 0)
            {
                size_t non_zero_count = preview_count_non_zero_bytes(bulk_in_buffer, (size_t)transferred);
                if (non_zero_count > 0U)
                {
                    checkpoint_bulk_non_zero_pass = 1;
                    printf(
                        "[preview-attempt-03][phase-4-bulk] capture-loop observed first non-zero bulk chunk non_zero_bytes=%zu\n",
                        non_zero_count);
                }
            }
            capture_loop_timeouts = 0U;
        }
    }

    fclose(state.output_file);
    state.output_file = NULL;
    preview_log_saved_file_summary(kPreviewDumpPath);

    printf(
        "[preview-attempt-03] checkpoint summary: readiness_observation=%s pointer_write=%s first_non_zero_bulk=%s\n",
        checkpoint_poll_pass ? "pass" : "fail",
        checkpoint_pointer_pass ? "pass" : "fail",
        checkpoint_bulk_non_zero_pass ? "pass" : "fail");

    if (state.total_bytes == 0U)
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "phase-4 bulk IN data phase not reached before stop condition");
        }
        fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt-03] no raw data saved to %s\n", kPreviewDumpPath);
        return 1;
    }

    if (!(checkpoint_poll_pass && checkpoint_pointer_pass && checkpoint_bulk_non_zero_pass))
    {
        if (state.failure_stage[0] == '\0')
        {
            preview_set_failure(&state, "one or more phase checkpoints not satisfied");
        }
        fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
        fprintf(stderr, "[preview-attempt-03] bytes saved before failure: %zu\n", state.total_bytes);
        return 1;
    }

    printf(
        "[preview-attempt-03] completed: saved %zu bytes to %s\n",
        state.total_bytes,
        kPreviewDumpPath);
    printf(
        "[preview-attempt-03] transfer counters: total=%u bulk-in=%u\n",
        state.total_transfers,
        state.bulk_in_transfers);

    if (state.failure_stage[0] != '\0')
    {
        printf("[preview-attempt-03] stop reason: %s\n", state.failure_stage);
    }

    return 0;

fail:
    if (state.output_file != NULL)
    {
        fclose(state.output_file);
        state.output_file = NULL;
    }

    if (state.failure_stage[0] == '\0')
    {
        preview_set_failure(&state, "unexpected preview-attempt-03 failure");
    }

    fprintf(stderr, "[preview-attempt-03] failed: %s\n", state.failure_stage);
    fprintf(stderr, "[preview-attempt-03] bytes saved before failure: %zu\n", state.total_bytes);
    return 1;
}

#if 0
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
    int run_sequence_probe = 0;
    int run_sequence_probe_extended = 0;
    int run_preview_attempt = 0;
    int run_preview_attempt_lamp_window = 0;
    int claim_interface;
    int status;
    int arg_index;

    memset(&target_desc, 0, sizeof(target_desc));
    sb_usb_log_session_begin();

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

        if (strcmp(argv[arg_index], "--sequence-probe") == 0)
        {
            run_sequence_probe = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--sequence-probe-extended") == 0)
        {
            run_sequence_probe_extended = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--preview-attempt") == 0 ||
            strcmp(argv[arg_index], "--capture-preview-raw") == 0)
        {
            run_preview_attempt = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--preview-attempt-lamp-window") == 0 ||
            strcmp(argv[arg_index], "--preview-attempt-03") == 0)
        {
            run_preview_attempt_lamp_window = 1;
            continue;
        }

        print_usage(argv[0]);
        return 2;
    }

    if ((run_safe_probe ? 1 : 0) +
            (run_sequence_probe ? 1 : 0) +
            (run_sequence_probe_extended ? 1 : 0) +
            (run_preview_attempt ? 1 : 0) +
            (run_preview_attempt_lamp_window ? 1 : 0) >
        1)
    {
        fprintf(stderr, "Choose only one probe/preview mode at a time.\n");
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

    if (run_preview_attempt || run_preview_attempt_lamp_window)
    {
        int preview_status;

        if (claim_interface < 0)
        {
            fprintf(stderr, "[preview-attempt] no claimable interface found.\n");
            libusb_close(target_handle);
            libusb_unref_device(target_device);
            sb_usb_shutdown(context);
            return 1;
        }

        status = sb_usb_claim_interface(target_handle, claim_interface);
        if (status != LIBUSB_SUCCESS)
        {
            fprintf(stderr, "[preview-attempt] interface claim failed before capture attempt.\n");
            libusb_close(target_handle);
            libusb_unref_device(target_device);
            sb_usb_shutdown(context);
            return 1;
        }

        preview_status = run_preview_attempt_lamp_window
                             ? run_preview_attempt_lamp_window_mode(target_handle)
                             : run_preview_attempt_mode(target_handle);
        sb_usb_release_interface(target_handle, claim_interface);
        libusb_close(target_handle);
        libusb_unref_device(target_device);
        sb_usb_shutdown(context);
        return preview_status;
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

    if (run_sequence_probe || run_sequence_probe_extended)
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
            run_sequence_probe_extended ? "Sequence probe extended" : "Sequence probe");
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
            libusb_close(target_handle);
            libusb_unref_device(target_device);
            sb_usb_shutdown(context);
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
            libusb_close(target_handle);
            libusb_unref_device(target_device);
            sb_usb_shutdown(context);
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
            libusb_close(target_handle);
            libusb_unref_device(target_device);
            sb_usb_shutdown(context);
            return 1;
        }
        print_status_stage_only("sequence-probe step3 response bytes");

        if (run_sequence_probe_extended)
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
                libusb_close(target_handle);
                libusb_unref_device(target_device);
                sb_usb_shutdown(context);
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
                libusb_close(target_handle);
                libusb_unref_device(target_device);
                sb_usb_shutdown(context);
                return 1;
            }
            print_status_stage_only("sequence-probe step5 response bytes");
        }

        printf(
            "%s completed. Exiting immediately.\n",
            run_sequence_probe_extended ? "Sequence probe extended" : "Sequence probe");
        libusb_close(target_handle);
        libusb_unref_device(target_device);
        sb_usb_shutdown(context);
        return 0;
    }

    printf("\nProtocol replay scaffold now available in src/ScanBro.UsbDriver:\n");
    printf("  - sb_usb_standard_control_in / sb_usb_standard_control_out\n");
    printf("  - sb_usb_vendor_control_in / sb_usb_vendor_control_out\n");
    printf("  - sb_usb_bulk_out / sb_usb_bulk_in\n");
    printf("  - sb_usb_hex_dump for request/response logging\n");
    printf("Preview attempt is opt-in via --preview-attempt (or --capture-preview-raw).\n");
    printf("Lamp-window transition attempt is opt-in via --preview-attempt-lamp-window (alias: --preview-attempt-03).\n");
    printf("Default transfer timeout configured to %u ms.\n", kTransferTimeoutMs);

    libusb_close(target_handle);
    libusb_unref_device(target_device);
    sb_usb_shutdown(context);
    return 0;
}
#endif
