#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list
* @head: The head of the list
*/
void free_list(list_t *head)
{
	if (!head)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
