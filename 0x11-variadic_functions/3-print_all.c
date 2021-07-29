#include "variadic_functions.h"

/**
 * print_all - prints everything.
 *
 * @format: the format of the code passed.
 *
 * Return: void.
 */

void print_all(const char *const format, ...)
{	int j, k, i = 0;
	char *str;
	va_list yeet;

	va_start(yeet, format);
	while (format != NULL && format[i] != '\0')
	{	k = 0;
		switch (format[i])
		{case 'c':
			printf("%c", va_arg(yeet, int));
			break;
		case 'i':
			printf("%d", va_arg(yeet, int));
			break;
		case 'f':
			printf("%f", va_arg(yeet, double));
			break;
		case 's':
			str = va_arg(yeet, char *);
			if (str == NULL)
			{	printf("(nil)");
				break; }
			printf("%s", str);
			break;
		default:
			k = 1;
			break; }
		j = i + 1;
		while (k != 1 && format[j] != '\0')
		{
			switch (format[j])
			{ case 'c': case 'i': case 'f': case 's':
			{	printf(", ");
				k = 1;
				break; }
			default:
				break; }
			j++; }
		i++; }
	printf("\n");
	va_end(yeet);
}
