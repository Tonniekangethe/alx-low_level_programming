#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the number to 1 at a given indedex
 * @n: number
 * @index: index of the number to be set to 1
 *
 * Return: 1 on successs otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= ((1UL << index) | *n);
	return (1);
}
