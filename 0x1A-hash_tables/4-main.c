#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *value;

	value = hash_table_get(NULL, "Canada");
	printf("%s:%s\n", "Canada", value);
	return (EXIT_SUCCESS);
}
