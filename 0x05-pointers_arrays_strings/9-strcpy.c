#include "holberton.h"
/**
 * _strcpy - copies the string by its source and destination.
 *
 * @src: the source.
 * @dest: the destination
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
