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
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    new = insert_dnodeint_at_index(&head, -3, -33);
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
