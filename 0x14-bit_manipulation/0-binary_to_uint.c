#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of '0' or '1' chars
 *
 * Return: converted number if succesful or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (-1);
	for ( ; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return ('\0');
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
