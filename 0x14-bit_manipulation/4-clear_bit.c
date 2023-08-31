#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: number
 * @index: inex of the number to be set
 *
 * Return: 1 on succes
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
