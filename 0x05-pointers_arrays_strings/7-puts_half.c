#include "main.h"
/**
 * puts_half - print half
 * @str: parameter
 * Description: prints half of a string
 * Return: Always return;
 */
void puts_half(char *str)
{
	int i;

	int n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		n = (i + 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
                }
	}
	else
	{
		n = (i / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
