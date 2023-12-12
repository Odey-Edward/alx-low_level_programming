#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right, i;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
