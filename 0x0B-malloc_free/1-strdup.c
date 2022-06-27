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
	
	int len1;

	n = 0;
	
	for (len1 = 0; str[len1] != '\0'; len1++)
		continue;
	
	ar = malloc(len1 + 1);

	if (ar == NULL || str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		ar[i] = str[i];
	}
	ar[n] = '\0';
	return (ar);
}
