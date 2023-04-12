#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - pointer to  a duplicate of str
 * @str: parameter
 *
 * Return: a pointer dupstr
 */
char *_strdup(char *str)
{
	int x, y;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	dupstr = malloc(sizeof(str) * (x + 1));

	if (dupstr == NULL)
		return (NULL);
	for (y = 0; str[y] ; y++)
	{
		dupstr[y] = str[y];
	}
	return (dupstr);
}
