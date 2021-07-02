#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: The string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
	x++;

	return (x);
}
