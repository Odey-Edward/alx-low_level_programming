#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Deletes the head node of a listint_t linked list
* @head: pointer to the first node
* Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (head == NULL)
	{
		return (0);
	}
	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	current = (*head)->next;
	*head = current;

	free(*head);

	return (num);
}
