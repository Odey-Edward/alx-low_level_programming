#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: the number to set
 * @index: the index to check
 * Return: 1 otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	n = (n ^ (1 << index));

	return (1);
}
