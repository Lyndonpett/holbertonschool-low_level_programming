#include "holberton.h"
#include "2-strlen.c"
/**
 * leet - Endcodes a string into 1337.
 *
 * @s: the string being encoded.
 *
 *
 * Return: Returning the string.
 */
char *leet(char *s)
{
	int i, j, k;

	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; j < 5; j++)
		{
			if (s[i] ==  c[k] || s[i] == c[k + 1])
			{
				s[i] = l[j];
			}
			k += 2;
		}
	}
	return (s);
}
