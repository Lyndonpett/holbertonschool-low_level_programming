#include "holberton.h"

/**
 * clear_bit - clears a bit at a certain index.
 *
 * @n: the bit.
 * @index: where the bit will be cleared.
 *
 * Return: -1 on failure, 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
