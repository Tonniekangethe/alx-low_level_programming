#include "main.h"

/**
 * _islower - check if c is in lowercharacter
 * @c: parameters to be printed
 *
 *Return: 1 if c is in lowercase
 *return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
