#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: number of bytes to be used
 * Description: use at most n bytes from src
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j;

	j = 0;
	
	while (dest[j] != '\0')
	{
		++j;
	}
	for (i = 0, src[i] != '\0' && i < n, ++i,++j)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
