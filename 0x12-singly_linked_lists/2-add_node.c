#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: start of the link
* @str: string to duplicate
* Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
