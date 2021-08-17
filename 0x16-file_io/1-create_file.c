#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the file.
 * @text_content: the text content.
 *
 * Return: 1 on success. 0 on failure.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, bytes = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[bytes])
	{
		bytes++;
	}

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}

	w = write(o, text_content, bytes);
	if (w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
