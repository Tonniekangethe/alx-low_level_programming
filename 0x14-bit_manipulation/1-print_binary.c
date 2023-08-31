#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number being printed in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int j;

	i = 63;
	while (i >= 0)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
		i--;
	}
	if (!num)
	{
		_putchar('0');
	}
}
