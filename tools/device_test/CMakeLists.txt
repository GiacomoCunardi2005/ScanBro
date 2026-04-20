cmake_minimum_required(VERSION 3.20)
project(ScanBroDeviceTest C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../src/ScanBro.UsbDriver
    ${CMAKE_BINARY_DIR}/ScanBro.UsbDriver
)

add_executable(device_test
    cli.c
    probe_modes.c
    preview_attempt_data.c
    preview_attempt_io.c
    preview_attempt_preamble.c
    preview_attempt_phase1.c
    preview_attempt_readiness.c
    preview_attempt03.c
    usb_device.c
    main.c
)

target_link_libraries(device_test
    PRIVATE
        scanbro_usb
)

if(MSVC)
    target_compile_definitions(device_test PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()
