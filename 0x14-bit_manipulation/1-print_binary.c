#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, val = 0;
	unsigned long int j;

	i = 63;
	while (i >= 0)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
			val++;
		}
		else if (val)
		{
			_putchar('0');
		}
		i--;
	}
	if (!val)
	{
		_putchar('0');
	}
}
