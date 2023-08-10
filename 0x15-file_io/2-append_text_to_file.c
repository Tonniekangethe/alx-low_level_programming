#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of the line
 * @filename: name of the file
 * @text_content: null terminated string added at the end of the line
 *
 * Return: 1 on successs, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[l]; l++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	close(o);
	return (1);
}
