#include "lists.h"

/**
 * add_nodeint_end - puts a node at the end.
 *
 * @head: the list.
 * @n: the integer.
 *
 * Return: Address of the new element, otherwise, NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *yeet;
	listint_t *endyeet = (*head);

	yeet = malloc(sizeof(listint_t));

	if (yeet == NULL)
	{
		return (NULL);
	}
	yeet->n = n;
	yeet->next = NULL;

	if (*head == NULL)
	{
		(*head) = yeet;
		return (*head);
	}
	while (endyeet->next != NULL)
	{
		endyeet = endyeet->next;
	}
	endyeet->next = yeet;

	return (yeet);
}
