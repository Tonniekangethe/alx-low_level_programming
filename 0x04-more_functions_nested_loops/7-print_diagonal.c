#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - print diagonal lines
 *
 *@n: parameter
 *Return: 0
 */
void print_diagonal(int n)
{
	int length;
	int space;

	if (n > 0)
	{
		for (length = 0 ; length < n ; length++)
		{
			for (space = 0 ; space < length ; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (length == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
