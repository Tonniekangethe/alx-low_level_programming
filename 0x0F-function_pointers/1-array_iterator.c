#include "function_pointers.h"

/**
 * array_iterator - a function that iterates through an array
 * @array: pointer to an a variable
 * @size: size of the array
 * @action: a pointer to a function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (araay == NULL  || action == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
