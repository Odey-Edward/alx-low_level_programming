#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* print - Entry point
*
* num: num
*/
void print(long num)
{
	if (num != 0)
	{
		print(num / 10);
		putchar((num % 10) + '0');
	}
}

/**
* main - Entry point
*
* Return: 0 (success)
*/
int main(void)
{
	long numbers = 123456789;

	print(numbers);
	putchar('\n');

	return (0);
}
