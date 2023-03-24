#include <stdio.h>
#include "main.h"

/**
 *print_square - print a square
 *@size:parameters
 *
 *Return: 0
 */
void print_square(int size)
{
	int n;
	int x;

	if (size > 0)
	{
		for (n = 0 ; n < size ; n++)
		{
			for (x = 0 ; x < (size - 1) ; x++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
