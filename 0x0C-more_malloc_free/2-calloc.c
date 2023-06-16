#include "main.h"
#include <stdlib.h>

/**
 * memset - a function that has constant byte
 * @s: pointer
 * @b: pointer
 * @n: total bytes used
 *
 * Return: ptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: byte of each element
 *
 * Return: pointer to the memory allocated to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * sizeof(int));
	if (s == NULL)
		return (NULL);

	_memset(s, 0, sizeof(int) * nmemb);
	return (s);
}
