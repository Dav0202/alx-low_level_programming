#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * @s: input parameter
 * Description: prints a string in reverse
 * Return: always return 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
