#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: is the width of the array.
 * @height: is the height of the array.
 *
 * Return: NULL if height or width is negative and on failure,
 * otherwise return the array.
 */

int **alloc_grid(int width, int height)
{
	int **array, i;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	return (array);
}
