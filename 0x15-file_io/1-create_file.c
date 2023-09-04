#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int w, o, l;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);

	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);
}
