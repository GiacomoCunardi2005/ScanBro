cmake_minimum_required(VERSION 3.20)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    project(ScanBroUsbDriver C)
endif()

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(_LIBUSB_HINTS)
if(DEFINED LIBUSB_ROOT)
    list(APPEND _LIBUSB_HINTS "${LIBUSB_ROOT}")
endif()
if(DEFINED ENV{LIBUSB_ROOT})
    list(APPEND _LIBUSB_HINTS "$ENV{LIBUSB_ROOT}")
endif()

find_path(LIBUSB_INCLUDE_DIR
    NAMES libusb.h
    HINTS ${_LIBUSB_HINTS}
    PATH_SUFFIXES include include/libusb-1.0 libusb-1.0
)

find_library(LIBUSB_LIBRARY
    NAMES usb-1.0 libusb-1.0
    HINTS ${_LIBUSB_HINTS}
    PATH_SUFFIXES lib Lib MS64/dll MinGW64/dll
)

if(NOT LIBUSB_INCLUDE_DIR OR NOT LIBUSB_LIBRARY)
    message(FATAL_ERROR "libusb not found. Set LIBUSB_ROOT or LIBUSB_INCLUDE_DIR/LIBUSB_LIBRARY.")
endif()

add_library(scanbro_usb STATIC
    src/scanbro_usb.c
)

target_include_directories(scanbro_usb
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${LIBUSB_INCLUDE_DIR}
)

target_link_libraries(scanbro_usb
    PUBLIC
        ${LIBUSB_LIBRARY}
)

if(MSVC)
    target_compile_definitions(scanbro_usb PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()
