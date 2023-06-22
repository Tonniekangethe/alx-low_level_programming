#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints a string
 * @separator: pointer to the string to be printed between strings
 * @n: number of arguments passed in the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list index;
	char *str;
	unsigned int i = 0;

	va_start(index, n);
	for (; i < n; i++)
	{
		str = va_arg(index, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(index);
}
