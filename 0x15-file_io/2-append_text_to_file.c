#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a line
 * @filename: pointer to the name of the file
 * @text_content: string that is added or tf the file
 *
 * Return: 1 i succesfile
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_contet[count]; count++)
			;
	}
	o = open(filename, O_WRONLY, O_APPEND);
	w = write(o, text_content, count);

	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);
}
