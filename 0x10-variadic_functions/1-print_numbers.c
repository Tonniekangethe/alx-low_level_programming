#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - the function prints numbers in the  variadic functions
 * @separator: string to a variable
 * @n: number of srguments passed in the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list index;

	va_start(index, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(index, int));
		else if (separator && i == 0)
			printf("%d", va_arg(index, int));
		else
			printf("%s%d", separator, va_arg(index, int));
	}
	va_end(index);
	printf("\n");
}
