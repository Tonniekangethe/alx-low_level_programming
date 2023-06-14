#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatnates two strings
 * @s1: string
 * @s2: string
 * Return: string variable
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i = 0, j = 0, l;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	l = i + j;

	string = malloc(sizeof(char) * (l + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (; i < s1[i]; i++)
		string[i] = s1[i];
	for (; j < s2[j]; j++, i++)
		string[i] = s2[j];
	string[l] = '\0';
	return (string);
}
