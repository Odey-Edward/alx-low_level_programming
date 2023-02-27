#include "main.h"

/**
* _puts - print strings
*
* @str: pointer
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
