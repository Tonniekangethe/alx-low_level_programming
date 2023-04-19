#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adding two int values
 * @a: parameter
 * @b: parameter
 *
 * Return: sum of int a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtruct two int values
 * @a: parameter
 * @b: parameter
 *
 * Return: subtraction of int a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two int values
 * @a: parameter
 * @b: parameter
 *
 * Return: multiplication of int a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divideds two int values
 * @a: parameter
 * @b: parameter
 *
 * Return: division of int a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get the nodulus of an int value
 * @a: parameter
 * @b: paramerer
 *
 * Return: modulus of a function
 */
int op_mod(int a, int b)
{
	return(a % b);
}
