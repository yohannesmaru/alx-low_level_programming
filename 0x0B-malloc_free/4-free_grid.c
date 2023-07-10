#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees the memory allocated for a 2-dimensional grid of integers
* @grid: pointer to the grid to be freed
* @height: height dimension of the grid
* Return: None
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
