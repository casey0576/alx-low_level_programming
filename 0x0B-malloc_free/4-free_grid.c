#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This function frees a 2D array.
 * @grid: 2D grid to be freed
 * @height: Height dimension of the grid.
 * Description: This function releases the memory occupied by the grid.
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
