#include "main.h"

/**
* puts2 - print string
*
* @str: pointer
*/
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
