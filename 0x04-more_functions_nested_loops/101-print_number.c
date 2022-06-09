#include "main.h"
/**
 * print_number - print number
 * @n: integer
 * Description: prints an integer
 * Return: Always return 0
 */
void print_number(int n)
{
	if ((n < 0) && (n >= -9))
	{
		_putchar('-');
		_putchar((n * -1) + '0');
	}
	else if (n <= -10)
	{
		_putchar('-');
		_putchar(((n / 10) * -1) + '0');
		_putchar(((n % 10)  * -1) + '0');
	}
	else if ((n >= 0) && (n <= 9))
	{
		_putchar(n + '0');
	}
	else if ((n >= 10) && (n <= 99))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
