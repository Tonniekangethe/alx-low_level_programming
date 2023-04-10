#include <stdio.h>

/**
 * main - the main function
 * @argc: number of command line arguments passed by the user
 * @argv: an array of characters pointers listing all arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
