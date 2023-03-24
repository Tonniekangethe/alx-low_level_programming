#include <stdio.h>
#include "main.h"

/**
 *more_numbers - print out 1 t0 14 nine times
 *
 *Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
