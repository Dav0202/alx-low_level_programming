#include "main.h"
/**
 * leet - encode string
 * @str: input string
 * Description: encodes a string into 1337
 * Return: always (0)
 */
char *leet(char *s)
{
	char Arr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; Arr[j] != '\0'; j++)
		{
			if (s[i] == Arr[j])
			{
				s[i] = Arr[j + 1];
				break;
			}
		}
	}
	return (s);
}
