#include "main.h"

/**
 * get_bit - function that returns the value of bit at a given index
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;
	return (i);
}
