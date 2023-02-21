#include "main.h"

/**
* _islower - check if lower or upper
*
* Return: 1 (True) 0 (False)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
