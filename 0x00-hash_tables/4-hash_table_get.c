#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: the key
 *
 * Return: value in hash table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *match;
	int i;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);
	match = ht->array[i];

	while (match != NULL && match->key != NULL && strcmp(key, match->key) != 0)
	{
		match = match->next;
	}

	if (match == NULL || match->key == NULL || strcmp(key, match->key) != 0)
	{
		return (NULL);
	}

	return (match->value);
}
