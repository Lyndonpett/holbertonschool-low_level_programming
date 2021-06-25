#include <stdio.h>
/**
 * main - Prints alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar (ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
	putchar (CH);
	}
	putchar ('\n');
	return (0);
}
