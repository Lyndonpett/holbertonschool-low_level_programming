#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list.
 *
 * @head: pointer to the head of a list.
 * @str: the string to be added.
 *
 * Return: address of the new head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
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
		{
		}
		new->len = i;
	}
	*head = new;
	return (*head);
}
