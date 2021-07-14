#include "holberton.h"
#include "2-strlen.c"
/**
 * _strncpy - Copies a string.
 *
 * @dest: first string.
 * @src: second string.
 * @n: first letter of string
 *
 * Return: start.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}