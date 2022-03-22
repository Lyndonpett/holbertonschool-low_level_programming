#include "search_algos.h"

/**
 * advanced_binary - uses recursion to find a
 * value through advanced binary sort
 *
 * @array: The array
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: Value's index or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	/* first call of binaryRec to start recursion */
	/* left starts at 0 index, right starts at end index */
	return binaryRec(array, value, 0, (int)size - 1);
}

/**
 * binaryRec - recursively finds a value at an index
 *
 * @array: The array
 * @value: The value to look for
 * @left: The left index
 * @right: The right index
 *
 * Return: Value's index or -1
 */
int binaryRec(int *array, int value, int left, int right)
{
	int mid;

	if (right >= left)
	{
		mid = left + (right - left) / 2;

		/* check if the value is the mid point */
		if (array[mid] == value)
		{
			printArray(array, left, right);
			/* if both mid points = value, run recursion again */
			if (array[mid - 1] == value)
			{
				return (binaryRec(array, value, left, mid));
			}
			return mid;
		}
		/* if value is < mid, it can only be present in left subarray */
		if (array[mid] > value)
		{
			printArray(array, left, right);
			return (binaryRec(array, value, left, mid - 1));
		}

		/* if value is > mid, it can only be present in right subarray */
		else
		{
			printArray(array, left, right);
			return (binaryRec(array, value, mid + 1, right));
		}
	}
	/* element not present, return -1 */
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
