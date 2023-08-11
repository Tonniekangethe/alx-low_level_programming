#include "main.h"
#define BUF_SIZE 1024
void err_98(int f0, char *buffer, char *argv);
void err_99(int f0, char *buffer, char *argv);
void err_100(int f0, char *buffer);
/**
 * main - check code
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int f1, f2, r1, r2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	f1 = open(argv[1], O_RDONLY);
	err_98(f1, buffer, argv[1]);
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	err_99(f2, buffer, argv[2]);

	while (r2 >= BUF_SIZE)
	{
		r1 = read(f1, buffer, BUF_SIZE);
		if (r1 == 0)
			break;
		err_98(r1, buffer, argv[1]);
		r2 = write(f2, buffer, r1);
		err_99(r2, buffer, argv[2]);
	}
	r1 = close(f1);
	err_100(r1, buffer);
	r1 = close(f2);
	err_100(r1, buffer);
	free(buffer);
	return (0);
}
/**
 * err_98 - error if you cant find a file or cant read it
 * @f2: file to
 * @buffer: buffer
 * @argv: argument
 * Return: nothing
 */
void err_98(int f2, char *buffer, char *argv)
{
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * err_99 - error if you cannot create or write to a file
 * @f2: file to
 * @buffer: buffer
 * @argv: argument
 * Return: nothing
 */
void err_99(int f2, char *buffer, char *argv)
{
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * err_100 - error if you cant close a file descriptor
 * @f2: file to
 * @buffer: buffer size
 * Return: nothing
 */
void err_100(int f2, char *buffer)
{
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		free(buffer);
		exit(100);
	}
}
