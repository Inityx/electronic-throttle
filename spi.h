#ifndef SPI_H
#define SPI_H
#include <stdint.h>

void spi_init();
uint8_t spi_send(uint8_t data);

#endif
