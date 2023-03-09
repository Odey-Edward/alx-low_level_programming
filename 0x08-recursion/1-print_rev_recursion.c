#include "main.h"

/**
* _print_rev_recursion - print sring in reverse
* @s: argument
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
