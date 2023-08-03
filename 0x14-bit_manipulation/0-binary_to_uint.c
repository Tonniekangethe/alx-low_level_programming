#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - a function that converts a binary to uint
 * @b: parameter
 *
 * Return: unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (b == NULL)
		return (-1);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return ('\0');
		val = 2 * val + (b[i] - '0');
	}
	return (val);
}
