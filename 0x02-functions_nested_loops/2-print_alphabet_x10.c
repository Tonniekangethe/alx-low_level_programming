#include "main.h"

/**
 * print_alphabets_x10 - function prints the alphabets x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
			_putchar(x);
		_putchar('\n');
	}
}
