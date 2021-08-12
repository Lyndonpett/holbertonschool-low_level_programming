#include "holberton.h"

/**
 * countSetBits - counts the bits to be set.
 *
 * @n: the number to reset.
 *
 * Return: 1 or -1.
 */

unsigned int countSetBits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - counts the bits of a flip.
 *
 * @n: the number to be reset.
 * @m: index to change.
 *
 * Return: 1 or -1.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
