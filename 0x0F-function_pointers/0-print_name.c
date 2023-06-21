#include "function_pointers.h"

/**
 * print_name - a function that prints the name
 * @name: pointer to a string
 * @f: function pointer to print_name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return (NULL);
	}
	f(name);
}
