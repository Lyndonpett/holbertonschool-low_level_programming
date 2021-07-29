#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers.
 * @n: number of ints.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list yeet;

	va_start(yeet, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(yeet, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(yeet);
}
