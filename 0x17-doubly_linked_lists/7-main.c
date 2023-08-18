#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head, *new;

    head = NULL;
    print_dlistint(head);
    printf("-----------------\n");
    new = insert_dnodeint_at_index(&head, 0, -33);
    print_dlistint(head);
    if (new == NULL)
    {
	    printf("Node is NULL\n");
    }
    else
    {
	    printf("Head is not NULL\n");
    }
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
