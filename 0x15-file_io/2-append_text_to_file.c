#include "main.h"
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a line
 * @filename: pointer to the name of the file
 * @text_content: string that is added or tf the file
 *
 * Return: 1 i succesfile
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, count = 0;
	int w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[count];)
			count++;
	}
	o = open(filename, O_WRONLY, O_APPEND);
	w = write(o, text_content, strlen(text_content));

	if (o == -1)
		return (-1);
	if (w == -1)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
