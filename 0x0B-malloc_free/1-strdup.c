#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that duplicates a string
 * @str: string variable
 *
 * Return: s pointer to malloc
 */
char *_strdup(char *str)
{
	char *s;
	int i, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc((sizeof(char) * n) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}
	s[n] = '\0';
	return (s);
}
