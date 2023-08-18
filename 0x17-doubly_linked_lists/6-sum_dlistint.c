#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the first node of a dlistint_t linked list
 * Return: 0 if list is NUll else the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
