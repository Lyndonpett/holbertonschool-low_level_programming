#include "holberton.h"
#include "2-strlen.c"
/**
 * string_toupper - changes a string to uppercase.
 *
 * @str: the string being uppercased.
 *
 *
 * Return: a pointer to the main string.
 */
char *string_toupper(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
