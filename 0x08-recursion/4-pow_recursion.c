#include "main.h"

/**
* _pow_recursion - raised x to power y
* @x: integer
* @y: integer
* Return: x to power y (integer)
*/
int _pow_recursion(int x, int y)
{
	int n;

	n = y;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y <= n)
	{
		return (x * _pow_recursion(x, y - 1));
	}
