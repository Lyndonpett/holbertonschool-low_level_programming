#include <stdio.h>
/**
 * main - Prints alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	putchar ('\n');
	return (0);
}
