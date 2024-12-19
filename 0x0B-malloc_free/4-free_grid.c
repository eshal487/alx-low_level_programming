#include "main.h"

/**
 * free_grid - free memory previously allocated
 * @grid: pointer to the array 
 * @height: number of row
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
