#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * @filename: a pointer to the name of the file
 * @letters: number of characters to be read and printed
 *
 * Return: number of bytes the functuin can read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (r);
}
