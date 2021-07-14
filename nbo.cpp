#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "nbo.h"

uint32_t OpenAndRead(char* filename)
{
	uint32_t data;
	FILE *fp = fopen(filename, "rb");
	if (fp == NULL)
	{
		printf("File open error!\n");
		exit(0);
	}
	fread(&data, 4, 1, fp);
	return data;
}

uint32_t ntohl(uint32_t value)
{
	return value << 24 | value >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8;
}

void add_nbo(uint32_t value1, uint32_t value2)
{
	uint32_t result;
	value1 = ntohl(value1);
	value2 = ntohl(value2);
	result = value1 + value2;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", value1, value1, value2, value2, result, result);
}
