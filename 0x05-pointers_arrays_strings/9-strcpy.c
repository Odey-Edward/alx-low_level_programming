#include "main.h"
#include <stdio.h>

/**
* _strcpy - copty src to dest
*
* @dest: pointer
* @char: pointer
* Return: dest (success)
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
