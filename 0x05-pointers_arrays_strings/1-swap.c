#include "main.h"

/**
 *swap_int - swap the values of two variables
 *@a: parameter
 *@b: parameter
 *
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
