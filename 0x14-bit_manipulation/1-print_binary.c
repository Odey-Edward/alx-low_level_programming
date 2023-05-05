#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print its binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	/* divide n by two then recursively call the fuction again */
		print_binary(n >> 1);

	/* print out the remainder by getting the LSB */
	_putchar((n & 1) + '0');
}
