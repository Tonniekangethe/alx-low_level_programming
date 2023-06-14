#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that return a pointer to a 2d array
 * @width: parameter
 * @height: parameter
 *
 * Return: a pointer to a 2d array of int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w = 0, h = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * h);
	if (grid == NULL)
		return (NULL);
	for (; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * w);
		if (grid[h] == NULL)
		{
			for (; h > 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
	}
	for (; h < height; h++)
	{
		for (; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
