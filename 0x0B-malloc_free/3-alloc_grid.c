#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - creates 2 dimensional array of integers.
 * @width: width of the dimension
 * @height: height of the dimension
 *
 * Return: pointer , NULLif it fails
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (i < 0; i < height; i++)
	{
		array[i] = (int) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array);
			return (NULL);

		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
