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
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		num = 0;
		_putchar(48);
	}
	else if (n < 0)
	{
		num = -1;
		_putchar(45);
	}
	return (num);
}
