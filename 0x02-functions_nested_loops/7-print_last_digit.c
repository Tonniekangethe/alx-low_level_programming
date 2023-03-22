#include "main.h"

/**
 *print_last_digit - print the last digit
 *
 *@i: a digit function
 *Return: k
 *
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
