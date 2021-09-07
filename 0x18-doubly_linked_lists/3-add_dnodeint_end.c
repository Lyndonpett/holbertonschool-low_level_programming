#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end.
 *
 * @head: the head.
 * @n: the number of elements.
 *
 * Return: address of new element or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
	return (new);
}
