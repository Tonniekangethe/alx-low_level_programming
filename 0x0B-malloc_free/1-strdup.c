#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - pointer to  a duplicate of str
 * @str - parameter
 *
 * Return: a pointer dupstr
 */
char *_strdup(char *str)
{
	int x, y;
	char *dupstr;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (str == NULL)
			return (NULL);
	}

	dupstr = malloc(sizeof(str) * (x + 1));

	for (y = 0; str[y] ; y++)
	{
		dupstr[y] = str[y];
	}
	return (dupstr);
}
