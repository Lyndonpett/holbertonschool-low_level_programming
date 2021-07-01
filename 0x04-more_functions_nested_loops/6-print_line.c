#include "holberton.h"
/**
 * print_line - prints a line in the terminal.
 *
 * @n: number of times the character to be printed.
 *
 * Return: 0
 */
void print_line(int n)
{
	int line;


	if (n > 0)
	{
		for (line = 0; line  n; line++)
			_putchar('_');
	}
	_putchar('\n');

}
