#include "main.h"

/**
 * alloc_grid - Allocate memory for a 2D array
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: The pointer to the allocated memory of the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, n = 0, m = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}

	while (n < height)
	{
		while (m < width)
		{
			ptr[n][m] = 0;
			m++;
		}
		n++;
	}
	return (ptr);
}
