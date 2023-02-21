#include "main.h"

/**
* print_sign - print sign and 0
*
* @n: parameter to be
*
* Return: 1 else 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48)
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
