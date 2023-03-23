#include "main.h"

/**
 *_isupper - check to see if the c function is in uppercase
 *@c: parameter
 *Return: 1 if c is in uppercase
 *otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
