#include "main.h"
#include <stdlib.h>

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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		i++;
	}
	s[i] = 0;
	return (s);
}
