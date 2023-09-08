#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int i;

    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    i = hash_table_set(ht, "betty", "fedfjkdjfkldjkalfad");

    printf("%d\n", i);

    return (EXIT_SUCCESS);
}
