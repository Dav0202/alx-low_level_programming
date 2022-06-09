#include "main.c"
/**
 * prints_most_number - print most numbers
 * Description: prints the number except 2 numbers
 * Returns : always returns zero
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i !='4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
