#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 420);
	add_dnodeint_end(&head, 69);
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 0);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
