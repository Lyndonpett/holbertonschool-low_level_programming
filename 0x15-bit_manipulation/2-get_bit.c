#include "holberton.h"

/**
 * get_bit - gets a bit at a certain index.
 *
 * @n: the bit.
 * @index: where the bit needs to be taken from.
 *
 * Return: index or -1 if failed.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	n = n >> index;
	return (1 & n);
}
