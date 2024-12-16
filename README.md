# CLKGEN Pmod&trade; compatible module

CLKGEN is a Pmod™ compatible clock generator module that can generate any non-integer frequency from 2.5kHz up to 200 MHz on each of its outputs with 0 ppm error.

This repo contains schematics, pinouts and example RP2040 firmware.

**Note: The example isn't currently functioning correctly; the output frequency is incorrect.**

Find more information on the [CLKGEN product page](https://machdyne.com/product/clkgen-pmod/).

## Pinout

| Pin | Signal |
| --- | ------ |
| 1 | NC |
| 2 | NC |
| 3 | SCL |
| 4 | SDA |
| 5 | GND |
| 6 | PWR3V3 |
| 7 | CLK2 |
| 8 | CLK1 |
| 9 | CLK0 |
| 10 | NC |
| 11 | GND |
| 12 | PWR3V3 |

The contents of this repo are released under the [Lone Dynamics Open License](LICENSE.md) with the following exception:

  * The si5351 driver files (examples/werkzeug/si5351.\*) are from [https://github.com/NT7S/Si5351](https://github.com/NT7S/Si5351) and were released under GNU General Public License V3.

