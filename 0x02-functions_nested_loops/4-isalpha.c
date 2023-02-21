#include "main.h"

/**
* _isalpha - check for alphabet
*
* @c: parameter
*
* Return: 1 (if alpha) 0 (false)
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
