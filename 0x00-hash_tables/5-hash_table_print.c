#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *zeNode;
	unsigned int i;
	int flag = 0;

	/* start first bracket */
	printf("{");

	/* loop through nodes */
	for (i = 0; i < ht->size; i++)
	{
		zeNode = ht->array[i];
		/* loop through data in node */
		while (zeNode != NULL)
		{
			/* prints comma after each node */
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", zeNode->key, zeNode->value);

			flag = 1;
			zeNode = zeNode->next;
		}
	}
	printf("}\n");
}
