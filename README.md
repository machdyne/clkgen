# CLKGEN Pmod&trade; compatible module

CLKGEN is a Pmod™ compatible clock generator module that can generate any non-integer frequency from 2.5kHz up to 200 MHz on each of its outputs with 0 ppm error.

![clkgen](https://github.com/machdyne/clkgen/blob/96c59e83836f79bcb2de1203e58f8e84b684a5a7/clkgen.png)

This repo contains schematics, pinouts and example RP2040 firmware.

Find more information on the [CLKGEN product page](https://machdyne.com/product/clkgen-pmod/).

Note: The C RP2040 driver doesn't currently output the correct frequency, but the micropython library does.

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

The contents of this repo are released under the [Lone Dynamics Open License](LICENSE.md) with the following exceptions:

  * The C si5351 driver files (examples/werkzeug/si5351.\*) are from [https://github.com/NT7S/Si5351](https://github.com/NT7S/Si5351) and were released under GNU General Public License V3.

 * The micropython si5351 library (examples/micropython/upython\_si5351) is from [https://github.com/mycr0ft/upython_si5351](https://github.com/mycr0ft/upython_si5351)
