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
	int mid, len = 0;
	char *half;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		mid = len / 2;
	}
	else
	{
		mid = (len - 1) / 2;
	}
	
	half = &str[mid - 1];
	while (*half++)
	{
		_putchar(*half);
	}
	_putchar('\n');

}
