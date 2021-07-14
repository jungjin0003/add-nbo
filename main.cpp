// file : main.cpp
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "nbo.h"

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("syntax : add-nbo <file1> <file2>\n");
		return -1;
	}
	
	uint32_t value1, value2;
	value1 = OpenAndRead(argv[1]);
	value2 = OpenAndRead(argv[2]);
	add_nbo(value1, value2);
}
