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
	/* set tmp to list */
	tmp = list;
	/* go through express values */
	while (tmp->express)
	{
		/* print checked express node indexes */
		printf("Value checked at index [%d] = [%d]\n",
		 (int)tmp->express->index, tmp->express->n);
		/* if express' n >= value, found express lane where value is */
		if (tmp->express->n >= value)
		{
			/* break because we know which "normal lane" to search */
			break;
		}
		/* onto the next express node */
		tmp = tmp->express;
	}
	/* If our express node value = value, we gots our value */
	if (tmp->express && tmp->express->n == value)
		return (tmp->express);
	/* handles if value is found not at the end express node */
	if (tmp->express)
	{
		printf("Value found between indexes [%d] and [%d]\n", (int)tmp->index,
		 (int)tmp->express->index);
	}
	/* handles when we are on last express node */
	else
	{
		tmp2 = tmp;
		while (tmp2->next)
			tmp2 = tmp2->next;
	/* interate through last express node indexes, print that value was
		found between the indexes (have to iterate to get last index value) */
		printf("Value found between indexes [%d] and [%d]\n", (int)tmp->index,
		 (int)tmp2->index);
	}
	/* start checking for value in normal nodes, we know which
	express node contains the value, we just have to find it now */
	while (tmp->next && tmp->next->n < value)
	{	/* iterate and print before we find the value */
		printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);
	/* if our next node/next node n = value, then we have found the value */
	if (tmp->next && tmp->next->n == value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)tmp->next->index, tmp->next->n);
		return (tmp->next);
	}
	return (NULL);
}
