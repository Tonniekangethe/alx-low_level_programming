#include "main.h"

int natural_sqrt_recursion(int r, int n);
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
	return (natural_sqrt_recursion(n, 0));
}
/**
 * natural_sqrt_recursion - recursion function to find squareroot of r
 * @r: input value
 * @n: squareroot value
 *
 * Return: integer value
 */
int natural_sqrt_recursion(int r, int n)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (natural_sqrt_recursion(n, r - 1));
	return (natural_sqrt_recursion(n, r + 1));
}
