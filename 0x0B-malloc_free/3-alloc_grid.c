#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int m, n;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(sizeof(int) * width);

		if (grid[m] == NULL)
		{
			for (; m >= 0; m--)
				free(grid[m]);

			free(grid);
			return (NULL);

		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}
	return (grid);
}
