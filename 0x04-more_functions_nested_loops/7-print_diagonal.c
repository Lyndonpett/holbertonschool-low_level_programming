#include "holberton.h"
/**
 * print_diagonal - prints a line in the terminal.
 *
 * @n: number of times the character to be printed.
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int line, spaces;

	/*valid input*/
	if (n > 0)
	{	/*print row*/
		for (line = 0; line < n; line++)
		{
			/*print columns*/
			for (spaces = 0; spaces < line; spaces ++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
