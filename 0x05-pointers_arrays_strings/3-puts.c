#include "main.h"
/**
 * _puts - put string
 * @str: parameter
 * Description: prints a string
 * Return: Always Returns 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
