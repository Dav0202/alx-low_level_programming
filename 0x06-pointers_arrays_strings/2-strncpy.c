#include "main.h"
/**
 * _strncpy - string copy
 * @dest: first parameter
 * @src: second parameter
 * @n: no of bytes
 * Description: the function copies a string
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
  
	i = 0;

	for ( ; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
  return (dest);
}
