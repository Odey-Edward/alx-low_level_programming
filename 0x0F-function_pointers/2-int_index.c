#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to search
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
* Return: index of array
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
