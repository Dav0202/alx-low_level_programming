#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - prints number of arguments
 * @argc: first parameter
 * @argv: second parameter
 * Description: prints number of arguments
 * Return: 0 for code success
 */
int main(int argc, char **argv)
{
	int sum;

	UNUSED(argv);

	for (sum = 0; sum < argc; sum++)
	{
	}
	printf("%d\n", (sum - 1));
	return (0);
}
