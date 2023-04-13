#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint = 0, bit_p = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		len++;
	}
	len--;
	while (len >= 0)
	{
		if (b[len] & 1)
			unint += bit_p;

		bit_p *= 2;
		len--;
	}
	return (unint);
}
