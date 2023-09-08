#include "hash_tables.h"

/**
 * key_index - return the index of a key
 * @key: is the key to use
 * @size: the size of the array of the hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
