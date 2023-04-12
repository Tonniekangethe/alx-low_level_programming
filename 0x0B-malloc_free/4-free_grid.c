#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the memory allocated to the grid
 * @height: height of the grid
 * @grid: pointer to the first grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
