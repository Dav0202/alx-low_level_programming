#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elemets
 * Description: reverses the content of an array of integers
 * Return: always (0)
 */
void reverse_array(int *a, int n)
{
	int l, r,  tmp;

	l = 0;

	r = n - 1;

	while (l < r)
	{
		tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
}
