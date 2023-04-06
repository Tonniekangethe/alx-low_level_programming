#include "main.h"

int natural_sqrt_recursion(int n, int r);
/**
 * _sqrt_recursion - square root of the recursive function
 * @n: integer value
 *
 * Return: nothing
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 1));
}
/**
 * natural_sqrt_recursion - recursion function to find squareroot of r
 * @r: input value
 * @n: squareroot value
 *
 * Return: integer value
 */
int natural_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (natural_sqrt_recursion(n, r + 1));
}
