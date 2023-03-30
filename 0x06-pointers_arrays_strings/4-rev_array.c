#include "main.h"

/**
 * reverse_array - reversing the array
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n-- ; i++)
	{

		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
