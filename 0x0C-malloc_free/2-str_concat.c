#include "holberton.h"
/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: The two strings, unless failure, then return NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *p, *q, *rtn;
	int len1 = 0, len2 = 0;

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	rtn = q = malloc(len1 + len2 + 1);

	if (rtn == NULL)
	{
		return (NULL);
	}

	for (p = s1; (*q = *p) != '\0'; p++, q++)
	{
	}

	for (p = s2; (*q = *p) != '\0'; p++, q++)
	{
	}
	q++;
	*q = '\0';

	return (rtn);
}
