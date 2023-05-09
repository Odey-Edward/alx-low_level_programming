#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1(little endian) 0(big endianness)
 */
int get_endianness(void)
{
	unsigned int num = 0x12345678;
	char *address = (char *)&num;

	if (*address == 0x78)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
