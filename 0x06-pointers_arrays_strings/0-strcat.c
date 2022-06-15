#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Description: appends the src string to the dest string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	n = 0;
  
	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; src[i] != '\0'; i++, n++)
	{
		dest[n] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
