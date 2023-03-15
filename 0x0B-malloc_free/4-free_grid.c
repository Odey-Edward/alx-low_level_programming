#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - fress a 2 dimentional array
* @grid: 2D array
* @height: array height
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
