#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 *
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0, unless a non-integer is passed, then return -1
 */
int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
