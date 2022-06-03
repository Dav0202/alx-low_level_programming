#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - finds the last int in a random number
 *
 * Return: Always(0) Success
 */
int main(void)
{
	int n, lastdigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is %d and is ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("ans is greater than 5\n");
	}
	else if (lastdigit  == 0)
	{
		printf("and is 0\n");
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("amd is less than 6 and not 0\n");
	}
	return (0);
}
