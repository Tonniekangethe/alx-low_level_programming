#include "variadic_function.h"
#include <stdio.h>

/**
 * sum_them_all - a function that adds all numbers in an element
 * @n: number of arguments passed in the function
 *
 * Return: sum value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list index;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(index, n)

		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(index, int);
		}
	va_end (index);
	return (sum );
}
