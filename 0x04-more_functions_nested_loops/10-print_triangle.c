#include "holberton.h"
/**
 * print_triangle - will print a triangle based on the number inputed.
 *
 * @size: The size of the triangle.
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int line, column;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (column = size - line; column > 0; column--)
				_putchar(' ');

			for (column = 0; column < line; column++)
			{
				_putchar('#');
			}
			if (size == line)
				continue;

		_putchar('\n');
		}
	}

	_putchar('\n');
}

