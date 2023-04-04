#include "lists.h"
#include <stdlib.h>

/**
* free_listint -  frees a listint_t list.
* @head: pointer to the first node
*/
void free_listint(listint_t *head)
{
	listint_t current;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
