#include "main.h"
/**
 * _strlen_recursion - return string len
 * @s: input parameter
 * Description: returns the length of a string
 * Return: returns string len
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
