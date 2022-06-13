#include "main.h"
/**
 * reset_to_98 - reset to 98
 * @n: parameter
 * Description: takes a pointer to an int as parameter updates value
 * Return: Always returns zero
 */
void reset_to_98(int *n)
{
	int *num;

	int x = 98;

	num = &x;
	*n = *num;
}
