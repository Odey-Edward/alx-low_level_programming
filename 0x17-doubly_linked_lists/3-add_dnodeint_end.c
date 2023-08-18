#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);

	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = new;
	new->prev = current;

	return (new);	
}
