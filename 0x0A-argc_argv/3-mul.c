#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if erroe doesnt exist
 */
int main(int argc, char *argv[])
{
	int i, first, second, result;

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}
	for (i = 0; i < argc; i++)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
	}
	result = first * second;
	printf("%d\n", result);
	return (0);
}
