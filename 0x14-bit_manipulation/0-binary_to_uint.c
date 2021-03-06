#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strlen - Returns the length of a string
* @str: String to count
* Return: String len
*/
int _strlen(const char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: The binary string to convert
* Return: The positive number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
		{
			return (0);
		}
		if (b[len] == 49)
		{
			sum += 1 << count;
		}
		count++;
	}
	return (sum);
}
