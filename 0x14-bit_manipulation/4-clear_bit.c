#include "main.h"

/**
 * clear_bit - function that sets the value of bit to 0 at given index
 * @n: pointer to the number being changed
 * @index: index of the bit to be changed
 *
 * Return: 1 if successful ohterwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
