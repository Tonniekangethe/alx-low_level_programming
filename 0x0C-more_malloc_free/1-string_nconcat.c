#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatnates s1 to n charcters of s2
 * @s1: string
 * @s2: string
 * @n: number of bytes of s2
 *
 * Return: pointer of the memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j = 0, k;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			;
	while (s2[j] != '\0')
		j++;
	if (j > n)
		j = n;
	string = malloc(sizeof(char) * (i + j + 1));
	if (string == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		string[k] = s1[k];
	for (k = 0; k < j; k++)
		string[k + i] = s2[k];
	string[i + j] = '\0';
	return (string);
}
