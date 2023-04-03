#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list
* @head: The head of the list
*/
void free_list(list_t *head)
{
	char *tmp;
	
	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
