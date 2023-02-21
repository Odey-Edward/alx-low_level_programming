#include "main.h"

/**
* main - check the code
*
* Return: Always 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_puthcar('\n');
}
