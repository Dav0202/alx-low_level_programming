#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate string
 * @haystack: input parameter
 * @needle: input parameter
 * Description: locates a substring
 * Return: returns a pointer to the substring, else returns NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack)
	{
		i = haystack;
		j = needle;
		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (i);
		}
		else
		{
			haystack = i + 1;
		}
	}
	return (NULL);
}
