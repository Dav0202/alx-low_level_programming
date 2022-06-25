#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds all positive numbers and then prints it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			j += atoi(argv[i]);
		}
	}
	printf("%i\n", j);
	return (0);
}
