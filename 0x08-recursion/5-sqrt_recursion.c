#include "main.h"
int natural_sqrt(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural squareriit of a number
 * @n: number
 *
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (natural_sqrt(n, 0));
}

/**
 * natural_sqrt - a function to find the squareroot of a natural number
 * @n: number
 * @i: iterator
 *
 * Return: square root of the number
 */

int natural_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (natural_sqrt(n, i + 1));
}
