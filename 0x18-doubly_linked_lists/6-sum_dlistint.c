#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data.
 *
 * @head: the head.
 *
 * Return: the sum of all data.
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *sum = head;

	if (sum == NULL)
	{
		return (0);
	}
	while (sum != NULL)
	{
		total += sum->n;
		sum = sum->next;
	}
	return (total);
}
