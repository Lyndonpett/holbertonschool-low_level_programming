#include "lists.h"

/**
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	list_t *yeet = (list_t *)h;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (yeet != NULL)
	{
		if (yeet->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", yeet->len, yeet->str);
		}
		yeet = yeet->next;

		count++;
	}
	return (count);
}
