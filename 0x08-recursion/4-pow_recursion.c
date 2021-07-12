#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: main number
 * @y: raises the main number to this number.
 *
 * Return: The value of x, if y is < 0, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
