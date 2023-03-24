#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - print all numbers excluding 2 and 4
 *
 *Return: Always 0
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
