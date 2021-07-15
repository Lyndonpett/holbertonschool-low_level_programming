#include "holberton.h"
/**
 * print_alphabet - Prints alphabet in lowercase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
