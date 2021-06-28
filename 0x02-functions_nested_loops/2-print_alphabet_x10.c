#include "holberton.h"
/**
 * print_alphabet_x10 - Prints alphabet in lowercase ten times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i++ <= 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar (ch);
	}
	_putchar ('\n');
}
}
