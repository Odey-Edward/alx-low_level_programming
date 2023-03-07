#include "main.h"

/**
* _memcpy - Copies memory area
* @dest: Destination to copy to
* @src: Source to copy from
* @n: byte of memory
* Return: dest (pointer)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}
