#include <stdlib.h>

/**
 * free_grid - free array
 * @grid: 2D array
 * @height: number of rows
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
