#include "3-calc.h"

/**
 * main - takes another function and performs math on it.
 *
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 if success, 98 if not 3 arguments, 99 if wrong operator,
 * 100 if divided or modded by 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
