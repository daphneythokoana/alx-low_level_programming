#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously
 *        created by your alloc_grid
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
		return (NULL);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
