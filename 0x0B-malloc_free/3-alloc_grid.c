#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a 2D grid of given dimensions
 * @width: width input
 * @height: hiight of the grid
 * Return: pointer to create 2D arrays
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);

		if (grid[a] == NULL)
		{
			for (; a >= 0; a--)
				free(grid[a]);

			free(grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			grid[a][y] = 0;
	}

	return (grid);
}
