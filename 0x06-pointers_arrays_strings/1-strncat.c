#include "main.h"

/**
* _strncat - contanate two strings based of n number of bytes
* @dest: first character
* @src: second character
* @n: number of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
