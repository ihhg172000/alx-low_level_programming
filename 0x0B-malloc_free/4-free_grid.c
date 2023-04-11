#include <stdlib.h>

/**
* free_grid - function frees 2D array
* @grid: pointer to 2D array
* @height: height of 2D array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

