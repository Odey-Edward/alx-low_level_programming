#include "main.h"

/**
* _isdigit - check for number from 0 to 9
*
* @c: integer
*
* Return: i else 0
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
