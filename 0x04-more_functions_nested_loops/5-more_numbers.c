#include "main.h"
/**
 * more_numbers - print numbers
 * @i - integer 1
 * @n - integer 2
 * Description: prints list of numbers 10 times
 * Return: Always return 0
 */

void more_numbers(void)
{
	int n, i;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
