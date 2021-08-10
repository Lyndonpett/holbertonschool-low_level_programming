#include "lists.h"

/**
 * pop_listint - deletes the head node.
 *
 * @head: the list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int new_n = 0;
	listint_t *yeet = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	yeet = (*head)->next;
	new_n = (*head)->n;
	free(*head);
	return (new_n);
}
