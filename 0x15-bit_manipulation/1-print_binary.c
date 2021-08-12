#include "holberton.h"

/**
 * print_binary - prints a binary number.
 *
 * @n: the number to be printed.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
