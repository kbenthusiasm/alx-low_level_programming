#include "main.h"
#include <stdlib.h>

/**
 * free_grid - two dimensional grid to be freed
 * @grid: two dimensional grid
 * @height:height
 * Return: Success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
