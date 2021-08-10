#include "lists.h"

/**
 * insert_nodeint_at_index -
 *
 * @head: the list.
 * @idx: index of the list where the new node should be added.
 * @n: the index of the list.
 *
 * Return: address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old, *insert = (listint_t *)*head;
	unsigned int i;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (i + 1 == idx)
		{
			old = insert;
		}
		insert = insert->next;
		if (insert == NULL && i + 1 != idx)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	old->next = new;
	new->next = insert;
	return (new);
}
