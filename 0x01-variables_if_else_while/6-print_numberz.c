#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 * Return: Always (0)
 */
int main(void)
{
	int n = 10;

	while (n <= 58)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
