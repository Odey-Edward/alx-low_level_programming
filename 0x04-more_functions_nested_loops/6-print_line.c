#include "main.h"

/**
* print_line - print lines
*
* @n: integer
*/
void print_line(int n)
{
	int i, j;

	i = '_';

	if (n > 0 && n != 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
