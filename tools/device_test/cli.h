#ifndef SCANBRO_DEVICE_TEST_CLI_H
#define SCANBRO_DEVICE_TEST_CLI_H

#include <stdint.h>
#include "scanbro_usb.h"

typedef struct device_test_options
{
    uint16_t target_vid;
    uint16_t target_pid;
    int run_safe_probe;
    int run_sequence_probe;
    int run_sequence_probe_extended;
    int run_preview_attempt;
    int run_preview_attempt03;
} device_test_options;

void cli_init_options(device_test_options *options);
void cli_print_usage(const char *program_name);
int cli_parse_args(int argc, char **argv, device_test_options *options);

#endif
