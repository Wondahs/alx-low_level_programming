#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *@width: Width of array
 *@height: Height of array
 *Return: NULL on failure, pointer on success
 *
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = (int **)malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
