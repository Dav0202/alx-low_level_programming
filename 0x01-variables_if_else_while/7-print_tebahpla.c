#include <stdio.h>
/**
 * main - Prints a list of numbers
 * Description: prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always(0)
 */
int main(void)
{
	char c = 'z';
  
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
