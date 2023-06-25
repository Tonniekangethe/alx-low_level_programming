#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list index;


	va_start(index, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
					{
					case 'c':
						printf("%s%c", sep, va_arg(index, int));
						break;
					case 'i':
						printf("%s%d", sep, va_arg(index, int));
						break;
					case 'f':
						printf("%s%f", sep, va_arg(index, double));
						break;
					case 's':
						str = va_arg(index, char *);
						if (!str)
							str = "(nil)";
						printf("%s%s", sep, str);
						break;
					default:
						i++;
						continue;
					}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(index);
}

