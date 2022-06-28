#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 * Return: returns NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ar;

	int i;

	int j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ar = (int **) malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ar[j]);
			}
			free(ar);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
