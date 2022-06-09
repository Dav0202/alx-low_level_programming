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
	int n; 
	int i;

	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		n++
		_putchar('\n');
	}
}
