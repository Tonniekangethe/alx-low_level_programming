#include "main.h"

/**
 * _print_rev_recursion - the function prints the string in revrse
 * @s: input
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
