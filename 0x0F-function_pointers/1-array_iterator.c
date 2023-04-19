#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that execuits another function
 * @array: array of the function
 * @size: size of the array
 * @action: pointer of the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
