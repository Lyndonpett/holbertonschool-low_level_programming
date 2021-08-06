#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list.
 *
 * @head: the list
 * @str: the string to be added.
 *
 * Return: the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *yeet;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{}
		new->len = i;
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		yeet = (list_t *) *head;
		while (yeet->next != NULL)
		{
			yeet = yeet->next;
		}
		yeet->next = new;
	}
	return (new);
}
