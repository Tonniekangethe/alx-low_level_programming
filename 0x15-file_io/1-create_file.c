#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file created
 * @text_content: poniter to the string to write to the file
 *
 * Return: 1 if succesful
 * -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[count]; count++)
			;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, count);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (-1);
}
