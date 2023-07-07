#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer to the number to be set to 1
 * @index: index of the bit to be set to 1
 *
 * Return: 1 if succesful
 * otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
