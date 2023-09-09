#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int sep;

	if (!ht)
		return;

	sep = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			if (sep)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			sep = 1;
			tmp = tmp->next;

		}
	}
	printf("}\n");
}
