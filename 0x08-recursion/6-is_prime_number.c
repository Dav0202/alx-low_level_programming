#include "main.h"
/**
 * prime - find a prime number
 * @i: input parameter
 * @j: input parameter
 * Description: returns 1 if prime
 * Return: boolean val
 */
int prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (prime(i, j - 1));
}
/**
  * is_prime_number - printing prime numbers
  * @n: input parameter
  * Description: returns 1 if the input integer prime number
  * Return: returns the state of the inout value
  */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
