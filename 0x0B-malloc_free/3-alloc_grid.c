#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2d array or null if it fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		grid[r] = malloc(sizeof(int) * width);
		if (grid[r] == NULL)
		{
			for (c = 0; c < r; c++)
			{
				free(grid[c]);
			}
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			grid[r][c] = 0;
		}
	}
	return (grid);
}

