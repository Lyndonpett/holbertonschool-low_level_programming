#include "holberton.h"
#include "strlen.c"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: The string
 * @b: The constant byte
 * @n: The number of bytes.
 *
 * Return: Memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}

