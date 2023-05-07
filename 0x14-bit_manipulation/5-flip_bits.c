#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of flip bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * perform an XOR operation to get a different number stored in
	 * xorbit
	 */
	unsigned long int xorbit = n ^ m;
	unsigned int count = 0;

	while (xorbit != 0)
	{
		/* get the least significant bit and store it in the count */
		count += (xorbit & 1);
		/* right shift with 1 to effectively divide the number by 2*/
		xorbit >>= 1;
	}

	return (count);
}
