#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 for success
 */
int main(int argc, char *argv[])
{
	int a, b;
	
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Error\n"), exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i\n", ptr(a, b));
	return (1);
}
