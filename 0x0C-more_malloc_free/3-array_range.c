#include "main.h"
#include <stdlib.h>

/**
 * array_range - a functin that creates an array if int
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);


	for (; i < len; i++)
		array[i] = min++;
	return (array);
}
