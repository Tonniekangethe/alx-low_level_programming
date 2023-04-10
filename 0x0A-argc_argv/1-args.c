#include <stdio.h>

/**
 * main - function
 * @argc: number of command line argument
 * @argv: array of character pointers listing all the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
