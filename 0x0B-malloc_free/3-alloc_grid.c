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

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	ar = (int **) calloc(height, sizeof(int *));

	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = calloc(width, sizeof(int));
		if (ar[i] == NULL)
		{
			while (--i >= 0)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}
	return (ar);
	if (ar != NULL)
	{
		return (ar);
	}
}
