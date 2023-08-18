#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the first node of the dlistint_t list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: data to add to the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current, *tmp;


	if (!(*h) | (idx == 0))
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	current = *h;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;

	}
	if (!current)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	tmp = current->next;
	current->next = new;
	new->prev = current;
	new->next = tmp;

	if (tmp != NULL)
		tmp->prev = new;

	return (new);
}
