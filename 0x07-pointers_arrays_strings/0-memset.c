#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area  pointed to by s
 * @s:pointer variable
 * @b: parameter
 * @n: unsigned int value
 *
 * Return: the value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
