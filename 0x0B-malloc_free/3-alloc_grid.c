#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional array of integers
 *
 * @width: width of grid
 * @height: height og grid
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **ar;

	int j, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		ar[j] = malloc(sizeof(int) * width);
		if (ar[j] == NULL)
		{
			for(; j >=0; j--)
				free(ar[j]);
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			ar[j][i] = 0;
	}

	return (ar);
}

