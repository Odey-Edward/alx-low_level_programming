#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a listint_t list.
* @head: pointer to the first node
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	current = *head;
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
