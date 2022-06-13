#include "main.h"
/**
 * swap_int - swap integers
 * @a: parameter 1
 * @b: parameter 2
 * Description: swaps the values of two integers
 * Return: Always returns 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
