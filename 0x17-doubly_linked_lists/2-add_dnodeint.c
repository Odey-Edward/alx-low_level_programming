#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
        	return (NULL);
	}

	new->next = NULL;
	new->n = n;
	new->prev = NULL;
	if (head)
		new->next = *head;

	*head = new;

	return (new);
}
