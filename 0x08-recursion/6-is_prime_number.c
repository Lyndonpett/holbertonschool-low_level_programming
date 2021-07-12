#include "holberton.h"
/**
 * primeHELPER - helps divide the numbers to be able to be checked if prime.
 *
 * @n: the number being checked.
 * @i: the divider
 *
 * Return: 1 if number is a prime number.
 */
int primeHELPER(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n / 2)
	{
		return (1);
	}
	return (primeHELPER(n, i + 1));
}
/**
 * is_prime_number - checks to see if a number is prime or not.
 *
 * @n: the number being checked.
 *
 *
 * Return: 1 if number is prime.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (primeHELPER(n, i));
}
