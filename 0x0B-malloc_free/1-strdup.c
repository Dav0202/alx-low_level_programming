#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - allocates space in memory
 * @str: input string
 * Return: returns a pointer to a new space in memory
 */
char *_strdup(char *str)
{
	int i;

	int n;

	*char ar;

	n = 0;

	ar = malloc(sizeof(char) * (n + 1));

	if (ar == NULL || str == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			ar[i] = str[i];
			n++;
		}
	}
	ar[n] = '\0';
	return (ar);
}
