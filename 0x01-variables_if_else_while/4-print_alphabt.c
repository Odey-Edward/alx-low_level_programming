#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: 0 (success)
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
		{
			continue;
		}
		else if (i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
