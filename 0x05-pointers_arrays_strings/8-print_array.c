#include <stdio.h>

/**
 *print_array - function that prints element n in an array
 *
 *@a: parameter
 *@n: length of array
 *
 *Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(" , ");
		}
	}
	putchar('\n');
}
