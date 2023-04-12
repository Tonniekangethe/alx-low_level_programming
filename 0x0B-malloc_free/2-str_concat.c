#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concactinating two strings
 * @s1: parameter
 * @s2: parameter
 *
 * Return: conc
 */
char *str_concat(char *s1, char *s2)
{
	int n, x, y, i, j;
	char *conc;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	n = x + y;
	conc = malloc((sizeof(char) * n) + 1);

	if (conc == NULL)
		return (NULL);
	for (i = 0 ; i < x ; i++)
		conc[i] = s1[i];
	j = 0;
	while (j <= n)
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
		return (conc);
}
