#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value to add to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (!key || !ht)
		return (0);

	/* Get the index to insect */
	index = key_index((const unsigned char *)key, ht->size);

	/* No item at that position */
	if (!ht->array[index])
	{
		item = create_item(key, value);

		if (item == NULL)
			return (0);

		ht->array[index] = item;
		return (1);
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		/* modify the value */

		strcpy(ht->array[index]->value, value);
		return (1);
	}

	/* Handle collision */
	if (handle_collision(ht, key, value) == 1)
		return (1);

	return (0);
}

/**
 * handle_collision - handle collision when neccessary
 * @ht: Hash Table
 * @key: the key associated with the value
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int handle_collision(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);


	/* create new node */
	new = create_item(key, value);
	if (!new)
		return (0);

	/* insect new_node to the head of the collision chain */
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}




/**
 * create_item - create item / element in the hash table
 * @key: a unique key
 * @value: the value associated with the key
 * Return: the new item else NULL
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);


	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (NULL);

	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (NULL);

	strcpy(new_node->value, value);
	strcpy(new_node->key, key);
	new_node->next = NULL;

	return (new_node);
}
