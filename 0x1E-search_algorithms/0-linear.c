#include "search_algos.h"

/**
 * linear_seach - searches for a value in an array
 *
 * @array: the array
 * @size: the array size
 * @value: value to look for
 *
 * Return: Index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
