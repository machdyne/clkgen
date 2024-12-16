cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(clkgen)

add_executable(clkgen
        clkgen.c
        )

target_sources(clkgen PUBLIC
	clkgen.c
	si5351.c
	)

pico_sdk_init()

target_link_libraries(clkgen PRIVATE pico_stdlib pico_stdio_usb hardware_i2c)

pico_add_extra_outputs(clkgen)
