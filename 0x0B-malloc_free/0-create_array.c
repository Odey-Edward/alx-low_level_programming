#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - create an array of character with enough size
* @size: size of array
* @c: a character
* Return: array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	free(array);
}
