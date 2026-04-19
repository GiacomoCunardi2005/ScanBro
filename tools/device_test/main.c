#include "cli.h"
#include "probe_modes.h"
#include "preview_modes.h"
#include "usb_device.h"

#include "device_test_logging.h"

static const unsigned int kTransferTimeoutMs = 2000U;

int main(int argc, char **argv)
{
    device_test_options options;
    usb_device_session session;
    int status = 0;

    cli_init_options(&options);
    usb_device_session_init(&session);

    sb_usb_log_session_begin();

    if (!cli_parse_args(argc, argv, &options))
    {
        cli_print_usage(argv[0]);
        return 2;
    }

    if (!usb_device_session_open(&session, options.target_vid, options.target_pid))
    {
        return 1;
    }

    if (options.run_preview_attempt || options.run_preview_attempt03)
    {
        int preview_status;

        if (session.claim_interface < 0)
        {
            fprintf(stderr, "[preview-attempt] no claimable interface found.\n");
            usb_device_session_close(&session);
            return 1;
        }

        if (!usb_device_claim_for_active_mode(&session))
        {
            fprintf(stderr, "[preview-attempt] interface claim failed before capture attempt.\n");
            usb_device_session_close(&session);
            return 1;
        }

        preview_status = options.run_preview_attempt03
                             ? preview_run_attempt03_mode(session.target_handle)
                             : preview_run_attempt_mode(session.target_handle);

        usb_device_release_after_active_mode(&session);
        usb_device_session_close(&session);
        return preview_status;
    }

    if (options.run_safe_probe)
    {
        status = run_safe_probe_mode(session.target_handle);
        usb_device_session_close(&session);
        return status;
    }

    if (options.run_sequence_probe || options.run_sequence_probe_extended)
    {
        status = run_sequence_probe_mode(session.target_handle, options.run_sequence_probe_extended);
        usb_device_session_close(&session);
        return status;
    }

    printf("\nProtocol replay scaffold now available in src/ScanBro.UsbDriver:\n");
    printf("  - sb_usb_standard_control_in / sb_usb_standard_control_out\n");
    printf("  - sb_usb_vendor_control_in / sb_usb_vendor_control_out\n");
    printf("  - sb_usb_bulk_out / sb_usb_bulk_in\n");
    printf("  - sb_usb_hex_dump for request/response logging\n");
    printf("Preview attempt is opt-in via --preview-attempt (or --capture-preview-raw).\n");
    printf("Lamp-window transition attempt is opt-in via --preview-attempt-lamp-window (alias: --preview-attempt-03).\n");
    printf("Default transfer timeout configured to %u ms.\n", kTransferTimeoutMs);

    usb_device_session_close(&session);
    return 0;
}
