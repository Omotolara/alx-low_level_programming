#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2-dimensional grid
 * @grid: address of the 2-dimensional grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
