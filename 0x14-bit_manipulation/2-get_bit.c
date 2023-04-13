#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: the number
* @index: is the index, starting from 0 of the bit you want to get
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int current = 0, bit = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	while (current != index && n > 0)
	{
		n = n >> 1;
		bit = (n & 1);
		current++;
	}
	return (bit);
}
