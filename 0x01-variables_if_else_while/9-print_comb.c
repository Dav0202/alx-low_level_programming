#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always(0)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 58)
			continue;
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
