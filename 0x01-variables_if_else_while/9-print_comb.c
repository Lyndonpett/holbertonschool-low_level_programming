  
#include <stdio.h>
/**
 * main - Prints numbers 1 to 10
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
	putchar (ch);
	putchar (',');
	putchar (' ');
	}
	putchar ('\n');
	return (0);
}
