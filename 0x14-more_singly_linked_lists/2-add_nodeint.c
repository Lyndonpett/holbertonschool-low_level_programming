#include "lists.h"

/**
 * - inserts a new node at the beginning.
 *
 * @head: the list.
 * @n: the integer.
 *
 * Return: Address of the new element, otherwise, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *yeet;

	yeet = malloc(sizeof(listint_t));

	if (yeet == NULL)
	{
		return (NULL);
	}
	yeet->n = n;
	yeet->next = (*head);

	(*head) = yeet;

	return (yeet);
}
