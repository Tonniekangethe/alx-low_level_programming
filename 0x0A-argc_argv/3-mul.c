#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: number of command line arguments passed by the user
 * @argv: an array of characters pointers listing all arguments
 *
 * Return: 0 success
 * otherwise - Error
 */
int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
