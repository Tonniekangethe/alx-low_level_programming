#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates array of memory
 * @nmemb: parameter
 * @size: sife of the array
 *
 * Return: cal function
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
		cal[i] = 0;
	return (cal);
}
