#include "main.h"
/**
 * print_rev - print reverse
 * @s: parameter
 * Description: prints a string, in reverse
 * Return: Always returns 0
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	if (len != 0)
	{
		for (i = len; len >= 0; len--)
		{
			_putchar(*(s + len));
		}
	}
	_putchar('\n');
}
