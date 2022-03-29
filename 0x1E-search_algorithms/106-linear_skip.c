#include "search_algos.h"

/**
 * linear_skip - implements skip list into linear search
 *
 * @list: the pointer to the list
 * @value: the value to find
 *
 * Return: a pointer to the node where the value was found or null
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp, *tmp2;

	if (list == NULL)
	{
		return (NULL);
	}
	tmp = list;
	while (tmp->express)
	{
		printf("Value checked at index [%d] = [%d]\n",
		 (int)tmp->express->index, tmp->express->n);
		if (tmp->express->n >= value)
		{
			break;
		}
		tmp = tmp->express;
	}
	if (tmp->express && tmp->express->n == value)
		return (tmp->express);
	if (tmp->express)
	{
		printf("Value found between indexes [%d] and [%d]\n", (int)tmp->index,
		 (int)tmp->express->index);
	}
	else
	{
		tmp2 = tmp;
		while (tmp2->next)
			tmp2 = tmp2->next;
		printf("Value found between indexes [%d] and [%d]\n", (int)tmp->index,
		 (int)tmp2->index);
	}
	while (tmp->next && tmp->next->n < value)
		printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);
	if (tmp->next && tmp->next->n == value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)tmp->next->index, tmp->next->n);
		return (tmp->next);
	}
	return (NULL);
}
