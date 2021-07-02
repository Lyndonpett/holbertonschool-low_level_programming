#include "holberton.h"
/**
 * *_strcopy - copies the string by src.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src [i];
		i++;
	}
	return (dest);
}
