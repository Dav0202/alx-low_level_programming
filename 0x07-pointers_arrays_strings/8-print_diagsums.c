#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagram sum
 * @a: input parameter
 * @size: input parameter
 * Description: prints the sum of diagonals of square matrix
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, i1, j2;

	i1 = 0;

	j2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				i1 += *((a + i * size) + j);
			}
			if ((i + j) == (size - 1))
			{
				j2 += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", s1, s2);
}
