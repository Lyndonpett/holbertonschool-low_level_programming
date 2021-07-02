#include "holberton.h"
#include "2-strlen.c"
/**
 * puts_half - Prints half of a string,
 * if number is odd, print the last n characters.
 *
 * @str: The string being tested.
 *
 */
void puts_half(char *str)
{
	int index = 0, len = 0, mid;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		mid = len / 2;
	}
	else
	{
		mid = (len + 1) / 2;
	}

	for (index = mid; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');

}
