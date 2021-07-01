#include "holberton.h"
/**
 * print_square - prints a square.
 *
 * @size: size of the square
 *
 */
void print_square(int size)
{
	int line, column;
	/*value of square*/
	if (size > 0)
	{
		/*print rows*/
		for (line = 0; line < size; line++)
		{
			/*print columns*/
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

