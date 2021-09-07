#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index.
 *
 * @h: the head.
 * @idx: the index.
 * @n: the value to store.
 *
 * Return: NULL on failure or address of new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *get, *temp;
	unsigned int count = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (h == NULL)
	{
		return (NULL);
	}
	get = *h;
	while (count < idx)
	{
		if (get->next == NULL && (count + 1) != idx)
			return (NULL);
		else if (get->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else
		{
			get = get->next;
			count++;
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = get->prev;
	new->next = get;
	temp->next = new;
	get->prev = new;
	new->prev = temp;
	return (new);
}
