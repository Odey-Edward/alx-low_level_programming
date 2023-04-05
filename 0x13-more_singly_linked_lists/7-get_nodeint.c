#include "lists.h"

/**
* get_nodeint_at_index - searches for the nth node of a listint_t linked list.
* @head: pointer to the first node
* @index:  the index of the node, starting at 0
* Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;

	i = 0;
	while (i != index)
	{
		if (head != NULL)
		{
			current = current->next;
			head = current;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
