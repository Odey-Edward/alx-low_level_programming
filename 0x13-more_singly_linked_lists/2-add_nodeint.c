#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint -  adds a new node at the beginning of a listint_t list
* @head: the head of the node;
* @n: assign n to the node
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
