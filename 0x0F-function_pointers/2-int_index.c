#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function
 * @array: array of the function
 * @size: number of elemtnts in an array
 * @cmp: pointer to the function
 *
 * Return: -1 if size is greater or = 0
 * else - 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
