#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array.
 *
 * @a: the array
 * @n: the number of elements of the array.
 *
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
