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
	unsigned int i, j;
	char *combined;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	combined = malloc((i + n + 1) * sizeof(char));

	if (combined == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		combined[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		combined[i + j] = s2[j];
	}
	combined[i + j] = '\0';

	return (combined);
}
