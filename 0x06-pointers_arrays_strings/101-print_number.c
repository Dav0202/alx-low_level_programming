#include "main.h"
/**
 * print_number - encode string
 * @n: input parameter
 * Description: print number
 * Return: always returns 0
 */
void print_number(int n)
{
	unsigned int i, x, count;

	if (n < 0)
	{
		i = -n;
		_putchar(45);
	}
	else
	{
		i = n;
	}
	x = i;

	count = 1;

	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
