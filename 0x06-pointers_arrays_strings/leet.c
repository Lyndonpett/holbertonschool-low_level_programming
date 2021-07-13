#include "holberton.h"
#include "2-strlen.c"
/**
 * leet - Endcodes a string into 1337.
 *
 * @a: the string being encoded.
 * @tobereplaced: the characters to be replaced.
 * @replacer: the characters that are replacing the original in the string.
 *
 *
 * Return: Returning the string.
 */
char *replace_char(char *a, char tobereplaced, char replacer);

char *leet(char *str)
{
	str = replace_char(str, 'a', '4');
	str = replace_char(str, 'A', '4');
	str = replace_char(str, 'e', '3');
	str = replace_char(str, 'E', '3');
	str = replace_char(str, 'o', '0');
	str = replace_char(str, 'O', '0');
	str = replace_char(str, 't', '7');
	str = replace_char(str, 'T', '7');
	str = replace_char(str, 'l', '1');
	str = replace_char(str, 'L', '1');

	return (str);
}
/**
 * replace_char - replaces a character with another.
 *
 * @a: the string being encoded.
 * @tobereplaced: the characters to be replaced.
 * @replacer: the characters that are replacing the original in the string.
 *
 * Return: the string.
 */
char *replace_char(char *a, char tobereplaced, char replacer)
{
	int length = 0;

	while (*a++)
	{
		if (*a == tobereplaced)
		{
			*a = replacer;
		}
		length++;
	}
	a -= length;

	return (a);
}
