// file : nbo.h
#pragma once

#include <stdint.h>

uint32_t OpenAndRead(char* filename);
uint32_t ntohl(uint32_t value);
void add_nbo(uint32_t value1, uint32_t value2);
