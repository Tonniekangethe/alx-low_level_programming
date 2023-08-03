#include "main.h"

/**
 * get_endianness - a function to check if a machine is big or little endian
 *
 * Return: 1 for little otherwise 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
