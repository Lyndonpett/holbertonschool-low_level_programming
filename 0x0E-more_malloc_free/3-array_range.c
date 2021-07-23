#include "holberton.h"
/**
 * array_range - creates an array of integers.
 *
 * @min: the minimum.
 * @max: the maximum.
 *
 * Return: A pointer to the new array.
 */

int *array_range(int min, int max)
{
	int i, *yeet;

	if (min > max)
	{
		return (NULL);
	}
	yeet = malloc(((max - min) + 1) * sizeof(int));

	if (yeet == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		yeet[i] = min;
		min++;
	}
	return (yeet);
}
