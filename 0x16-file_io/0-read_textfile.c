#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: the file.
 * @letters: the number of letters to print.
 *
 * Return: if the function fails or not.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}

	r = read(o, buff, letters);
	if (r == -1)
	{
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
	{
		return (0);
	}

	free(buff);
	close(o);
	return (r);
}
