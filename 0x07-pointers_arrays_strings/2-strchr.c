#include "holberton.h"
#define NULL 0
/**
 * _strchr - locate a character in a string.
 *
 * @s: the string being searched.
 * @c: the character.
 *
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	char *isCharFind = NULL;

	if (s != NULL)
	{
		do
		{
			if (*s == c)
			{
				isCharFind = s;
				break;
			}
		}
		while (*s++);
	}
	return (isCharFind);
}
