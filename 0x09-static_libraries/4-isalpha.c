#include "main.h"

/**
 * _isalpha - Return 1 for correct input
 * @c: input
 * Description: Checks for alphabetic charcters
 * Return: Always returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
