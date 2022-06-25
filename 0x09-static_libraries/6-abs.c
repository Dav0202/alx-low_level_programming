#include "main.h"
/**
 * _abs - absolute
 * @n: Integer
 * Description: Returns absolute number of input
 * Return: Always returns 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
