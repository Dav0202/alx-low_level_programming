#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: character to separate numbers
 * @n: n for numbers of input parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%d %s", va_arg(x, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(x);
	printf("\n");
}
