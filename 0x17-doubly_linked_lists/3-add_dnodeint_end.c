#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first node of a dlistint_t list
 * @n: value to be added to the new node
 * Return: Memory address of the new node
 */
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
