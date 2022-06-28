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

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ar = (int **) calloc(height, sizeof(int *));

	if (!(ar))
	{
		free(ar)
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = calloc(width, sizeof(int));
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
	free(ar);
}
