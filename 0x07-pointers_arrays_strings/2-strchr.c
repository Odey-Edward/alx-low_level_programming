#include <stdio.h>

/**
* _strchr - Locates a character in a string
* @s: Actaul string (pointer)
* @c: first occurrence of the character
* Return: s (string of character)
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
