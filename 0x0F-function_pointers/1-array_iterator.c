#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of an array
* @array: the actual array
* @size: the size of the array
* @action:  pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
