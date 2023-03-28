#include "main.h"

/**
 * _strlen - length of the string variable
 * @s: parameter
 *
 * Return: value (j)
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		j++;
	}
	return (j);
}
