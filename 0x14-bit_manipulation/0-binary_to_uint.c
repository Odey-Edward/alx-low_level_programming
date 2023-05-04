#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i;

	if (!b)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* shift the value of result 1 position which multiply it by 2 */
		result = result << 1;
		/* convert the actual character value to it actual integer value */
		result += b[i] - '0';
		i++;
	}
	return (result);
}
