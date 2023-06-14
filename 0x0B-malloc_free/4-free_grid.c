#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the allocated memory
 * @grid: pointer to the 2d array of int
 * @height: parameter
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
