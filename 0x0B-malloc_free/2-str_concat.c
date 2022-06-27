#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first input parameter
 * @s2: second input parameter
 * Return: returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;

	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;
	ar = malloc(len1 + len2 + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < len1)
	{
		ar[i] = s1[i];
		i++;
	}
	j = 0;

	while (i < (len1 + len1))
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	ar[i] = '\0';
	return (ar);
}
