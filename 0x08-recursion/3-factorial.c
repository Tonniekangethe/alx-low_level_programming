#include "main.h"

/**
 * factorial - a function that returns the factorial a given number
 * @n: the given number
 *
 * Return: fuctorial of the number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
