#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers
 *
 * @argc: The number of arguments
 * @argv: An array of pointers to the argument
 *
 * Return: 0, unless two arugments werent received, then return 1
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%d\n", result);
	return (0);
}
