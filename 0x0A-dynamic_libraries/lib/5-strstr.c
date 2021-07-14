#include "holberton.h"
#define NULL 0
/**
 * _strstr - locates a substring.
 *
 * @haystack: the string.
 * @needle: the substring.
 *
 * Return: beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;

	for (;;)
	{
		if (!*b)
		{
			return ((char *) haystack);
		}
		if (!*a)
		{
			return (NULL);
		}
		if (*a++ != *b++)
		{
			a = ++haystack;
			b = needle;
		}
	}
}