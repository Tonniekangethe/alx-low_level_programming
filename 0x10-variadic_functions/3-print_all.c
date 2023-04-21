#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all string values
 * @format: list of type of arguments passed in the function
 *
 * Return: string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strn, *separator = "";

	va_list index;

	va_start(index, format);
	if (format)
		while (format[i] != '\0' && format != NULL)
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(index, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(index, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(index, double));
				break;
			case 's':
				strn = va_arg(index, char *);
				if (strn == NULL)
					strn = "nil";
				printf("%s%s", separator, strn);
				break;
			default:
				i++;
				continue;
			}
			separator = ",";
			i++;
		}
	va_end(index);
	printf("\n");
}
