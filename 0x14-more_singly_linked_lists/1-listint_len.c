#include "lists.h"

/**
 * listint_len - prints the number of elements of a list.
 *
 * @h: the list.
 *
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
