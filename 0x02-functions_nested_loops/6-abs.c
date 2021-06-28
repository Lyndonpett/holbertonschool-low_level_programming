#include "holberton.h"
/**
 * _abs - Computes the absolute value of an interger.
 *
 * @n: The character to be checked.
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
