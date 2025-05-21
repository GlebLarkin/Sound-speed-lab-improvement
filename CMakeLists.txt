

cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(mic_project C CXX)

pico_sdk_init()

add_executable(mic_project
    main.c
)

# Включаем USB 
pico_enable_stdio_usb(mic_project 1)
pico_enable_stdio_uart(mic_project 0)

target_link_libraries(mic_project
    pico_stdlib
    hardware_adc
)

pico_add_extra_outputs(mic_project)


