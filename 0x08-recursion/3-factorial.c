#include "main.h"

/**
 * factorial - the sum of * of all the positive integers smaller than n
 * @n: the input value
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
