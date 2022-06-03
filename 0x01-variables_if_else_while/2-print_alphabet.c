#include <stdio.h>
/**
 * main - alphabet in lowercase, followed by a new line
 * Return: Always(0)
 */
int main(void)
{
	char charater = 'a';

	for (charater = 'a'; charater <= 'z'; charater++)
	{
		putchar(charater);
	}

	putchar ('\n');

	return(0);
}
