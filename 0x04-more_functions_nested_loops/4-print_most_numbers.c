#include "holberton.h"
/**
 * print_most_numbers - prints the numbers 0-9, except 2 and 4.
 *
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)

		if (n != 2 && n != 4)

			_putchar(n + '0');

	_putchar('\n');
}
