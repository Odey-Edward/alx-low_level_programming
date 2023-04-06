#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index of a listint_t
* linked list.
* @head: pointer the first node of the list
* @index: the index of the node that should be deleted. Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *copy;

	copy = *head;
	if (copy == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	while (i < (index - 1))
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
