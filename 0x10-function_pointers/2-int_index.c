#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: the array.
 * @size: the size of the array.
 * @cmp: A pointer to the function to be used to compare value.
 *
 * Return: -1, if no element matches or if size <= 0.
 * Or The index of the first element for which
 * the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
