#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;

	unsigned int t1, t2, i;

	if (s1 == NULL)
	{
		t1 = "";
	}
	for (t1 = 0; s1[t1]; ++t1)
	{
	}
	if (s2 == NULL)
	{
		t2 = "";
	}
	for (t2 = 0; s2[t2]; ++t2)
	{
	}
	if (t2 > n)
	{
		t2 = n;
	}
	ar = malloc((t1 + t2 + 1) * sizeof(char));
	
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < t1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < t2; i++)
	{
		ar[t1 + i] = s2[i];
	}
	ar[t1 + t2] = '\0';
	return (ar);
}
