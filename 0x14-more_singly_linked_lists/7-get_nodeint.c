#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node.
 *
 * @head: the list.
 * @index: index of the node, starting at 0
 *
 * Return: nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *yeet = (listint_t *)head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		yeet = yeet->next;
		if (yeet == NULL)
		{
			return (NULL);
		}
	}
	return (yeet);
}
