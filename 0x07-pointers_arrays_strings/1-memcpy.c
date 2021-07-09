#include "holberton.h"
/**
 * _memcpy - copies a memory area.
 *
 * @dest: first memory area
 * @src: second memory area
 * @n: number of bytes
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*dest++ = *src++;
		--n;
	}
	return (dest);
}
