#include "main.h"

/**
* _strcat - concatinate two string
* @dest: first character
* @src: second character
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
