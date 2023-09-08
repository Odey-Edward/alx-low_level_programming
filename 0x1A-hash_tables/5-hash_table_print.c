#include "hash_tables.h"

/* hash_table_print - prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
