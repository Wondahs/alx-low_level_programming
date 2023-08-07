#include "main.h"
#include <stdlib.h>
/**
 *free_grid - Frees previously assigned 2D array
 *@grid: Array
 *@height: Number of rows
 *Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
