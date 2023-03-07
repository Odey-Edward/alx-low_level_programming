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
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
