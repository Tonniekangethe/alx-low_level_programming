#include "3-calc.h"

/**
 * op_add - a function that adds two numbers
 * @a: parameter
 * @b: parameter
 *
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtructs two numbers
 * @a: parameter
 * @b: parameter
 * Return: differnce of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a fun ction that multiplies two integers
 * @a: parameter
 * @b: parameter
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two int
 * @a: parameter
 * @b: parameter
 * Return: the division of a to b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that find the modulus
 * @a: parameter
 * @b: parameter
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
