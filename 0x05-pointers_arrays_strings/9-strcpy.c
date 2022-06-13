#include "main.h"
/**
 * _strcpy - main function to copy
 * @dest: destination to copy
 * @src: src
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
  
	int p;

	p = 0;

	while (str[i] != '\0')
	{
		p++;
	}

	for (i = 0; i <= p; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
