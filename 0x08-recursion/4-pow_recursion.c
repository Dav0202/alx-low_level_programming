#include "main.h"
/**
 * _pow_recursion - return power
 * @x: input parameter
 * @y: input parameter
 * Description: returns the value of x raised y
 * Return: returns x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
