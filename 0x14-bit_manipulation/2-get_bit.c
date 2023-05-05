#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the index of the bit
 * Return: the bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;
	unsigned int i = 0;

	while (i < index)
	{
		n = n >> 1;
		result = n & 1;
		if (n < 1)
			return (-1);

		i++;
	}

	return (result);
}
