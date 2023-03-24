#include "main.h"
#include <stdio.h>
/**
 *print_number - for integers from 0 to 9
 *@i: parameter 0 to 9
 *
 *Return: Always 0
 */
void print_number(void)
{
	char i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
