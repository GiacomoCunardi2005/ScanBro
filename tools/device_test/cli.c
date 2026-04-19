#include "cli.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void cli_init_options(device_test_options *options)
{
    if (options == NULL)
    {
        return;
    }

    memset(options, 0, sizeof(*options));
    options->target_vid = SB_CANON_5600F_VID;
    options->target_pid = SB_CANON_5600F_PID;
}

void cli_print_usage(const char *program_name)
{
    printf(
        "Usage: %s [--vid HEX] [--pid HEX] [--safe-probe] [--sequence-probe] [--sequence-probe-extended] [--preview-attempt] [--preview-attempt-lamp-window]\n",
        program_name);
    printf("       %s [--capture-preview-raw]\n", program_name);
    printf("       %s [--preview-attempt-03]\n", program_name);
    printf("Defaults: --vid 04A9 --pid 1906\n");
}

int cli_parse_args(int argc, char **argv, device_test_options *options)
{
    int arg_index;

    if (options == NULL)
    {
        return 0;
    }

    for (arg_index = 1; arg_index < argc; ++arg_index)
    {
        if (strcmp(argv[arg_index], "--vid") == 0 && (arg_index + 1) < argc)
        {
            if (!parse_hex_u16(argv[arg_index + 1], &options->target_vid))
            {
                fprintf(stderr, "Invalid VID value: %s\n", argv[arg_index + 1]);
                return 0;
            }
            ++arg_index;
            continue;
        }

        if (strcmp(argv[arg_index], "--pid") == 0 && (arg_index + 1) < argc)
        {
            if (!parse_hex_u16(argv[arg_index + 1], &options->target_pid))
            {
                fprintf(stderr, "Invalid PID value: %s\n", argv[arg_index + 1]);
                return 0;
            }
            ++arg_index;
            continue;
        }

        if (strcmp(argv[arg_index], "--safe-probe") == 0)
        {
            options->run_safe_probe = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--sequence-probe") == 0)
        {
            options->run_sequence_probe = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--sequence-probe-extended") == 0)
        {
            options->run_sequence_probe_extended = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--preview-attempt") == 0 ||
            strcmp(argv[arg_index], "--capture-preview-raw") == 0)
        {
            options->run_preview_attempt = 1;
            continue;
        }

        if (strcmp(argv[arg_index], "--preview-attempt-lamp-window") == 0 ||
            strcmp(argv[arg_index], "--preview-attempt-03") == 0)
        {
            options->run_preview_attempt03 = 1;
            continue;
        }

        return 0;
    }

    if ((options->run_safe_probe ? 1 : 0) +
            (options->run_sequence_probe ? 1 : 0) +
            (options->run_sequence_probe_extended ? 1 : 0) +
            (options->run_preview_attempt ? 1 : 0) +
            (options->run_preview_attempt03 ? 1 : 0) >
        1)
    {
        fprintf(stderr, "Choose only one probe/preview mode at a time.\n");
        return 0;
    }

    return 1;
}
