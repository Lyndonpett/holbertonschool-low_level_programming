#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: the array
 * @size: the size of the array
 * @value: the value to look for
 *
 * Return: Index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;

		printArray(array, low, high);

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

/**
 * printArray - prints the array
 *
 * @array: the array
 * @low: lowest index
 * @high: highest index
 *
 */

void printArray(int *array, int low, int high)
{
	printf("Searching in array: ");

	while (low <= high)
	{
		printf("%d", array[low]);

		if (low != high)
		{
			printf(", ");
		}
		low++;
	}
	printf("\n");
}
