#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated 2D array,
 *
 * free_grid - this fuctioj will
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);


	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));

	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		free(grid[j]);
		free(grid);
		return (NULL);
	}

	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}

	return (grid);
}
/*
 * free_grid - this fuctioj will
 * Description - this is a ponter to
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
