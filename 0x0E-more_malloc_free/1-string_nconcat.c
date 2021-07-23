#include "holberton.h"
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes.
 *
 * Return: a pointer to the combined string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *combined;

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

	if (n >= len2)
	{
		n = len2;
	}
	combined = malloc((len1 + n + 1) * sizeof(char));

	if (combined == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		combined[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		combined[i + j] = s2[j];
	}
	combined[i + j] = '\0';

	return (combined);
}
