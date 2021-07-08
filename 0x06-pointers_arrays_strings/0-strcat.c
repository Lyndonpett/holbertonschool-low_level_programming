#include "holberton.h"
#include "2-strlen.c"
/**
 * _strcat - concatenates two strings
 *
 * @dest: First string.
 * @src: Second string.
 *
 * Return: Dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}

