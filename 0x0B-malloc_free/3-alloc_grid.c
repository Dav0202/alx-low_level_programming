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
	ar = (int **) malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
	}
	if (arr == NULL)
	{
    return (NULL);
	}
  return (arr);
}
