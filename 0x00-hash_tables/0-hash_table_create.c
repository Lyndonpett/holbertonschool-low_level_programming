#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;

	if (!size)
		return (NULL);

	hashTable = malloc(sizeof(hash_node_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));

	if (!hashTable)
	{
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}
