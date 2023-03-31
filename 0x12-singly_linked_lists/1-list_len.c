#include "lists.h"

/**
* list_len -  returns the number of elements in a linked list_t list
* @h: pointer to first list
* Return: number of node
*/
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
