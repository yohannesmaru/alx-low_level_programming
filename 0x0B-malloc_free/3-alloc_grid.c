#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - allocate a 2D grid of integers with given width and height
* @width: the width of the grid
* @height: the height of the grid
* Return: pointer to the allocated grid, or NULL if allocation fails
*/
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
	mee[x] = malloc(sizeof(int) * width);

	if (mee[x] == NULL)
	{
	for (; x >= 0; x--)
	free(mee[x]);

	free(mee);
	return (NULL);
	}
	}

	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	{
	mee[x][y] = 0;
	}
	}

	return (mee);
}
