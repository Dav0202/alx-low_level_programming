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
	int i, j, s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (atoi(argv[i][j]) < 0 || atoi(argv[i][j]) > 9)
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
