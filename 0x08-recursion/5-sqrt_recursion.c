#include "holberton.h"
#include <stdio.h>
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
	if ((goal / squirt) == squirt && (goal / squirt) * (goal / squirt) == goal)
	{
		return (squirt);
	}
	else if (squirt > goal / 2)
	{
		return (-1);
	}
	else
	{
		return ((sqrtHELPER(goal, squirt + 1)));
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
	int goal;

	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	goal = 1;

	return (sqrtHELPER(n, goal));
}


