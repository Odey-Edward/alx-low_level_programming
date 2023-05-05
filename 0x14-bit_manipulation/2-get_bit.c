#include "main.h"

/**
 *
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
