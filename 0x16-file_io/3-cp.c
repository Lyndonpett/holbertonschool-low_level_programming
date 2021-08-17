#include "holberton.h"

/**
 * main - copies a file.
 *
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int inputFD, outputFD, r;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((r = read(inputFD, buff, 1024)) > 0)
	{
		if (write(outputFD, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(inputFD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inputFD), exit(100);
	}
	if (close(outputFD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", outputFD), exit(100);
	}
	return (0);
}
