#include <stdio.h>
#include "lists.h"

/**
* listint_len - count the number of elements in a linked listint_t list.
* @h: head of the linked listint_t list
* Return: return the number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	size_t nums;
	const listint_t *tmp;

	tmp = h;
	nums = 0;
	while (tmp)
	{
		tmp = tmp->next;
		nums++;
	}
	return (nums);
}
