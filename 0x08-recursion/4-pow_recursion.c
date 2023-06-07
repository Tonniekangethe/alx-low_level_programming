#include "main.h"

/**
 * _pow_recursion - function that prints the a number raised to the power of y
 * @x: number
 * @y: the power of the numberx
 *
 * Return: the power of the number x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
