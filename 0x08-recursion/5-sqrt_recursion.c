#include "holberton.h"
/**
 * sqrtHELPER - helps find the square root of a number.
 *
 * @goal: the number we are square rooting.
 * @squirt: our current guess at square root.
 *
 *
 * Return: square root.
 */
int sqrtHELPER(int goal, int squirt)
{
	if (squirt <= 0)
	{
		return (-1);
	}
	else if (squirt * squirt == goal)
	{
		return (squirt);
	}
	else
	{
		return (sqrtHELPER(goal, squirt - 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number being square rooted.
 *
 * Return: the square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (sqrtHELPER(n, n / 2));
}


