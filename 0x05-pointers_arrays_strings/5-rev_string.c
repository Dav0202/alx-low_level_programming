#include "main.h"
/**
 * rev_string - reverse a string
 * @s: parameter
 * Description: reverses a string.
 * Return: Always return 0
 */
void rev_string(char *s)
{
	int left, i, temp;

	left = 0;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > left)
	{
		temp = s[i];
		s[i--] = s[left];
		s[left++] = temp;
		i--;
	}
}
