#include "lists.h"

/**
 * - sums all the data in a list.
 *
 * @head: the list.
 *
 * Return: 0 if list is empty, otherwise the sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
