#include "holberton.h"
#include "2-strchr.c"
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the string.
 * @accept: the bytes.
 *
 * Return: initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}