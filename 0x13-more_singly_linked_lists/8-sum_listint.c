#include "lists.h"

/**
* sum_listint - sum all the data (n) of a listint_t linked list.
* @head: the first node
* Return:  returns the sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (head != NULL)
	{
		sum += head->n;
		current = current->next;
		head = current;
	}
	return (sum);
}
