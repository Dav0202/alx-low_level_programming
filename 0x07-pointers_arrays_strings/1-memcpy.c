#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: input parameter 1
 * @src: input parameter 2
 * @n: input parameter 3
 * Description: copies n bytes from memory area src to memory area dest
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
