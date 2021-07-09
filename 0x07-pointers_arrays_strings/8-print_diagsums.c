#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals in a square.
 *
 * @a: the array.
 * @size: the size of the square,
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, prin = 0, sec = 0;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				prin += a[i * size + j];

			}
			if (i + j == size - 1)
			{
				int calculatedIndex = i * size + j;
				int valueAtCalc = a[calculatedIndex];

				sec += valueAtCalc;

			}
		}
	}
	printf("%d, %d\n", prin, sec);
}
