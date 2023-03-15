#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of array
* @height: height of array
* Return: array of integers else NULL
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}


	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
