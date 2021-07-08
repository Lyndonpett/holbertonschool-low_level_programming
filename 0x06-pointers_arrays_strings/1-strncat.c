#include "holberton.h"
#include "2-strlen.c"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: first string.
 * @src: second string.
 * @n: byte size.
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
