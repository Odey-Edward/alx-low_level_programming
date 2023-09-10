#include "hash_tables.h"

/**
 * shash_table_create - create a hash
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * else NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value to add to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *item;
	unsigned long int index;

	if (!key || !ht)
		return (0);

	/* Get the index to insect */
	index = key_index((const unsigned char *)key, ht->size);


	/* No item at that position */
	if (!ht->array[index])
	{
		item = create_sitem(key, value);
		if (item == NULL)
			return (0);

		ht->array[index] = item;

		/* insert into the sorted hash table */
		insert_sorted(ht, item);
		return (1);
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		/* modify the value */
		if (modify_sval(ht, index, value) == 0)
			return (0);

		return (1);
	}

	/* Handle collision */
	if (handle_scollision(ht, key, value) == 1)
		return (1);

	return (0);
}

/**
 * insert_sorted - insert element into the sorted hash table
 * @ht: hash table
 * @item: item to insert
 */
void insert_sorted(shash_table_t *ht, shash_node_t *item)
{
	shash_node_t *tmp;

	/* sorted head is empty insect directly */
	if (!ht->shead)
	{
		ht->shead = item;
		ht->stail = item;
		return;
	}

	/* insect into sorted head */
	tmp = ht->shead;

	if (*(tmp)->key > *(item)->key)
	{
		item->snext = ht->shead;
		ht->shead->sprev = item;
		ht->shead = item;

		return;
	}

	/* insect between sorted list */
	while (tmp->snext && *((tmp->snext)->key) < *((item)->key))
		tmp = tmp->snext;

	if (tmp->snext)
		tmp->snext->sprev = item;

	if (!(tmp->snext))
		ht->stail = item;

	item->snext = tmp->snext;
	item->sprev = tmp;
	tmp->snext = item;


}

/**
 * handle_scollision - handle collision when neccessary
 * @ht: Hash Table
 * @key: the key associated with the value
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int handle_scollision(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);


	/* create new node */
	new = create_sitem(key, value);
	if (!new)
		return (0);

	/* insect new_node to the head of the collision chain */
	new->next = ht->array[index];
	ht->array[index] = new;


	/* insert into sorted list */
	insert_sorted(ht, new);

	return (1);
}


/**
 * create_sitem - create item / element in the hash table
 * @key: a unique key
 * @value: the value associated with the key
 * Return: the new item else NULL
 */
shash_node_t *create_sitem(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);


	new_node->key = malloc((strlen(key) + 1));
	if (new_node->key == NULL)
		return (NULL);

	new_node->value = malloc((strlen(value) + 1));
	if (new_node->value == NULL)
		return (NULL);

	/* set the item */
	strcpy(new_node->value, value);
	strcpy(new_node->key, key);
	new_node->next = NULL;

	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}


/**
 * modify_sval - handle collision when neccessary
 * @ht: Hash Table
 * @index: the index associated with the element to modify
 * @value: the new value
 * Return: 1 if it succeeded, 0 otherwise
 */
int modify_sval(shash_table_t *ht, unsigned long int index, const char *value)
{

	free(ht->array[index]->value);

	/* Allocate new memmory address */
	ht->array[index]->value = malloc((strlen(value) + 1));

	if (!ht->array[index]->value)
		return (0);

	strcpy(ht->array[index]->value, value);
	return (1);
}


/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	tmp = ht->array[index]->next;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}


/**
 * shash_table_print - prints a hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int sep;

	if (!ht)
		return;

	sep = 0;
	printf("{");

	tmp = ht->shead;
	while (tmp)
	{
		if (sep)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		sep = 1;
		tmp = tmp->snext;

	}
	printf("}\n");
}



/**
 * shash_table_print_rev - print the element in the hash table
 * in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int sep;

	if (!ht)
		return;

	sep = 0;
	printf("{");

	tmp = ht->stail;
	while (tmp)
	{
		if (sep)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		sep = 1;
		tmp = tmp->sprev;

	}
	printf("}\n");
}



/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
			free_sht_items(ht->array[i]);

		i++;
	}
	free(ht->array);
	free(ht);
}

/**
 * free_sht_items - free hash table item
 * @head: head of a hash_node_t linked list
 */
void free_sht_items(shash_node_t *head)
{
	shash_node_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
