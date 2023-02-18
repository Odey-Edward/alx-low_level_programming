#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
