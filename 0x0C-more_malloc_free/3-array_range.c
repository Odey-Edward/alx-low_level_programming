#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: minimum
* @max: maximum
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min < max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * max);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
