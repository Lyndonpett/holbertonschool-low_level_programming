#include "holberton.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string backwards
 *
 * @s: the string being printed
 *
 * Return (0)
 */
void print_rev(char *s)
{
	int i, len = 0;
	
	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
