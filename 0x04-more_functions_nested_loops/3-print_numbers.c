#include "holberton.h"
/**
 * print_numbers - prints the numbers 0-9.
 *
 */
void print_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	
	_putchar(n + '0');
	
	_putchar('\n');
}
