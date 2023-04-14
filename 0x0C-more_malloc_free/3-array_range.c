#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function containing the size of array
 * @min: the minimum value
 * @max: maximum value
 *
 * Return: the new array ptr
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	len = max - min + 1;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
