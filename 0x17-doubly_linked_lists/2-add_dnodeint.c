#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the first node of the list
 * @n: value to be added to the new node
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new->next = *head;
	new->n = n;
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;


	*head = new;

	return (new);
}
