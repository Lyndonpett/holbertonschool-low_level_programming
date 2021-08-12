#include "holberton.h"

/**
 * set_bit - sets a bit to a certain index.
 *
 * @n: the bit.
 * @index: where the bit is set.
 *
 * Return: -1 if failed, 1 on success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	return (1);
}
