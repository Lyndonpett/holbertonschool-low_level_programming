#include "holberton.h"
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The amount of memory needing to be allocated.
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
