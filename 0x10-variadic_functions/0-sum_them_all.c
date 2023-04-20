#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that adds all the optional arguments
 * @n: the last required argument in the function
 *
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list index;

	if (n == 0)
		return (0);
	va_start(index, n);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(index, int);
	}
	va_end(index);
	return (sum);
}
