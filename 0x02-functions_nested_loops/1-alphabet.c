#include "main.h"
/**
 * print_alphabet - prints alphabets
 * Description: prints all alphabets in lowercase
 * Return: always returns 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
