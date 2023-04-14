#include "main.h"
#include <stdlib.h>
#include <stdio.h>
 /**
  * string_nconcat - a function concatinating two strings
  * @s1: string
  * @s2 : string
  * @n: length of n to be concacinated
  *
  * Retur: char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, i;
	char *ptr;

	if (s1 == NULL)
		x = 0;
	else
		x = 0;
	while (s1[x])
	{
		x++;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		y = 0;
	}
	while (s2[y])
	{
		y++;
	}
	if (n <= y)
		ptr = malloc(sizeof(char) * (x + y + 1));
	else
	ptr = malloc(sizeof(char) * (x + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < x ; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0 ; i < y ; i++)
	{
		ptr[i + x] = s2[y]
	ptr[x + y] = '\0';
	return (ptr);
}
