#include "main.h"

/**
 *_isalpha - print if the function is in upper or lowercase
 *
 *Return: 1 if the function is in upper or lowercase
 *otherwise 0
 *@c: write function
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
