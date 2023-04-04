#include "main.h"

/**
 * _strchr - locate char c in the string
 * @s: a string
 * @c: the character that we are locating in the string
 *
 * Return: '\0'
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return ('\0');
}
