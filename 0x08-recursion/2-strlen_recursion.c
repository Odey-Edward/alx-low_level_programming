#include "main.h"

/**
* _strlen_recursion - print string legnth
* @s: argument string
* Return: string legnth
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(s + 1));
}
