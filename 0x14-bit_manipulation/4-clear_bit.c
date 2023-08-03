#include <stdio.h>

/**
 * clear_bit - a function that turns a bit to 0 at given index
 * @n: parameter
 * @index: index of bit to be changed
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
