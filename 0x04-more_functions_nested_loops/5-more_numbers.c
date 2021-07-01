#include "holberton.h"
/**
 * more_numbers - prints 0-14 ten times.
 *
 */
void more_numbers(void)
{
	char num, loop;

	for (loop = 1; loop <= 10; loop++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
