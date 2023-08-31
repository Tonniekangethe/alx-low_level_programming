#include "main.h"

/**
 * flip_bits - function that counts the number of bits that need to be flipped
 * to move from one number to the next
 * @n: first number
 * @m: number to be compared
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int j;
	unsigned long int X = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = X >> i;
		if (j & 1)
			count++;
	}
	return (count);
}
