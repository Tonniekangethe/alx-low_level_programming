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
	int i = 0, j = 0, l, len1, len2;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[i++] != '\0')
			len2++;
	}
	l = len1 = len2;

	string = malloc(sizeof(char) * (l + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (; i < len1; i++)
		string[i] = s1[i];
	for (;j < len2; j++, i++)
		string[i] = s2[j];
	string[l] = '\0';
	return (string);
}
