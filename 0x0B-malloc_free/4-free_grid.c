#include "main.h"

/**
 * free_grid - function that frees a 2d array
 *
 * @grid: the 2d array
 * @height: number of arrays in the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
