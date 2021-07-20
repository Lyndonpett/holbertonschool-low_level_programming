#include "holberton.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string being copied.
 *
 * Return: NULL if string is NULL, On success, returns the
 * string or if it fails, returns NULL.
 */

char *_strdup(char *str)
{
	char *src, *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	src = malloc(len + 1);
	p = src;

	if (p == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (src);
}
