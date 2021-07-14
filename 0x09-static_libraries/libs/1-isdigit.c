#include "holberton.h"
/**
 * _isdigit - Checks for a digit.
 *
 * @c: The character being checked.
 *
 * Return: 1 if a digit, 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}