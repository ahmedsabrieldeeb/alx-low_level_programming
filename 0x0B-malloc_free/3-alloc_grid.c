#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: a double pointer
 *		   a NULL if one of args is 0 or -ve or at Failure
 */

int **alloc_grid(int width, int height)
{
	int cols = width, rows = height;
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * rows);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < rows; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * cols);
		if (arr[i] == NULL)
		{
			for (j = i - 1; j == 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
