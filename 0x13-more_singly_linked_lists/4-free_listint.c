#include "lists.h"
#include <stdlib.h>

/**
* free_listint -  frees a listint_t list.
* @head: pointer to the first node
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
