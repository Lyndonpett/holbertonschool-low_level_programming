#include "holberton.h"
/**
 * _puts - prints a string
 *
 * @str: the string we are going to print
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}