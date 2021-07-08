#include "holberton.h"
#include "2-strlen.c"
/**
 * reverse_array - reverses an array.
 *
 * @a: the array being reversed.
 * @n: the number of elements of the array.
 *
 */
void reverse_array(int *a, int n)
{
	int low, high;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		int temp = a[low];

		a[low] = a[high];
		a[high] = temp;
	}
}
