#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of square matrix integer
 * @a: string
 * @size: size of the integers
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0 ; i < size ; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d,%d\n", sum1, sum2);
}
