#include "main.h"

/**
 * _pow_recursion - printing the integer x to the power of y
 * @x: input value
 * @y: input value
 *
 * Return: int value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}