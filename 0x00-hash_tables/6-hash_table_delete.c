#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			ht->array[i] = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}
