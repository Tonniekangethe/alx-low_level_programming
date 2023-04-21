#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print a string
 * @separator: constant string value
 * @n: number of strings passed in the function
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list index;

	va_start(index, n);
	for (i = 0 ; i < n ; i++)
	{
		string = va_arg(index, char *);
		if (string == NULL)
			string = "nil";
		else if (separator == NULL)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		else
			printf("%s%s", separator, string);
	}
	printf("\n");
	va_end(index);
}
