#include "main.h"

/**
 * read_textfile - function that reads text file and prints the standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: the ac tual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
