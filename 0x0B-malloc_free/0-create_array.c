#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array and initializes it with char
 * @size: input size
 * @c: input character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ar;

	ar = (char *) malloc(size);

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
