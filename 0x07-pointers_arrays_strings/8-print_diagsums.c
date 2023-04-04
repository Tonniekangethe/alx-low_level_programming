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
	int i, j, t;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		t = (i * size) + i;
		sum1 += *(a + t);
	}
	for (j = 0 ; j < size ; j++)
	{
		t = (j * size) + (size - 1 - j);
		sum2 += *(a + t);
	}
	printf("%d,%d\n", sum1, sum2);
}
