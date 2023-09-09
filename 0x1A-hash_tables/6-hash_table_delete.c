#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
			free_ht_items(ht->array[i]);

		i++;
	}
	free(ht->array);
	free(ht);
}

/**
 * free_ht_items - free hash table item
 * @head: head of a hash_node_t linked list
 */
void free_ht_items(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}


