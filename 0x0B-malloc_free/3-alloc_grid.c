#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a function that returns a 2d array
 * @width: width of grid
 * @height:height of grid
 *
 * Return: td
 */
int **alloc_grid(int width, int height)
{
	int x, y, i, j;
	int **td;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

		td = malloc(sizeof(int *) * height);
		if (td == NULL)
			return (NULL);
	for (x = 0 ; x < height ; x++)
	{
		td[x] = malloc(width * sizeof(int));
		if (td[x] == NULL)
		{
			for (y = 0; y <= x ; y++)
				free(td[y]);
			free(td);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			td[i][j] = 0;
	}
	return (td);
}
