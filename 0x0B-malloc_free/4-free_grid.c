#include <stdlib.h>

/**
  * free_grid - Free the allocated memory created in alloc grid function
  * @grid: Pointer to the 2D array
  * @height: Vertical size of the array
  *
  * Return: void
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
