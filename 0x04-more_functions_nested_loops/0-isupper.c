#include "main.h"
/**
 * _isupper - checks if uppercase
 * @ch: character to check
 * Return: returns a 1 or 0
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	return (0);
}
