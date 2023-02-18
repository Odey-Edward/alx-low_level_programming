#include <stdio.h>
#include <stdlib.h>

/**
* main - Start point
*
* Return: 0 (successful)
*/
int main(void)
{
	int num;
	char i;

	for (num = 48; num < 58; num++)
	{
			putchar(num);
	}

	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
