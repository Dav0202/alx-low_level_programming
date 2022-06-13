#include "main.h"
/**
 * rev_string - reverse a string
 * @s: parameter
 * Description: reverses a string.
 * Return: Always return 0
 */
void rev_string(char *s)
{
	int n;

	int i;

	char t;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}
