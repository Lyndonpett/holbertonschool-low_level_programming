#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: the array.
 * @size: the bytes/size of the array.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *yeet;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	yeet = malloc(nmemb * size);

	if (yeet == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		yeet[i] = '\0';
	}
	return (yeet);
}
