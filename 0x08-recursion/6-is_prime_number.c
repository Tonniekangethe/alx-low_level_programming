#include "main.h"
int natural_prime(int n, int i);

/**
 * is_prime_number - a function that shows if a number is a prime number
 * @n: integer
 *
 * Return: 1 if number is a prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (natural_prime(n, n - 1));
}

/**
 * natural_prime - calculate if an integer is a prime number
 * @n: integer
 * @i: iretarator
 *
 * Return: 1 if prime, 0 otherwise
 */

int natural_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (natural_prime(n, i - 1));
}
