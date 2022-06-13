#include "main.h"
/**
 * puts2 - puts string twice
 * @str: string to put twice
 * Description: reverses a string.
 * Return: Always return 0
 */
void puts2(char *str)
{
	int i;
  
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
