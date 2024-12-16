#include <stdio.h>

#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "si5351.h"

#define PIN_SDA 13
#define PIN_SCL 15

int main() {

	stdio_init_all();

	i2c_init(i2c_default, 100 * 1000);
	gpio_set_function(0, GPIO_FUNC_I2C);
	gpio_set_function(1, GPIO_FUNC_I2C);
	gpio_pull_up(0);
	gpio_pull_up(1);

	sleep_ms(1000);
	printf("init1\r\n");
	sleep_ms(1000);
	printf("init2\r\n");

	si5351_init();
	si5351_set_freq(10000000, 0, SI5351_CLK0);
	si5351_clock_enable(SI5351_CLK0, 1);

	while (1) {

		printf("\nI2C Bus Scan\n");
		printf("   0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F\n");

		for (int addr = 0; addr < (1 << 7); ++addr) {

			if (addr % 16 == 0) {
				printf("%02x ", addr);
			}

			int ret;
			uint8_t rxdata;
			ret = i2c_read_blocking(i2c_default, addr, &rxdata, 1, false);

			printf(ret < 0 ? "." : "@");
			printf(addr % 16 == 15 ? "\n" : "  ");
		}
		printf("Done.\n");

		uint8_t addr = 0x60;
		uint8_t reg = 0x01;
		uint8_t buf[1];

		printf("I2C READ @ addr: %.2x\r\n ", addr);

		for (int i = 0; i < 10; i++) {

			buf[0] = i;
			i2c_write_blocking(i2c_default, addr, buf, 1, true);
			i2c_read_blocking(i2c_default, addr, buf, 1, false);
			printf("%.2X ", buf[0]);

		}
		printf("\r\n");

		sleep_ms(1000);


	}

}
