#include "main.h"

/**
* check - check of square root of a number
* @a: squre of b (integer)
* @b: actual number (integer)
* Return: the square root of b
*/
int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (check(a + 1, b));
	}
}

/**
* _sqrt_recursion - return natural square root of a number
* @n: integer
* Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (check(1, n));
	}
}
