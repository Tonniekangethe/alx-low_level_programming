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
	char *strn;

	va_list index;

	va_start(index, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(index, int));
			break;
		case 'i':
			printf("%d", va_arg(index, int));
			break;
		case 'f':
			printf("%f", va_arg(index, double));
			break;
		case 's':
			strn = va_arg(index, char *);
			if (strn == NULL)
				strn = "nil";
			printf("%s", strn);
			break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
		}
	va_end(index);
	printf("\n");
}
