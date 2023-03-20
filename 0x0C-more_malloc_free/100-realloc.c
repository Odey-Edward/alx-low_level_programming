#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to previous allocated memory
* @old_size: size in byte of the allocated space ptr
* @new_size: is the new size, in bytes of the new memory block
* Return: pointer to the new allocatd memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newM;
	char *ptr_copy, *newM_copy;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newM = malloc(new_size);
		if (newM == NULL)
			return (NULL);

		return (newM);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;

	newM = malloc(sizeof(*ptr_copy) * new_size);

	if (newM == NULL)
		return (NULL);

	newM_copy = newM;

	for (i = 0; i < old_size && i < new_size; i++)
		newM_copy[i] = *ptr_copy++;

	free(ptr);
	return (newM);
}
