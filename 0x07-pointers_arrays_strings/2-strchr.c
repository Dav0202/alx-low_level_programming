#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character
 * @s: input parameter 1
 * @c: input parameter 2
 * Description: locates a character in a string
 * Return: returns s or returns NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
