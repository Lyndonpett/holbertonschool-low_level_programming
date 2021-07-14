#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: the length of the arguments
 * @argv: unused parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
