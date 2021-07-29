#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 *
 * @separator: string to be printed between strings.
 * @n: number of strings.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list yeet;
	va_list strcheck;

	va_start(yeet, n);
	va_start(strcheck, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(strcheck, char *) == NULL)
		{
			printf("(nil)");
			va_arg(yeet, char *);
		}

		else
		{
			printf("%s", va_arg(yeet, char *));
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(yeet);
	va_end(strcheck);
}
