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
	
	int p;

	int n;
	
	n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		n += 1;
	}
	for (p = i + n / 2; p < n; p++)   
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
