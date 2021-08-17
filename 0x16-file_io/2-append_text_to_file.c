#include "holberton.h"

/**
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_RDWR | O_APPEND);
	if (o == -1)
	{
		return (-1);
	}

	w = write(o, text_content, bytes);
	if (w == -1)
	{
		return (-1);
	}

	close(0);
	return (1);
}
