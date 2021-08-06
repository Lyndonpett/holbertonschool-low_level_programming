#include "lists.h"

/**
 * free_list - frees a list.
 *
 * @head: list to be freed.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *yeet;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		yeet = head;
		head = head->next;
		free(yeet->str);
		free(yeet);
	}
}
