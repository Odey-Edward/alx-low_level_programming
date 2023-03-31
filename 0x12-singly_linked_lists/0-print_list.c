#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: list start
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *head = h;

	count = 0;
	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d]", head->len);
			printf("%s", head->str);
		}
		printf("\n");
		head = head->next;
		count++;
	}
	return (count);
}
