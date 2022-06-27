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
	char *ar;

	int i;

	int n;

	n = 0;

	if (ar == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	n++;

	ar = malloc(sizeof(*str) * n);

	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[n] = '\0';
	return (ar);
}
