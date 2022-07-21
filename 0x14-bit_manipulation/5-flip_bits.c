#include "holberton.h"
/**
 * flip_bits - flips binary numbers
 * @n: first parameter
 * @m: second parameter
 * Return: No to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	unsigned int to_flip = 0;

	while (r)
	{
		if (1 & r)
		{
			to_flip++;
		}
		r = r >> 1;
	}
	return (to_flip);
}
