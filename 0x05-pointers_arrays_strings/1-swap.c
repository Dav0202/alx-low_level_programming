#include "main.h"
/**
 * swap_int - swap integers
 * @a: first parameter
 * @b: second parameter
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
