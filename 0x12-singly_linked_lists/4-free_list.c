#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list
* @head: The head of the list
*/
void free_list(list_t *head)
{
	/* temporary list structure */
	list_t *tmp;
	
	/* check if head is NULL */
	while (head)
	{
		/* move to the next link */
		tmp = head->next;
		free(head->str);
		free(head);
		/* assign head to the next link */
		head = tmp;
	}
}
