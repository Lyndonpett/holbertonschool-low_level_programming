#include "hash_tables.h"

/**
 * hash_table_set - sets key in a hash table
 *
 * @ht: the hash table
 * @key: the key
 * @value: value of key
 *
 * Return: 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *next, *new;
	unsigned long int i, hash, size;

	new = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || new == NULL)
	{
		return (0);
	}

	size = ht->size;
	hash = hash_djb2((const unsigned char *)key);
	i = hash % size;

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	tmp = ht->array[i];

	while (tmp)
	{
		next = tmp->next;

		if (strcmp(tmp->key, key) == 0)
		{
			new->next = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			break;
		}
		tmp = next;
	}
	ht->array[i] = new;
	return (1);
}
