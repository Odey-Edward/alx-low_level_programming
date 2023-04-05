#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - Insert node at a giving index
* @head: pointer to the first node
* @idx:  index of the list where the new node should be added.
* Index starts at 0
* @n: The n element to asign to the node
* Return: new the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	while (i != (idx - 1))
	{
		if (!tmp || !tmp->next)
			return (NULL);

		tmp = tmp->next;
		i++;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
