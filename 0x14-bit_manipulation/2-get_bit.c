#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: value of the bit
 * @index: index of the bit you want starting from 0
 *
 * Return: the value of the bit at a given index if successful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
