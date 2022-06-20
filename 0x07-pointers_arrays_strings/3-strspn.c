#include "main.h"
/**
 * _strspn - gets length
 * @s: input parameter
 * @accept: parameter
 * Description: gets the length of a prefix substring
 * Return: num of bytes in s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
	}
	return (i);
}
