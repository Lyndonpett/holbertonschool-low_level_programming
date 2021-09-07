#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index.
 *
 * @head: the head.
 * @index: the index.
 *
 * Return: -1 on failure, 1 on success.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *get, *temp, *cog;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	get = *head;
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(get);
			return (1);	}
		free(get);
		*head = NULL;
		return (1);
	}
	while (count < index)
	{
		if (get->next == NULL)
		{
			return (-1);
		}
		else
		{
			get = get->next;
			count++; }
	}
	temp = get->prev;
	if (get->next != NULL)
	{
		cog = get->next;
		temp->next = cog;
		cog->prev = temp; }
	else
		temp->next = NULL;
	if (get)
		free(get);
	return (1);
}
