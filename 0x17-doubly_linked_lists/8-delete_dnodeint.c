#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1(sucess) -1(failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head, *tmp;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;

		free(tmp);

		return (1);
	}

	while (current && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current)
	{
		tmp = current->next;
		current->next = tmp->next;

		if (tmp->next)
			tmp->next->prev = current;

		free(tmp);

		return (1);
	}
	return (-1);
}
