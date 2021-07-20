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
	char *rtn;
	int len1 = 0, len2 = 0, p, q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	rtn = malloc(len1 + len2 + 1);

	if (rtn == NULL)
	{
		return (NULL);
	}

	for (p = 0; s1[p] != '\0'; p++)
	{
		rtn[p] = s1[p];
	}
	for (q = 0; s2[q] != '\0'; q++)
	{
		rtn[p + q] = s2[q];
	}

	rtn[p + q] = '\0';

	return (rtn);
}
