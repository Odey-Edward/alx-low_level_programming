#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of element in an array
* @size: size of array
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		memset(ptr[i], 0, size);
	}
	return (ptr);
}
