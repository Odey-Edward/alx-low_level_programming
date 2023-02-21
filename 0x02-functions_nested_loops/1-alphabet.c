#include "main.h"

/**
* print_alphabet - print lowercase alphabet
*
* Return: Always 0 (successful);
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
