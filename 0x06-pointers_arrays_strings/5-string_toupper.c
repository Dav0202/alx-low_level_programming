#include "main.h"
/**
 * string_toupper - uppercase strings
 * @s: input parameter
 * Description:  changes all lowercase letters of a string to uppercase
 * Return: Return Reversed String
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
