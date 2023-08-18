#include "lists.h"

/**
 * get_dnodeint_at_index -  Get the nth node of a dlistint_t linked list
 * @head: pointer to the first node of a dlistint_t linked list
 * @index: is the index of the node, starting from 0
 * Return: the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *current;

	n = 0;

	do {
		current = head;
		head = head->next;
		if (n == index)
			return (current);
		n++;
	} while (head);

	return (NULL);
}
