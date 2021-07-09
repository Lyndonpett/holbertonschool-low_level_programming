#include "holberton.h"
#include "2-strchr.c"
/**
 * _strpbrk - searches a string for a set of bytes.
 *
 * @s: the string.
 * @accept: the bytes.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}

	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
