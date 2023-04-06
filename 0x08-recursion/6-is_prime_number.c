#include "main.h"

int _prime_number(int n, int r);

/**
 * is_prime_number - check if the number is a prime number or not
 * @n: parameter
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	return (_prime_number(n, 1));
}
/**
 * _prime_number - the prime number function
 * @n: prime number value
 * @r: input value
 *
 * Return: integer value
 */

int _prime_number(int n, int r)
{
	if (n <= 1)
		return (0);
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 1)
		return (0);
	if ((n / r) < r)
		return (1);
	return (_prime_number(n, r + 1));
}
