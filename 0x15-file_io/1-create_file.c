#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file created
 * @text_content: a null terminated string to write the file
 *
 * Return: 1 on successs
 */
int create_file(const char *filename, char *text_content)
{
	int w, o, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[l]; l++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
