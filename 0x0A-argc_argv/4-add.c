#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: number of command line arguments passed by the user
 * @argv: an array of characters pointers listing all arguments
 *
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int total = 0, i, sum, x, m;

	for (i = 1 ; i < argc ; i++)
	{
		for (m = 0 ; argv[i][m] != '\0' ; m++)
		{
			if (argv[i][m] > '9' || argv[i][m] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (x = 1 ; x < argc ; x++)
	{
		sum = atoi(argv[x]);
		total += sum;
	}
	printf("%d\n", total);
	return (0);
}
