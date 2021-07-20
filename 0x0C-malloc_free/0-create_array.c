#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: the size of the array.
 * @c: the character to initialize the array.
 *
 * Return: NULL, if size = 0 or a pointer to the array, or null if that fails.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
