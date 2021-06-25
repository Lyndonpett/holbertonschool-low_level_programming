#include <stdio.h>
/**
 * main - Prints alphabet backwards in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; --ch)
	{
	putchar (ch);
	}
	putchar ('\n');
	return (0);
}
