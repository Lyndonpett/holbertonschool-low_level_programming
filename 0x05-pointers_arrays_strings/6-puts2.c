#include "holberton.h"
#include "2-strlen.c"
/**
 * puts2 - Prints every other character of a string.
 *
 * @str: The string being input.
 *
 */
void puts2(char *str)
{
	int i, len = 0;

	len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
