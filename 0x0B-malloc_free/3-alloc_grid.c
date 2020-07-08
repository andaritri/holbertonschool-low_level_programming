#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2D array.
 * @width: number of columns
 * @height: number if rows
 *
 * Return: pointer to a 2D array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **matrix;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (; height >= 0; height--)
				free(matrix[height]);
			free(matrix);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			matrix[j][k] = 0;
	}
	return (matrix);
}
