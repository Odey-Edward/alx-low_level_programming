#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end;

	if (!array)
		return (-1);

	start = 0;
	end = sqrt(size);

	while (start < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = sqrt(size) + end;
		if (end > size)
		{
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			return (-1);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	end += 1;

	for (; start < end; start++)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
