#include "main.h"

/**
* _strncpy - copy n number of string from source to destination
* @dest: destination
* @char: source
* @n: n number of string (integer)
* Return: dest (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
