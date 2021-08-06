#include "lists.h"

/**
 * list_len - returns the elements of a list.
 *
 * @h: the list.
 *
 * Return: the elements.
 */

size_t list_len(const list_t *h)
{
	list_t *yeet = (list_t *)h;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (yeet != NULL)
	{
		count++;
		yeet = yeet->next;
	}
	return (count);
}
