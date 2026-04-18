cmake_minimum_required(VERSION 3.20)
project(ScanBroDeviceTest C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/../../src/ScanBro.UsbDriver
    ${CMAKE_BINARY_DIR}/ScanBro.UsbDriver
)

add_executable(device_test
    main.c
)

target_link_libraries(device_test
    PRIVATE
        scanbro_usb
)

if(MSVC)
    target_compile_definitions(device_test PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()
