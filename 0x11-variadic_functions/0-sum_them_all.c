#include "variadic_functions.h"
/**
 * sum_them_all - adds all numbers passed through function.
 *
 * @n: the numbers being passed.
 *
 * Return: the sum of the ints.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list yeet;

	if (n == 0)
	{
		return (0);
	}

	va_start(yeet, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(yeet, int);
	}
	va_end(yeet);

	return (sum);
}
