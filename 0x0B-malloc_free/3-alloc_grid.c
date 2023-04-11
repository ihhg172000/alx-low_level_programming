#include <stdlib.h>

void free_grid(int **grid, int height);

/**
* **alloc_grid - function allocates and initializes a 2D array
* @width: width of 2d array
* @height: height of 2d array
*
* Return: pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			free_grid(ptr, height);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}

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
