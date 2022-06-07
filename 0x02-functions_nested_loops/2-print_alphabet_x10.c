#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 * Description: prints alphabets 10 times
 * Return: Always return 0
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		n++;
		_putchar('\n');
	}
}
