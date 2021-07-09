#include "holberton.h"
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
	int i;

	for (i = 0; needle[i] && haystack[i]; i++)
	{
		for (; needle[i] != haystack[i]; haystack++)
		{
			i = 0;
		}
	}
	return (needle[i]) ? 0 : (char *)haystack;
}
