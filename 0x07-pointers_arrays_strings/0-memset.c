#include "main.h"

/**
* _memset - Fills memory with a constant byte.
* @s: pointer to the memory
* @b: The constant byte
* @n: size of the memory to occupy
* Return: character (pointer)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (s[i] <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
