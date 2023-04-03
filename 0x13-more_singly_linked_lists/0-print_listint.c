#include "lists.h"
#include <stdio.h>

/**
* print_listint -  prints all the elements of a listint_t list
* @h: the node head
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t num = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		num++;
		tmp = tmp->next;
	}
	return (num);
}
