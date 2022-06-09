#include "main.h"
/**
 * more_numbers - print numbers
 * Description: prints list of numbers 10 times
 * Return: Always return 0
 */
void more_numbers(void)
{
	int i, n;

	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 10)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
		n++
	}
}
